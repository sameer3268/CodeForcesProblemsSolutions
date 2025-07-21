#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> h(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    bool possible = false;
    int giveTowerHeight = h[k];

    for (int i = 1; i <= n; i++) {
        if (i == k) continue; // skip same tower
        int diff = h[i] - giveTowerHeight;
        if (diff > 0 && diff <= giveTowerHeight) {
            possible = true;
            break;
        }
    }

    if (possible)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
