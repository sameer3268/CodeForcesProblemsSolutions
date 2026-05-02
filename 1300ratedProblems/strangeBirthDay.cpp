#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        vector<ll> k(n);
        for(int i = 0; i < n; i++){
            cin >> k[i];
        }

        vector<ll> c(m);
        for(int i = 0; i < m; i++){
            cin >> c[i];
        }

        sort(k.begin(), k.end());

        ll ans = 0;
        int p = 0;

        for(int i = n - 1; i >= 0; i--){
            if(p < m && c[p] <= c[k[i] - 1]){
                ans += c[p];
                p++;
            } else {
                ans += c[k[i] - 1];
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
