#include <bits/stdc++.h>
using namespace std;

#define clz __builtin_clz
#define ll long long
void solve(){
      ll a,b;
        cin>>a>>b;
        ll lena = clz(1)-clz(a);
        ll lenb = clz(1)-clz(b);

        if(lena < lenb){
            cout<<-1<<endl;
            return;
        }

        if(lena == lenb){
            cout<<1<<endl;
            cout<<(a^b)<<endl;
            return;
        }
        cout<<2<<endl;

        cout<<(a^b^(1LL<<lena))<<endl;
        cout<<(1LL<<lena)<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
       solve();
    }
}