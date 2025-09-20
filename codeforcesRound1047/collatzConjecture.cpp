#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;
        long long ans = x;
        for (int i = 0; i < k; i++) {
            ans *= 2;
        }
        cout << ans << "\n";
    }
    return 0;
}
