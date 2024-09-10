#include <bits/stdc++.h>

using namespace std;

bool intscts(int a, int b, int c, int d)
{
    bool res = ((c < a && a < d) || (c < b && b < d)) || ((a < c && c < b) || (a < d && d < b));
    return res;
}

int main()
{
    int a, b, c, d, e, f;
    int g, h, i, j, k, l;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;

    if (intscts(a, d, g, j) && intscts(b, e, h, k) && intscts(c, f, i, l))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}