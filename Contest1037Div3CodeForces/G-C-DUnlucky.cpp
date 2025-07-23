#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (a < b) swap(a, b);
    while (b > 0) {
        long long c = b;
        b = a % b;
        a = c;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b; // safer to avoid overflow
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> p(n), s(n);
        for (int i = 0; i < n; i++) cin >> p[i];
        for (int i = 0; i < n; i++) cin >> s[i];

        int pos = 1;

        for (int i = 1; i < n; i++) {
            if (p[i - 1] % p[i] != 0) {
                pos = 0;
                break;
            }
        }

        for (int i = 0; i < n - 1; i++) {
            if (s[i + 1] % s[i] != 0) {
                pos = 0;
                break;
            }
        }

        if (pos == 0) {
            cout << "NO" << endl;
            continue;
        }

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = lcm(p[i], s[i]);
        }

        long long g = a[0];
        for (int i = 0; i < n; i++) {
            g = gcd(g, a[i]);
            if (g != p[i]) {
                pos = 0;
                break;
            }
        }

        g = a[n - 1];
        for (int i = n - 1; i >= 0; i--) {
            g = gcd(g, a[i]);
            if (g != s[i]) {
                pos = 0;
                break;
            }
        }

        cout << (pos ? "YES" : "NO") << endl;
    }
    return 0;
}
