#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> ans;
    long long p = 10;
    while (p < n) {
        long long d = 1 + p;
        if (n % d == 0) {
            ans.push_back(n / d);
        }
        p *= 10;
    }
    if (ans.empty()) {
        cout << 0 << "\n";
    } else {
        sort(ans.begin(), ans.end());
        cout << ans.size() << "\n";
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
}
