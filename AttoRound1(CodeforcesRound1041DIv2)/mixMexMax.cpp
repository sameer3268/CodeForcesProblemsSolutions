#include <iostream>
#include <vector>
#include <set>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
   
   set<int> existing_nums;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        if (val != -1) {
            existing_nums.insert(val);
        }
    }

   
    if (existing_nums.empty()) {
       cout << "Yes\n";
        return;
    }

    
    if (existing_nums.count(0)) {
        cout << "No\n";
        return;
    }

    if (existing_nums.size() > 1) {
        cout << "No\n";
        return;
    }

   
    cout << "Yes\n";
}

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}