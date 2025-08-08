#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
     ll n;
     cin>>n;
     ll l,r;
     cin>>l>>r;
     vector<ll> ans;
     for(int i=1;i<=n;i++){
        ll temp = ((l+i-1)/i)*i;
        ans.push_back(temp);
        if(temp > r){
            cout<<"NO"<<endl;
            return;
        }
     }
     cout<<"YES"<<endl;
     for(auto it:ans){
        cout<<it<<" ";
     }
     cout<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}