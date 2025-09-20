#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,k,x;
    cin>>n>>k>>x;

    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());
   
    vector<long long> gaps;

    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i] > x){
            gaps.push_back(a[i+1]-a[i]);
        }
       
    }

    sort(gaps.begin(),gaps.end());
    
    int ans = gaps.size()+1;

    for(auto gap : gaps){
        long long val = (gap/x) + (gap%x!=0) -1;
        if(k >= val){
            ans--;
            k -= val;
        }
    }
    cout << ans << endl;
}