#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int m;
        cin >> m;
        sum = sum + m;
    }
    cout << 0 - sum << endl;
}

int main()
{
    int tst = 1;
    for (int i = 0; i < tst; i++)
    {
        solve();
    }
}