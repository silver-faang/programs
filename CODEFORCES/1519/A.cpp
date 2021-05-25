#include<iostream>
using namespace std;
int main ()
{
 long long t;
 cin>>t;
 for (long long i=0;i<t;i++)
 {
     long long r,b,d,swp;
     cin>>r>>b>>d;
     if (r>b)
      {swp=b;
      b=r;
      r=swp;
      }
     if (d*r>=b-r)
      cout<<"YES"<<"\n";
     else
     cout<<"NO"<<"\n"; 
 
 }  
return 0;
}