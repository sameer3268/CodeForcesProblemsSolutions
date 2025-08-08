#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;


void solve(){
     int n;
     cin>>n;

     vector<int> c(n);
     for(int i=0;i<n;i++){
        cin>>c[i];
     }
     sort(c.begin(),c.end());
     if(c[0] != 1){
        cout<<"NO"<<endl;
        return;
     }
    long long a = 1;
    bool canForm = true;
     for(int i=1;i<n;i++){
         if(c[i] <= a){
            a += c[i];
         }
         else{
             canForm = false;
             break;
         }
     }
     if(canForm){
       cout<<"YES"<<endl;
     }
     else {
        cout<<"NO"<<endl;
     }
} 

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
