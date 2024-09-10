#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // input necessery values
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  // sort a O(N log N)
  sort(a.begin(), a.end());

  while (q--) {
    int b, k;
    cin >> b >> k;
    // lambda function f
    // [&] means capture all variables in outer scope as reference (valuess can
    // be altered by f)
    // [=] capture but make copy so does not affect variables
    auto f = [&](int x) -> bool {
      // (# of points in [b-x, b+x]) >= k

      // iterator to lowerbound
      auto lb = lower_bound(a.begin(), a.end(), b - x);
      // iterator to upper bound
      auto ub = upper_bound(a.begin(), a.end(), b + x);
      // returns true if the number of elements with differeces <= x is greater
      // than x O(log N)
      return ub - lb >= k;
    };
    int ng = -1, ok = (int)2e8 + 10;
    while (ok - ng > 1) {
      // binary search
      // O(log N)
      // with each comparison means another logN so overall time is O(logA *
      // logA)? Actually in this case binary seach is done with constant ok =
      // 2e8+10 therefore takes constant time. this constant can iguess be
      // Actually in this case binary seach is done with constant ok = 2e8+10
      // thyrefore takes constant time. this constant can iguess be atmost N No.
      // it is not related to N Actually related to k which is related to a_i
      // [-10e8,10e8] Why was that value chosen for ok????? ahhahahhh 2e8 =
      // 2*10^8 not 2^8 in which case it makes sense why was +10 chosen??
      // chatgpt says its a buffer that is small enough so that it won't cause
      // any problems since ok is a constant time complexity is O(ok * log N) =
      // O(log N) multiplied by Q-> overall complexity = O(N log N + Q log A) am
      // not sure what A refers to but could be the accounting for ok. editorial
      // says that but its roughly equyal to N ig.
      int mid = (ok + ng) / 2;
      if (f(mid))
        ok = mid;
      else
        ng = mid;
    }
    cout << ok << '\n';
  }
}
