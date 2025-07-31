#include <iostream>
using namespace std;
#define ll long long

int main() {
    ll t, n, i, j, last;
    cin >> t;

    for (; t--;) {
        cin >> n;

        ll p[n];  

        for (i = 0; i < n; i++) {
            cin >> p[i];
        }

        string ans = "";
        i = 1;
        j = n - 1;

        ans = "L";
        last = p[0];

        while (i <= j) {
            if (i == j) {
                ans += 'L';
                i++;
            } else {
                if (p[i] > last && p[j] > last) {
                    if (p[j] > p[i]) {
                        ans += "RL";
                        last = p[i];
                    } else {
                        ans += "LR";
                        last = p[j];
                    }
                } else if (p[i] < last && p[j] < last) {
                    if (p[j] < p[i]) {
                        ans += "RL";
                        last = p[i];
                    } else {
                        ans += "LR";
                        last = p[j];
                    }
                } else {
                    ans += "RL";
                    last = p[i];
                }
                i++;
                j--;
            }
        }

        cout << ans << "\n";
    }
}
