
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

//Greedy didn't work.

// void solve(){
//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n);
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }

//     sort(a.begin(), a.end());

//     int i = 0, j = n - 1;

//     while(i < j && k > 0){
//         if(a[i] + a[i + 1] >= a[j]){
//             j--;
//             k--;
//         }
//         else {
//             i += 2;
//             k--;
//         }
//     }

//     int maxSum = 0;
//     while(i <= j){
//         maxSum += a[i];
//         i++;
//     }

//     cout << maxSum << endl;
// } 

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
// }


int main(){
    int t = 1;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(auto &it : v) cin>>it;
        sort(v.begin(),v.end());
        vector<ll> pre(n);
        pre[0] = v[0];
        for(int i=1;i<n;i++){
            pre[i] = v[i] + pre[i-1];
        }
        ll ans = 0;
        for(int first = 0;first <= k;first++){
             int second = k-first;
             int left = 2*first;
             int right = n-second-1;
             ll sum = pre[right] - (left == 0? 0: pre[left-1]);
             ans = max(ans,sum);
        }
       cout<<ans<<endl;
    }
}