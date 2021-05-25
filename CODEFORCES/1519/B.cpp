#include<iostream>
using namespace std;
int main ()
{
 long long t;
 cin>>t;
 for (long long i=0;i<t;i++)
 {
     long long n,m,k,v;
     cin>>n>>m>>k;
     v=(m-1)+m*(n-1);
     if (v==k)
      cout<<"YES\n";
     else 
      cout<<"NO\n";
 }  
return 0;
}