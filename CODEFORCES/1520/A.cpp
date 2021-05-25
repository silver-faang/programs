//https://codeforces.com/contest/1520/problem/A
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll t;
  cin >> t;
  for (ll i = 0; i < t; i++)
  {
   ll n,a=0,b=0,s=0;
   cin>>n;
   char w[n];
   for (ll c = 0; c < n; c++)
   {
       cin>>w[c];
   }
      for (ll c = 0; c<n;c++)
   {
     if (w[c]!=w[c+1])
          s=s+1;
     else;
   } 
   char v[s];
   for (ll c = 0; c<n;c++)
   {
     if (w[c]!=w[c+1])
      {
          v[a]=w[c];
          a=a+1;
      } 
     else;
   } 
   for (ll c = 0;c<s;c++)
     { 
         for (ll x=c+2;x<s;x=x+1)
           {
               if (v[c]==v[x])
                b=b+1;
               else;
           }
     }
   if (b==0)
      cout<<"YES\n";
   else 
      cout<<"NO\n";
  }
  return 0;
}   