#include <bits/stdc++.h>
using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     vector<long long> prefixSum(n + 1, 0), suffixSum(n + 2, 0);

//     for (int i = 1; i <= n; i++)
//     {
//         prefixSum[i] = prefixSum[i - 1] + arr[i - 1];
//     }

//     for (int i = n; i >= 1; i--)
//     {
//         suffixSum[i] = suffixSum[i + 1] + arr[i - 1];
//     }

//     int i = 1, j = n;
//     int maxCount = 0;

//     while (i < j)
//     {
//         if (prefixSum[i] == suffixSum[j])
//         {

//             int totalCandies = i + (n - j + 1);
//             if (totalCandies > maxCount)
//                 maxCount = totalCandies;
//             i++;
//             j--;
//         }
//         else if (prefixSum[i] < suffixSum[j])
//         {
//             i++;
//         }
//         else
//         {
//             j--;
//         }
//     }

//     cout << maxCount << endl;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }


void solve(){
    int n;
    cin>>n;

    vector<int> weight(n);
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }

    vector<int> suffix_sum(n);
    map<int,int> index;
    int sum = 0;
    for(int i=n-1;i>=0;i--){
        sum += weight[i];
        index[sum] = i;
        suffix_sum[i] = sum;
    }
    int ans = 0;
    int prefix_sum  = 0;
    for(int i=0;i<n;i++){
        index.erase(suffix_sum[i]);
        prefix_sum += weight[i];
        if(index.find(prefix_sum) != index.end()){
            ans =max(ans,(i+1)+(n-index[prefix_sum]));
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}