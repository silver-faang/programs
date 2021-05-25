
#include <iostream>
using namespace std;

int main()
{ 
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
	 {
	     float k1,k2,k3,v1;
	     int vr,v2;
	     cin>>k1>>k2>>k3>>v1;
	     v1=k1*k2*k3*v1;
		 //cout<<v1<<"#1 \n";
		 v1=100/v1;
	     v2=(v1*1000);
		 //cout<<v2<<"#2 \n";
	     vr=v2%10;
		 //cout<<vr<<" #3 \n";
	     if (vr>=5)
	     {v1=float(v2-vr)/1000+0.01;
		 //cout<<v1<<"#4.1 \n1";
		 }
	     else 
	     {v1=float(v2-vr)/1000;
		 //cout<<v1<<"#4.2 \n";##v1-958<=0.0001 || 958-v1>=0.0001
		 }
         //##v1=v2/1000;
         v1=v1*100;
	     if (v1<958)
	      cout<<"YES"<<"\n";
	     else
	      cout<<"NO"<<"\n";
	 }
	return 0;
}
