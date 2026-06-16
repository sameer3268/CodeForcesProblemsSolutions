#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+10;
vector<int> prime,primes;

void seive() {
    prime.assign(N,1);

    prime[0] = prime[1] = 0;

    for(int i=2;i*i<N;i++){
        if(prime[i]){
            for(int j=i*i;j<N;j+=i){
                prime[j] = 0;
            }
        }
    }

    for(int i=2;i<N;i++){
        if(prime[i]){
            primes.push_back(i);
        }
    }
}

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cout<<(primes[i]*primes[i+1])<<' ';
    cout<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    int t=1;
    cin>>t;
    seive();
    while(t--){
        solve();
    }
    return 0;
}