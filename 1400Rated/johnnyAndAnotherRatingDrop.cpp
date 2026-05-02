#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;

    cout<<2*n - __builtin_popcountll(n)<<'\n';
}

int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}