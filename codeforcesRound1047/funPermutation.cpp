#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t,i,n;
    cin>>t;

    for(;t--;){
        cin>>n;

        ll p[n];

        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        for(int i=0;i<n;i++){
            cout<<n+1-p[i]<<" ";
        }
        cout<<"\n";
    }
}