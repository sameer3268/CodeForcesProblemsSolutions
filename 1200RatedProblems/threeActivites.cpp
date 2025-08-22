#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    vector<pair<long long,int>> A, B, C;
    for (int i = 0; i < n; i++) {
        A.push_back({a[i], i});
        B.push_back({b[i], i});
        C.push_back({c[i], i});
    }

    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());
    sort(C.rbegin(), C.rend());

    long long ans = 0;

    for (int i = 0; i < min(3, n); i++) {
        for (int j = 0; j < min(3, n); j++) {
            for (int k = 0; k < min(3, n); k++) {
                if (A[i].second != B[j].second &&
                    A[i].second != C[k].second &&
                    B[j].second != C[k].second) {
                    ans = max(ans, A[i].first + B[j].first + C[k].first);
                }
            }
        }
    }

    cout << ans << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) solve();
}
