#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll N=1,n,a,c=2;
        cin>>n;
        a=pow(10,9)+7;
        for (ll x = n-1; x > 0; x/=2)
        {
          if (x%2!=0)
          { 
            N=N*c;
            N=N%a;
          }
          c=c*c;
          c%=a;
          
        }
        N=N%a;
        cout<<N<<"\n";
    }
    return 0;
}