#include <bits/stdc++.h>

using namespace std;

int insidecube(vector<int> cube, vector<int> v)
{
    int r = 1;
    if (!((v[0] > cube[0] && v[0] < cube[3])))
    {
        r = 0;
    }
    if (!((v[1] > cube[1] && v[1] < cube[4])))
    {
        r = 0;
    }
    if (!((v[2] > cube[2] && v[2] < cube[5])))
    {
        r = 0;
    }
    return r;
}

int main()
{
    int a, b, c, d, e, f;
    int g, h, i, j, k, l;
    cin >> g >> h >> i >> j >> k >> l;
    cin >> a >> b >> c >> d >> e >> f;

    vector<int> c1{a, b, c, d, e, f};
    vector<int> c2{g, h, i, j, k, l};

    vector<int> a1{a, b, c};
    vector<int> a2{a, b, f};
    vector<int> a3{a, e, c};
    vector<int> a4{a, e, f};
    vector<int> a5{d, b, c};
    vector<int> a6{d, b, f};
    vector<int> a7{d, e, c};
    vector<int> a8{d, e, f};

    vector<int> b1{g, h, i};
    vector<int> b2{g, h, l};
    vector<int> b3{g, k, i};
    vector<int> b4{g, k, l};
    vector<int> b5{j, h, i};
    vector<int> b6{j, h, l};
    vector<int> b7{j, k, i};
    vector<int> b8{j, k, l};

    vector<int> rr{insidecube(c1, b1), insidecube(c1, b2), insidecube(c1, b3), insidecube(c1, b4), insidecube(c1, b5), insidecube(c1, b6), insidecube(c1, b7), insidecube(c1, b8), insidecube(c2, a1), insidecube(c2, a2), insidecube(c2, a3), insidecube(c2, a4), insidecube(c2, a5), insidecube(c2, a6), insidecube(c2, a7), insidecube(c2, a8)};
    int rrr = *max_element(rr.begin(), rr.end());
    if (rrr)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
