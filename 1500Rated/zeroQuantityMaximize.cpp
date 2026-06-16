#include <bits/stdc++.h>
using namespace std;

#define int long long

int gcd(int a, int b){

    if(b == 0){
        return a;
    }

    return gcd(b, a % b);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int> a(n),b(n);
    for(auto &x : a) cin>>x;
    for(auto &x : b) cin>>x;

    map<pair<int,int>,int> freq;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(a[i] == 0){
            if(b[i] == 0) ans++;
            continue;
        }

        int p = -b[i],q = a[i];
       int g = gcd(abs(p),abs(q));
        p /= g;
        q /= g;

        if(q < 0){
            p = -p;
            q = -q;
        }
        freq[{p,q}]++;
    }

    int mx = 0;
    for(auto &kv : freq) mx = max(mx,kv.second);
    ans += mx;

    cout<<ans<<'\n';
    return 0;
}