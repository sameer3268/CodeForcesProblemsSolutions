#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int peak = 0;
    int countinousZeros = 0;

    for (int i = 0; i < n; ) {
        if (a[i] == 0) {
            countinousZeros++;
            if (countinousZeros == k) {
                peak++;
                countinousZeros = 0; // reset
                i++; // skip next element after counting
            }
            i++;
        } else {
            countinousZeros = 0;
            i++;
        }
    }

    cout << peak << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
