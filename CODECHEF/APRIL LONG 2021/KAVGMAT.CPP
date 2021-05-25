#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long t;
    cin>>t;
    for(long long a0=0;a0<t;a0++){
        long long n,m,k;
        long long ans=0;
        cin>>n>>m>>k;
        vector<vector<long long>> l(n,vector<long long>(m));
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                cin>>l[i][j];
                if(l[i][j]>=k)
                ans+=1;
            }
        }
        //cout<<"*"<<ans<<"\n";
        long long c=1;
        while(c<min(n,m)){
            long long i=0,j=0;

            //cout<<"*"<<i<<" "<<j<<" "<<i+c<<" "<<j+c<<"\n";

                long long tp=0,tp1=0;
                for(long long ii=i;ii<i+c+1;ii++){
                    for(long long jj=j;jj<j+c+1;jj++){
                        tp+=l[ii][jj];
                    }
                }
                tp1=tp;
                //cout<<"*"<<tp<<" "<<c<<"\n";
                if(tp>=k*(c+1)*(c+1))
                ans+=1;
                
            while(i<n-c){
                j=0;
                while(j<m-c-1){
                    //cout<<"*"<<i<<" "<<j+1<<" "<<i+1<<" "<<j+c+1<<"\n";
                    for(long long i1=i;i1<i+c+1;i1++){
                        tp-=l[i1][j];
                        tp+=l[i1][j+c+1];
                    }
                    //cout<<"*"<<tp<<" "<<c<<"\n";
                    if(tp>=k*(c+1)*(c+1))
                    ans+=1;
                    j+=1;
                }
                if(i<n-c-1){
                    j=0;
                    //cout<<"*"<<i+1<<" "<<j<<" "<<i+1+c<<" "<<j+c<<"\n";
                    for(long long i1=0;i1<c+1;i1++){
                        tp1-=l[i][i1];
                        tp1+=l[i+c+1][i1];
                    }
                    tp=tp1;
                    //cout<<"*"<<tp<<" "<<c<<"\n";
                    if(tp>=k*(c+1)*(c+1))
                        ans+=1;}
                    i+=1;
            }
            c+=1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}    