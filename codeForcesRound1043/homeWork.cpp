#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n,m;
     cin>>n;
     string ns;
     cin>>ns;
     cin>>m;
     string ms;
     cin>>ms;
     string c;
     cin>>c;
     string ans = "";
     for(int i=0;i<m;i++){
        if(c[i] == 'V'){
            ns =   ms[i] + ns; 
        }
        else if(c[i] == 'D'){
            ns = ns + ms[i];
        }
     }
     cout<<ns<<endl;

}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}