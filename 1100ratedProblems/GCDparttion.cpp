#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve(){
     int n;
     cin>>n;
     vector<ll> a(n);
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     ll ans = 0;
     ll total_sum = accumulate(a.begin(), a.end(), 0LL);
     ll sum = 0;
     for(int i=0;i<n-1;i++){
        sum += a[i];
        ans = max(ans, __gcd(total_sum-sum,sum));
     }
     cout<<ans<<endl;
}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}