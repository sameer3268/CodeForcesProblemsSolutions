#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        long long maxLength = 0;
        long long currZeroCount = 0;

        for(int i=0;i<n;i++){
            if(a[i] == 0){
                currZeroCount++;
            } else {
                maxLength = max(maxLength, currZeroCount);
                currZeroCount = 0;
            }
        }
       cout<<max(maxLength, currZeroCount)<<endl;
    }
    return 0;
}