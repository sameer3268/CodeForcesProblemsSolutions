#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    //     int maxAverage = INT_MIN;
    //     for(int i=0;i<n;i++){
    //          int average = 0;
    //         for(int j=i;j<n;j++){
    //             average += arr[j];
    //              maxAverage = max(maxAverage, average/(j-i+1));
    //         }   
    //     }
    //     cout<<maxAverage<<endl;
    // }
    int maxEle = INT_MIN;
    for(int i=0;i<n;i++){
        maxEle = max(maxEle, arr[i]);
    }
    cout<<maxEle<<endl;
   }
    return 0;
}