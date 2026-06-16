#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> l(n), r(n);
    for(int i=0;i<n;i++) cin>>l[i]>>r[i];

    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        a.push_back({l[i],1});
        a.push_back({r[i]+1,-1});
    }

    sort(a.begin(),a.end());

    int s = 0;
    for(auto it : a){
        s += it.second;
        if(s > 2){
            cout<<"NO\n";
            return 0;
        }
    }

    cout<<"YES\n";
    return 0;

}