#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);

        for(int i=0;i<n;i++) cin>>a[i] ;
        
        unordered_map<long long,long long> mp;
        for(int i=0;i<n;i++) {
            mp[a[i]-i]++;
        }
        long long count = 0;
        for(auto it:mp){
            long long x = it.second;
            count += (x*(x-1))/2;
        }
      cout<<count<<endl;       
    }
}