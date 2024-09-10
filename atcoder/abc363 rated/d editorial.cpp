#include <iostream>
#include <string>
using namespace std;

long long TEN(int x) {
  return x == 0 ? 1 : TEN(x - 1) * 10;
}

int main() {
  long long N;
  cin >> N;
  if (N == 1) {
    cout << 0 << endl;
    return 0;
  }
  N--;
  for (int d = 1;; d++) {
    int x = (d + 1) / 2;
    if (N <= 9 * TEN(x - 1)) {
      string S = to_string(TEN(x - 1) + N - 1);
      S.resize(d, ' ');
      for (int i = x; i < d; i++)
        S[i] = S[d - 1 - i];
      cout << S << endl;
      return 0;
    } else {
      N -= 9 * TEN(x - 1);
    }
  }
}
