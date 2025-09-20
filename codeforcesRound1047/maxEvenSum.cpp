#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll ans;
        if((a%2) == 1 && (b%2) == 1){
            ans = a*b + 1;
        }
        else if((a%2) == 0 && (b%2) == 0){
            a = a*(b/2);
            b = 2;
            ans = a+b;
        }
        else if((a%2) == 1 && (b%2) == 0){
            a = a*(b/2);
            b = 2;
            ans = a+b;
            if((ans%2) == 1){
                ans = -1;
            }
        }
        else{
            ans = -1;
        }
        cout<<ans<<"\n";
    }
}