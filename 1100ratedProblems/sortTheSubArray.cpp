#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int l = -1, r = -1;

    // Find first and last index where a[i] != b[i]
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            if(l == -1) l = i;
            r = i;
        }
    }

   for(int i=l-1;i>=0;i--){
    if(b[i] <= b[l]){
        l--;
    }
    else{
        break;
    }
   }
   if(r==-1){
     r = n-1;
   }
   for(int i=r+1;i<n;i++){
      if(b[r] <= b[i]){
        r++;
      }
      else{
        break;
      }
   }
   cout<<l+1<<" "<<r+1<<endl;

}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
