#include <bits/stdc++.h>
using namespace std;
#define ll long long 
// int main(){
//     int n;
//     cin>>n;
//     int k = n/2;
//     long long int ans = 0;
//     if(n%2 == 0){
//         ans = (k+1)*(k+1);
//     }
//     else{
//         ans = 2*(k+1)*(k+2);
//     }
//     cout<<ans<<endl;
//     return 0;
// } 

//Different approach

int main(){
        ll n;
        cin>>n;

        ll dot = 0,times = 0;
        ll ans = 0;
        if(n%2 == 1){
            dot = 1;
            for(ll i=1;i<=n;i +=2){
                dot++;
                times++;
            }
            ans = 2*dot*times;
        }
        else{
            dot = 1;
            times = 1;
            for(ll i=2;i<=n;i += 2){
                dot++;
                times++;
            }
            ans = dot*times;
        }
        cout<<ans<<endl;
}