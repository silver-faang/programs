#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll a, b, x;
        cin>>x>>a>>b;
        x=100-x;
        x=x*b;
        cout<<(x+a)*10<<"\n";
    
    }
    return 0;
}