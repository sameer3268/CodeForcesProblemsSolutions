#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        long long ans = 0;

        vector<bool> isRemoved(n+1,false);

        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j += i){
                if(s[j-1] == '1')
                      break;

                 if(isRemoved[j]){
                  continue;
               }
               else{
                 isRemoved[j] = true;
                  ans += i;
              }
            }
        }
        cout<<ans<<endl;
    }
     return 0;
}