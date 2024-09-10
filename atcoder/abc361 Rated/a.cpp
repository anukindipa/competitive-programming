#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (i == k)
        {
            v.push_back(x);
        }
        int aaa;
        cin >> aaa;
        v.push_back(aaa);
    }
    if (k == n)
    {
        v.push_back(x);
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << v[i] << " ";
    }
}