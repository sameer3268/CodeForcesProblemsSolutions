#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,a,x,m,sum;
priority_queue <int> num[2];
bool hv[2];
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        sum = 0;
        hv[0] = hv[1] = 0;
        while(!num[0].empty()) num[0].pop();
        while(!num[1].empty()) num[1].pop();

        cin>>n>>m;
        for(int i=1;i<=n;i++){
            cin>>a;
            num[i&1].push(a);
            sum += a;
        }
        for(int i=1;i<=m;i++){
            cin>>x;
            if(!num[x&1].empty()&&num[x&1].top() >= 0 || !hv[x&1]){
                 sum -= num[x&1].top();
                 num[x&1].pop();
                 hv[x&1] = 1;
            }
        }

        cout<<sum<<"\n";
    }
}