#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> gang(n+1);
        for(int i=1;i<=n;i++) cin>>gang[i];
        
        vector<array<int,2>> edges;

        int val1 = 1,val2 = -1;

        for(int i=2;i<=n;i++){
            if(gang[i] != gang[1]){
                edges.push_back({1,i});
                val2 = i;
                break;
            }
        }

        if(val2 == -1){
            cout<<"NO"<<endl;
            continue;
        }

        for(int i=2;i<=n;i++){
            if(i == val2) continue;
            
        if(gang[i] != gang[val1]){
            edges.push_back({val1,i});
        }
        else{
            edges.push_back({val2,i});
        }
      }

      cout<<"YES"<<endl;

      for(auto edge: edges){
            cout<<edge[0]<<" "<<edge[1]<<endl;
      }
    }
    return 0;
}