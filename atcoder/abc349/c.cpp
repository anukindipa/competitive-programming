#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
    string s;
    string t;
    cin >> s >> t;
    int ch = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
        {
            for (int k = j; k < s.length(); k++)
            {
                char s1 = s[i];
                char s2 = s[j];
                char s3 = s[k];

                if ((t[0] == s1 && t[1] == s2 && t[2] == s3) || (t[0] == s1 && t[1] == s2 && t[2] == 'x'))
                {
                    ch = 1;
                }
            }
        }
    }
    if (ch)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    int tst = 1;
    for (int i = 0; i < tst; i++)
    {
        solve();
    }
}