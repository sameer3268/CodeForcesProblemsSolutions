#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,p;
    cin>>n>>k;
    int ans = 0;
    vector<int> v(n);
    for(auto &i : v){
        cin>>i;
    }
    cin>>p;
    p--;

    int c = v[p],l=0,r=0;
    for(int i=0;i<p;i++) l += (v[i] != v[i+1]);
    for(int i=p;i<n-1;i++) r+= (v[i] != v[i+1]);

    ans = max(l,r) + max(l,r)%2;
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}