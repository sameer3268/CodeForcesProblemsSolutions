#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,q;
    cin>>n>>q;

    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<long long> b(q);
    for(int i=0;i<q;i++) cin>>b[i];

    vector<long long> preSum(n);
    preSum[0] = a[0];
    for(int i=1;i<n;i++) preSum[i] = preSum[i-1] + a[i];

  
    vector<long long> maxStep(n);
    maxStep[0] = a[0];
    for(int i=1;i<n;i++) maxStep[i] = max(maxStep[i-1], a[i]);

    vector<long long> ans;
    ans.reserve(q);

    for(int i=0;i<q;i++){
        long long x = b[i];
        int idx = upper_bound(maxStep.begin(), maxStep.end(), x) - maxStep.begin() - 1;

        if(idx >= 0) ans.push_back(preSum[idx]);
        else ans.push_back(0);
    }

    for(int i=0;i<q;i++) cout<<ans[i]<<" ";
    cout<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
