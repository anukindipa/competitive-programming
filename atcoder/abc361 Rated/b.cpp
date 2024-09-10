#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    int g, h, i, j, k, l;
    cin >> g >> h >> i >> j >> k >> l;
    cin >> a >> b >> c >> d >> e >> f;

    int r = 1;
    int q = 1;
    int s = 0;
    int t = 0;
    if (!((a >= g && a <= j) || (d >= g && d <= j)))
    {
        r = 0;
    }
    if (!((b >= h && b <= k) || (e >= h && e <= k)))
    {
        r = 0;
    }
    if (!((c >= i && c <= l) || (f >= i && f <= l)))
    {
        r = 0;
    }

    if (((a > g && a < j) || (d > g && d < j)))
    {
        s = 1;
    }
    if (((b > h && b < k) || (e > h && e < k)))
    {
        s = 1;
    }
    if (((c > i && c < l) || (f > i && f < l)))
    {
        s = 1;
    }
    swap(a, g);
    swap(b, h);
    swap(c, i);
    swap(d, j);
    swap(e, k);
    swap(f, l);

    if (!((a >= g && a <= j) || (d >= g && d <= j)))
    {
        q = 0;
    }
    if (!((b >= h && b <= k) || (e >= h && e <= k)))
    {
        q = 0;
    }
    if (!((c >= i && c <= l) || (f >= i && f <= l)))
    {
        q = 0;
    }

    if (((a > g && a < j) || (d > g && d < j)))
    {
        t = 1;
    }
    if (((b > h && b < k) || (e > h && e < k)))
    {
        t = 1;
    }
    if (((c > i && c < l) || (f > i && f < l)))
    {
        t = 1;
    }

    if ((r && s) || (q && t))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
