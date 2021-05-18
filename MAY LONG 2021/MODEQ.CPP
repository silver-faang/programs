#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a0;
    cin>>a0;
    while(a0--){
        ll n,m,mi;
        cin>>n>>m;
        mi=n;
        ll ans=0;
        vector<ll> d(n+1,1);
        for(ll a=2;a<=n;a++){
            ll tmp=m%a;
            ans+=d[tmp];
            for(ll b=tmp;b<=n;b+=a){
                d[b]+=1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}