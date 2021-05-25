#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
     ll n,mn,v=0;   
     cin>>n;
     ll A[n];
     for (ll x=0;x<n;x++)
        cin>>A[x];
     mn=A[0];   
     for (ll x=0;x<n;x++)
     {
       
        if (A[x]<mn )
         mn=A[x];
        
     }
     for (ll x=0;x<n;x++)
     {
         if (A[x]==mn )
          v+=1;
     }     
     cout<<n-v<<"\n";
    }
    return 0;
}    

    