#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);

    for(int i=0;i<n;i++) cin>>vec[i];

    vector<vector<int>> pos(n+1);

    for(int i=0;i<n;i++){
        pos[vec[i]].push_back(i);
    }

    vector<int> ans(n,-1);

    for(int i=1;i<=n;i++){
        if(pos[i].empty()) continue;

        int mx = pos[i][0] + 1;
        for(int j=1;j<pos[i].size();j++){
            mx = max(mx,pos[i][j]-pos[i][j-1]);
        }
        mx = max(mx,n-pos[i].back());

        for(int j=mx-1;j<n;j++){
            if(ans[j] != -1) break;
            ans[j] = i;
        }
    }


    for(auto i : ans){
        cout<<i<<' ';
    }
    cout<<'\n';

}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
