#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll mod = 1e9+7;
int solve(){
    ll n;
    cin>>n;

    ll ans = ((((n*(n+1))%mod)*(4*n-1))%mod*337)%mod;
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}