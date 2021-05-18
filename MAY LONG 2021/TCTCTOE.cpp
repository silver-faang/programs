#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll w1=0,w2=0,c1=0,c2=0,c3=0;
        string A[3];
        for (ll x=0;x<3;x++)
        {
            cin>>A[x];
            for (ll y=0;y<3;y++)
            {
                switch(A[x][y])
                {
                    case 'O':
                     c1+=1;
                     break;
                    case 'X':
                     c2+=1;
                     break;
                    case '_':
                     c3+=1;
                     break;
                }
            }
        }
        if ((c1-c2)>=1 || (c2-c1)>=2)
         cout<<"3\n";
        else
        {
          for (ll x=0;x<3;x++)
          {
            if (A[x][0]==A[x][1] && A[x][1]==A[x][2])
             {
                 if(A[x][0]=='O')
                  w1+=1;
                 else if (A[x][0]=='X')
                  w2+=1;
                 else;
             }
             if (A[0][x]==A[1][x] && A[1][x]==A[2][x])
             {
                 if(A[0][x]=='O')
                  w1+=1;
                 else if (A[0][x]=='X')
                  w2+=1;
                 else;
             } 
          } 
          if (A[0][0]==A[1][1] && A[1][1]==A[2][2])
           {
            if(A[0][0]=='O')
             w1+=1;
            else if (A[0][0]=='X')
             w2+=1;
            else;
           }
          if (A[0][2]==A[1][1] && A[1][1]==A[2][0])
           {
            if(A[0][2]=='O')
             w1+=1;
            else if (A[0][2]=='X')
             w2+=1;
            else;
           }
          if (w1==0)
           {
               if(w2==0)
                {
                    if (c3==0)
                     cout<<"1\n";  //Draw
                    else if(c3%2==0 && c2==c1+1)
                     cout<<"2\n";
                     else 
                     if (c3%2==1 && c2==c1)
                      cout<<"2\n";
                     else 
                      cout<<"3\n";
                }
               else if (c2==c1+1)
                cout<<"1\n"; //2nd p win
                else
                 cout<<"3\n"; //1st plays after loosing
           } 
          else
           {
               if (w2==0) 
                {if (c1==c2)
                 cout<<"1\n"; //1st p win
                else 
                 cout<<"3\n"; //2nd plays after loosing}
                } 
               else 
                cout<<"3\n";
           }   
        } 
    }
    return 0;
}