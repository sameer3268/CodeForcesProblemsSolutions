#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
     while(t--){
        int n;
    cin>>n;

    vector<int> rock(n);
    for(int i=0;i<n;i++) cin>>rock[i];
    
    vector<long long> freq(30,0);
    for(int i=0;i<n;i++){
        for(int j=30;j>=0;j--){
            if(rock[i] & (1<<j)) {
                 freq[j]++;
                  break;
            }
        }
    }
    long long ans = 0;

    for(int i=0;i<30;i++){
        ans += freq[i] * (freq[i]-1) / 2;
    }
    cout<<ans<<endl;
     }
    return 0;
}



