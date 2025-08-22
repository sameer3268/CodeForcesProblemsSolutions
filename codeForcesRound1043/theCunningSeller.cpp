#include <bits/stdc++.h>
using namespace std;
int findX(int n){
    int x = 0;
    for(int i=0;i< 31;i++){
        if(pow(3,i) > n){
            x = i-1;
            break;
        }
    }
    return x;
}
void solve(){
    int n;
    cin>>n;
    int x = findX(n);
    int cost = pow(3,x+1) + x*pow(3,x-1) + (n-pow(3,x))*3;
    cout<<cost<<endl;
} 

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}