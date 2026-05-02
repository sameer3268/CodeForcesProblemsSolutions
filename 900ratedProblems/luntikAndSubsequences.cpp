#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int numOfZeros = 0;
        int numOfOnes = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == 0) numOfZeros++;
            else if(a[i] == 1) numOfOnes++;
        }
       long long ans =(1LL << numOfZeros)*numOfOnes;
       cout<<ans<<endl;
 }
} 