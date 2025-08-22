#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
     ll n,k;
     cin>>n>>k;
     vector<ll>a(n);
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     map<ll,bool> mp;
    for(auto it : a){
        mp[it] = true;
    }
    for(int i=0;i<n;i++){
        if(mp.find(a[i]-k) != mp.end()){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}