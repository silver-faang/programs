#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll n,mn=1,mx=n,c=0;
        cin>>n;
        ll a[n],v;
        for (ll x=0;x<n;x++)
        {
            cin>>a[x];
            if (a[x]!=x+1)
             c+=1;
        }     
        if (c==0)
         v=0;
        else
        {
        if (a[0]==1)
         {
              v=1;
         } 
        else
         {
             if (a[n-1]==n)
              v=1;
             else if (a[0]==n && a[n-1]==1)
                   v=3;
                  else
                   v=2;
         }
        }
        cout<<v<<"\n";
 
    }
    return 0;
}