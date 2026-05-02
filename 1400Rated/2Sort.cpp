#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,k;
    cin >> n >> k;

    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = 0;
    int count = 0;
    int ans = 0;

    while(r < k){
        if(a[r] < 2*a[r+1])
        {
            count++;
        }
        r++;
    }

    while(r < n){
        if(count == k){
            ans++;
        }

        if(a[l] < 2*a[l+1]){
            count--;
        }
        if(a[r]<2*a[r+1]){
            count++;
        }
        l++;
        r++;
    }    
    cout<<ans<<'\n';


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