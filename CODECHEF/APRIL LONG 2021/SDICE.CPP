#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
     {
         long long n,m,as,tl,tlv;
         cin>>n;
         m=n/4;
         //cout<<m<<"#!"<<"\n";
         tl=n % 4;
         //cout<<tl<<"#2"<<"\n";
         switch(tl)
         {
             case 0:
              {
                  tlv=0;
                  if (m!=0)
                   tlv=16;
                  else;
                  break;
              }
             case 1:
              {
                  tlv=20;
                  if (m!=0)
                   tlv=32;
                  else;
                  break;
              }
             case 2:
              {
                  tlv=36;
                  if (m!=0)
                   tlv=44;
                  else;
                  break;
              }
             case 3:
              {
                  tlv=51;
                  if (m!=0)
                   tlv=55;
                  else;
                  break;
              }
         }
        as=(m*44) + tlv;
        cout<<as<<"\n";
     }
	return 0;
}
