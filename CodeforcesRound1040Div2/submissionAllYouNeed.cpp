#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=0,z=0,o=0;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == 0){
                z++;
            }
            else if(a[i]==1){
                o++;
            }
            ans = ans+a[i];
        }
        ans = ans + min(z,o)*2-min(z,o);
        if(z > o){
            ans = ans+z-o;
        }
        cout<<ans<<endl;
    }
}