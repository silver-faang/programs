#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll x1, x2, y1, y2, s = 1, v = 1, x = 1, y = 1;
        cin >> y1 >> x1 >> y2 >> x2;
        while (y != y1)
        {
            v += y + 1;
            y += 1;
        }
        while (x != x1)
        {
            v += y + x - 1;
            x += 1;
        }
        s = v;
        while (y1 != y2)
        {
            v += y1 + x1;
            s += v;
            y1 += 1;
        }
        while (x1 != x2)
        {
            v += x1 + y1 - 1;
            s += v;
            x1 += 1;
        }

        cout << s << "\n";
    }
    return 0;
}