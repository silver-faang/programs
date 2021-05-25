#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for (int i=0;i<t;i++){
		int n,m,mi,v1=0,v2=0,z,diff1=0,diff2;
		cin>>n>>m;
		if (n>m)
			mi=m ;
		else 
			mi=n ;
		int a[n],b[m];
		for (int z=0;z<n;z++){
			cin>>a[z];
			v1+=a[z];
			}        
		for ( z=0;z<m;z++){
			cin>>b[z];
			v2+=b[z];
			}

		diff2=v2-v1;
		if (diff2<0)
         cout<<0<<"\n";
		else{		

			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
					if(a[i]>a[j]){
						int temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
			// cout<<"Array 1\n";
			// for(int i=0;i<n;i++)
			// cout<<a[i]<<" ";
			// cout<<"\n";
			for(int i=0;i<m-1;i++){
				for(int j=i+1;j<m;j++){
					if(b[i]>b[j]){
						int temp=b[i];
						b[i]=b[j];
						b[j]=temp;
					}
				}
			}
			// cout<<"Array 2\n";
			// for(int i=0;i<m;i++)
			// cout<<b[i]<<" ";
			// cout<<"\n";
			for (z=0;z<mi;z++){
				diff1+=b[m-1-z]-a[z];
				if (2*diff1>diff2){
					// cout<<diff2<<" "<<diff1<<"***\n";
					cout<<z+1<<"\n";
					break;
					}
				}
			if (2*diff1<=diff2){
					// cout<<diff2<<" "<<diff1<<"***\n";
					cout<<"-1\n";
					}
		}
	}  
	return 0;
}