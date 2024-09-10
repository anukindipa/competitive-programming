#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        long long aaa;
        cin >> aaa;
        v.push_back(aaa);
    }
    sort(v.begin(), v.end());
    long long mx = LLONG_MAX;

    for (int i = 0; i < k + 1; i++)
    {
        mx = min(mx, v[n - 1 - k + i] - v[i]);
    }
    cout << mx;
}