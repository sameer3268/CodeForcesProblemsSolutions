#include <bits/stdc++.h>

using namespace std;

void solve(){
     int n;
     cin>>n;

     vector<int> a(n);
     for(int i=0;i<n;i++) cin>>a[i];
     map<int,int> mp;
     for(int i=0;i<n;i++){
        mp[a[i]]++;
     }
     bool possible = false;
     for(auto it : mp){
        if(it.second >= 2){
           possible = true;
           break;
        }
     }
     if(possible){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }

}

int main(){
   int t;
   cin>>t;
   while(t--){
    solve();
   }
}