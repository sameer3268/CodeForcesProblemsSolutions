#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int sumOfExperience = 0;
    int  ans  = 0;
    int maxi = 0;
    for (int i = 0; i < min(n,k); i++) {
         sumOfExperience += a[i];
         maxi = max(maxi,b[i]);
        ans = max(ans,sumOfExperience+(k-i-1)*maxi);
       }

    cout << ans << endl;
}
int main() {
    int t=1;   cin >> t;
    while (t--) {
        solve();
    }
}