#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<int> v(26);
    for (int i = 0; i < n; i++)
    {
        v[s[i] - 'a']++;
    }
    int t = 1;
    vector<int> v2(102);
    for (int i = 0; i < 26; i++)
    {
        // cout << v[i] << ", ";
        v2[v[i]]++;
    }

    for (int i = 1; i < 102; i++)
    {
        // cout << v2[0] << ',' << ' ';
        if (v2[i] == 0 || v2[i] == 2)
        {
        }
        else
        {
            t = 0;
        }
    }

    if (t)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return;
}

int main()
{
    int tst = 1;
    for (int i = 0; i < tst; i++)
    {
        solve();
    }
}