#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;

    map<int,int> fr;
   int cnt = 0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp%k){
            fr[k-temp%k]++;
            cnt++;
        }
    }

    if(cnt == 0){
        cout<<0<<'\n';
        return;
    }

    int ma = 0;
    int rem;
    // for(auto [x,y] : fr){
    //     if(ma <= y){
    //         ma = y;
    //         rem = x;
    //     }
    // }
    for(auto it : fr){
    int x = it.first;
    int y = it.second;

    if(ma <= y){
        ma = y;
        rem = x;
    }
}
    
    cout<<1LL*(ma-1)*k+rem+1<<'\n';
}
int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}