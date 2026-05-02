#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t=1;
    cin>>t;

    while(t--){
       ll n,x,y;
       cin>>n>>x>>y;
       vector<ll> a(n);
         for(int i=0;i<n;i++) cin>>a[i];
        
        map<ll,map<ll,ll>> mp;
        ll ans = 0;
        for(int i=0;i<n;i++){
            ans += mp[(x-a[i]%x)%x][a[i]%y];
            mp[a[i]%x][a[i]%y]++;
        }
        cout<<ans<<"\n";
    } 
}