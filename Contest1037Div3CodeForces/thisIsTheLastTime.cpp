#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t,n,k,i,j,l,r,real;
    cin>>t;

    for(;t--;){
        cin>>n>>k;
        vector<pair<int,pair<int,int>>>p;

        for(i=0;i<n;i++){
            cin>>l>>r>>real;
            p.push_back({real,{l,r}});
        }
        sort(p.begin(), p.end());

        for(i=0;i<n;i++){
            if(k>=p[i].second.first && k <= p[i].second.second){
                if(p[i].first > k){
                    k=p[i].first;
                }
            }
        }
        cout<<k<<"\n";
    }
}