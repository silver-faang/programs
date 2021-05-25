#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,d,sum,temp;
	cin>>t;
	for (int i=1; i<=t; i=i+1)
	{
	  cin>>n>>k>>d;
	  sum=0,temp=0;
	  for(int j=0;j<n;j++){
          cin>>temp;
          sum+=temp;
	  }
	 sum/=k;
	 if (sum>=d)
      cout<<d<<"\n";
     else
      cout<<sum<<"\n";      
	}
	return 0;
}
