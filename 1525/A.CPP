#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll k,n,s1,s2=100,h=1,v;
        cin>>k;
        s1=k;
        while (s1!=0)
            {   v=s2%s1;
                if (s2%s1==0)
                 h=s1;
                s2=s1;
                s1=v;
            }
        n=100/h;   
        cout<<n<<"\n";
    }
    return 0;
}