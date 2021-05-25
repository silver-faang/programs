#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll n, x, k;
        cin>>n>>x>>k;
        if (x%k==0 || (n-x+1)%k==0)
         cout<<"YES\n";
        else
         cout<<"NO\n";
    }
    return 0;
}