#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& a, int x){
     int n = a.size();
     vector<int> b;
     for(int i=0;i<n;i++){
        if(a[i] != x){
            b.push_back(a[i]);
        }
     }
     int m = b.size();
     for(int i=0;i<m;i++){
        if(b[i] != b[m-i-1]){
            return false;
        }
     }
     return true;

}

void solve(){
     int n;
     cin>>n;
     vector<int> a(n);
     for(int i=0;i<n;i++) cin>>a[i];
     for(int i=0;i<n;i++){
        if(a[i] != a[n-i-1]){
            if(check(a,a[i]) || check(a,a[n-i-1])){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
             return;
        }
       
     }
     cout<<"YES"<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}