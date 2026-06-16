#include <bits/stdc++.h>
using namespace std;

int mod =  676767677;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int x,y; cin>>x>>y;
        int diff = abs(x-y);
        if(diff == 0){
            cout<<"1\n";
        }else{
            int ans = 0;
            for(int i=1;i*i<=diff;i++){
                if(diff%i == 0){
                    ans++;
                    if(diff != i*i) ans++;
                }
                ans = ans%mod;
            }
            cout<<ans<<endl;
        }
        for(int i=0;i<y;i++) cout<<-1<<' ';
        for(int i=0;i<x;i++) cout<<1<<' ';
        cout<<endl;
    }
    return 0;
}