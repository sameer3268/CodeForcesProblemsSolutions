#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> x(n),y(n);

        for(int i=0;i<n;i++) cin>>x[i];
        for(int j=0;j<n;j++) cin>>y[j];
        
        multiset<int> ms;

        for(int i=0;i<n;i++){
            ms.insert(y[i]-x[i]);
        }

        int ans = 0;

        while(ms.size() > 1){
            int val1 = *ms.begin();
            
            ms.erase(ms.begin());
            
            auto it = ms.lower_bound(-val1);

            if(it == ms.end())
              continue;
            ans++;
            ms.erase(it);
        }
        cout<<ans<<endl;

    }
    return 0;
}