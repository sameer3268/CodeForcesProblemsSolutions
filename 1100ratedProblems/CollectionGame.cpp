#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<pair<long long, int>> v(n);
        for (int i = 0; i < n; ++i) {
            long long a;
            cin >> a;
            v[i] = {a, i};
        }


        sort(v.begin(), v.end());

        // Prefix sum
        vector<long long> pre(n);
        pre[0] = v[0].first;
        for (int i = 1; i < n; ++i) {
            pre[i] = pre[i - 1] + v[i].first;
        }

        vector<int> ans(n);
        for (int i = 0; i < n; ++i) {
            int j = i;
            int found = i;
            while (j < n) {
                pair<long long,int> temp = {pre[j]+1,INT_MIN};
                long long idx=lower_bound(v.begin(),v.end(),temp)-v.begin();
                idx--;
                if (idx == j) break;
                found += idx - j;
                j = idx;
            }
            ans[v[i].second] = found;
        }

        for (int i = 0; i < n; ++i) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}