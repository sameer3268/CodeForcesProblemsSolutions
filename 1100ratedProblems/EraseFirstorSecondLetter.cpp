#include <iostream>
#include <vector>
#include <map>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> freq;
        int count = 0;
        vector<int> distinct(n, 0);

        for (int i = 0; i < n; i++) {
            freq[s[i]]++;
            if (freq[s[i]] == 1) {
                count++;
            }
            distinct[i] = count;
        }

        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans += distinct[i];
        }

        cout << ans << endl;
    }
    return 0;
}