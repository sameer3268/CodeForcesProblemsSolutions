#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;
    vector<int> trash(n);
    for (int i = 0; i < n; i++) {
        cin >> trash[i];
    }

    sort(trash.begin(), trash.end(), greater<int>());

    int minCost = 0;
    int doublings = 0;

    for (int i = 0; i < n; i++) {
        long long weight = 1LL * trash[i] * (1LL << doublings);

        if (weight > c) {
            
            minCost++;
        } else {
            doublings++;  
        }
    }

    cout << minCost << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
