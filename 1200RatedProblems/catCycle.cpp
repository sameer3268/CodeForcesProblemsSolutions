#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        k--;

        if(n%2 == 0){
            int ans = k%n;
            cout<<ans+1<<endl;
        }
        else{
            int val = n/2;
            cout<<((k + (k/val))%n)+1<<endl;
        }
    }
    return 0;
}