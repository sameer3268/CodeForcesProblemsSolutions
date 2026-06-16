#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];

    int maxVal = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            maxVal = max(maxVal,vec[i]^vec[j]);
        }
    }
    cout<<maxVal<<"\n";
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}