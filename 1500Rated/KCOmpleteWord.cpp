#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int sz = (k+1)/2;

    vector<vector<int>> grp(sz,vector<int>(26,0));

    for(int i=0;i<n;i++){
        int j = i%k;
        if(j >= k/2){
            j = k-j-1;
        }

        grp[j][s[i]-'a']++;
    }

    int ans = 0;

    for(auto f : grp){
        int sum = 0, mx = 0;

        for(auto i : f){
            sum += i;
            mx = max(mx,i);
      }
      ans += sum - mx;
    }
    cout<<ans<<'\n';
}

int main(){
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