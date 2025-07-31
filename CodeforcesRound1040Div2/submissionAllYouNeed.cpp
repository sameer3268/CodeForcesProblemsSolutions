#include <bits/stdc++.h>

#define int long long
#define endl "\n"
#define vec vector
#define pb push_back
#define INF INT_MAX
#define se second
#define fi first
#define pii pair<int, int>
#define pil pair<int, long long>
#define pli pair<long long, int>
#define pll pair<long long, long long>
#define str string

using ll = long long;
using ull = unsigned long long;
using ui = unsigned int;

const int MOD = 1000000007;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

using namespace std;

void solve() {
    int n;
    cin >> n;
    vec<int> S(n);
    for (int i = 0; i < n; i++) {
        cin >> S[i];
    }
    vec<int> freq(55, 0);
    for (int x : S) freq[x]++;
    int ans = 0;
    int cnt2 = min(freq[0], freq[1]);
    ans += cnt2 * 2;
    freq[0] -= cnt2;
    freq[1] -= cnt2;
    int cnt1 = freq[0];
    ans += cnt1;
    freq[0] = 0;
    for (int i = 0; i < 55; i++) {
        if (freq[i] > 0) {
            ans += i * freq[i];
        }
    }
    cout << ans << endl;
}

signed main() {
    #ifdef LOCAL
    freopen("a2.txt","r", stdin);
    freopen("a2.txt","w", stdout);
    #endif LOCAL
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}
