#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void solve(){
     ll n;
     cin>>n;
     ll c;
     cin>>c;
     vector<ll> cost;
     for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        cost.push_back(x+i);
     }
     sort(cost.begin(), cost.end()); 
     
     int i=0;
     int ans=0;
     while(i<n && cost[i]<=c){
        c-=cost[i];
        ans++;
        i++;
     }
     cout<<ans<<endl;

}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}