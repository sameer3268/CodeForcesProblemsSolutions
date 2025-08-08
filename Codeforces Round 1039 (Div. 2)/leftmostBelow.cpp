#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t, n, i, j, last, minv, f;
    cin >> t;

    for (; t--; ) {
        cin >> n;
        f = 1;
        ll a[n];

        for (i = 0; i < n; i++) {
            cin >> a[i];
        }

        minv = a[0];

        for (i = 1; i < n; i++) {
            j = (a[i] / 2) + 1;

            if (j > minv) {
                f = 0;
                break;
            } else {
                minv = min(minv, a[i]);
            }
        }

        if (f == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
