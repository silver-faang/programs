#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin>>k;
        ll s1,s2,sum=0,v;
        //for (ll x=0;x<2*k+1;x++)
        // A[x]=k+(x+1)*(x+1);
        for (ll y=0;y<2*k;y++)
        {
            s1=k+(y+1)*(y+1);
            s2=2*(y+1)+1;
           // if (s2%s1==0)
            //{cout<<s1;
             //sum+=s1;}
           // else
            //{
            while (s1>1 )
            {
                v=s2%s1;
                if (s2%s1==0)
                {
                 sum+=s1;}
                s2=s1;
                s1=v;
               if (s1==1)
                 sum+=1;
                //cout<<s1<<" ";
            }
           // }
        }
        cout<<sum<<"\n";
    }
    return 0;
}