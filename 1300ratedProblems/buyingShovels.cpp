#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//     int n,k;
//     cin>>n>>k;
//     int ans = n;
//     for(int j=1;j*j<=n;j++){
//         if(j>k) break;
//         if(n%j==0){
//             ans = min(ans,n/j);
//             if(n/j<=k)
//             ans = min(ans,j);
//         }
//       }
//       cout<<ans<<endl;
//     }
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n<=k){
            cout<<1<<endl;
        }
        else if(n>k){
            if(n%k==0){
                cout<<n/k<<endl;
            }
            else{
                int ans = n;
                for(int j=1;j*j<=n;j++){
                    if(j>k) break;
                    if(n%j==0){
                        ans = min(ans,n/j);
                        if(n/j<=k)
                        ans = min(ans,j);
                    }
                  }
                  cout<<ans<<endl;
            }
        }
    }
}