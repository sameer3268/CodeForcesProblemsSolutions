#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n;
     cin>>n;

     vector<int> v(n);

     for(int i=0;i<n;i++) cin>>v[i];

     map<int,int> mp;

     for(int i=0;i<n;i++) mp[v[i]]++;

     int ans = 0;

     for(auto &[ele, fre] : mp){
        ans += max(0, mp[ele]-mp[ele-1]);
     }
     cout<<ans<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}