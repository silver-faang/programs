//https://codeforces.com/contest/1520/problem/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++){
        ll n, a = 0, b, s, x, ans;
        cin >> n;
        b = n;
        while (b != 0){
            //cout << b << "\n";
            b = b / 10;
            a = a + 1;
        }
        if (a == 1){
            ans = n % 10;
            cout << ans << "\n";
        }
        else {//n=523 //a=3
            //cout << a << "\n";
            int d = pow(10, a - 1);//d=100
            //cout << x << "  #x \n";
            x = n / d;//x=5
            for (ll c = a - 1; c > 0; c--){//c=2->1
                s = pow(10, c-1);//s=10
                n=n%(s*10);//n=23
                s = n / s;//s=2
                if (s > x)//no
                    break;
                else if (s < x){//yes
                    x = x - 1;//if n=54 originally then chk till 44 not 55
                    break;
                }
                else if (c == 1) {//when s==x
                    s = n % 10;//3
                    // cout<<s<<"   #s\n";
                    if (s > x)
                        break;
                    else if (s < x){
                        x = x - 1;
                        break;
                    }
                }
            }
            ans = 9 * (a - 1) + x;
            cout << ans << "\n";
        }
    }
    return 0;
}