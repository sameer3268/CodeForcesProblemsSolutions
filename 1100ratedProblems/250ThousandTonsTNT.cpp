#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

#define ll long long
#define v vector<ll>

void solve() {
    int n;
    cin >> n;
    v a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll k = n / 2;
    ll maxDifference = 0;

    while (k) {
        if (n % k != 0) {
            k--;
            continue;
        }

        ll sum = 0;
        v sumArray;

        for (int i = 0; i < n; i++) {
            sum += a[i];
            if ((i + 1) % k == 0) {
                sumArray.push_back(sum);
                sum = 0;
            }
        }

        ll maxValue = LLONG_MIN;
        ll minValue = LLONG_MAX;

        for (int i = 0; i < sumArray.size(); i++) {
            maxValue = max(maxValue, sumArray[i]);
            minValue = min(minValue, sumArray[i]);
        }

        maxDifference = max(maxDifference, maxValue - minValue);
        k--;
    }

    cout << maxDifference << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}