#include <bits/stdc++.h>
using namespace std;

int segmentStart[200000],segmentEnd[200000];

bool isReachableWithJump(int segmentCount, int maxJump){
    int currentMinPosition = 0;
    int currentMaxPosition = 0;

    for(int i=0;i<segmentCount;i++){
        currentMaxPosition += maxJump;
        currentMinPosition -= maxJump;

        int reachableStart = max(currentMinPosition, segmentStart[i]);
        int reachableEnd = min(currentMaxPosition, segmentEnd[i]);

        if(reachableStart > reachableEnd){
            return false;
        }

        currentMinPosition = reachableStart;
        currentMaxPosition = reachableEnd;
    }
    return true;
}

int solve(){
    int segementCount;
    cin>>segementCount;

    for(int i=0;i<segementCount;i++){
        cin>>segmentStart[i]>>segmentEnd[i];
    }

    int low = 0, high = 1e9;

    while(low < high){
        int mid = (low+high)/2;

        if(isReachableWithJump(segementCount,mid)){
            high = mid;
        }else{
            low = mid+1;
        }
    }
    cout<<low<<'\n';


}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}