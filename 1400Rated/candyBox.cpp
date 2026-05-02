#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n;
     cin>>n;
     vector<int> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }

     int freq[n]{};
     for(int i=0;i<n;i++){
        freq[a[i]-1]++;
     }
     sort(freq,freq+n,greater<>());

     long long ans = 0;
     int lastFreqTaken =INT_MAX;
     for(int i=0;i<n && lastFreqTaken > 0;i++){
        if(freq[i] >= lastFreqTaken){
            ans += lastFreqTaken-1;
            lastFreqTaken--;
        }
        else {
              ans += freq[i];
              lastFreqTaken = freq[i];
        }
     }

     cout<<ans<<endl;
}

int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q;
    cin>>q;
    while(q--){
        solve();
    }
}