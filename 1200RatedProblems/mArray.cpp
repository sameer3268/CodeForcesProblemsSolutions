#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        vector<int> rem(m);

        for(int i=0;i<n;i++){
            rem[v[i]%m]++;
        }

        int ans = 0;
        for(int i=0;i<m;i++){
            int x = rem[i];
            int y = rem[(m-i)%m];

            if(x == 0 && y == 0) continue;

            int temp = min(x,y);

            x -= min(temp+1,x);
            y -= min(temp+1,y);

            ans++;

            ans += (x+y);

            rem[i] = 0;
            rem[(m-i)%m] = 0;
        }
        cout<<ans<<endl;

    }
    return 0;
}