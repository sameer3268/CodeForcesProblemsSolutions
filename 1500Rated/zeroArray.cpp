#include <bits/stdc++.h> 
using namespace std;

#define int long long

int32_t main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int sum = 0;
    int maxEl = INT_MIN;
    for(int i=0;i<n;i++){
        sum += arr[i];
        maxEl = max(maxEl, arr[i]);
    }

    if(maxEl <= sum - maxEl && sum % 2 == 0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}