#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(a.size() == 1){
        cout<<"1\n";
        return;
    }
    vector<int> ans;
    ans.push_back(a[0]);
    ans.push_back(a[1]);

    for(int i=2;i<n;i++){
        int currSize = ans.size();
        
        int x = ans[currSize-2] - ans[currSize-1];
        int y = ans[currSize-1] - a[i];
        if(x > 0){
            if(y > 0) ans[currSize-1] = a[i];
            else if(y < 0) ans.push_back(a[i]);
        }
        else{
            if(y < 0) ans[currSize-1] = a[i];
            else if(y > 0) ans.push_back(a[i]);
        }
    }
    int finalSize = ans.size();
    if(ans[0] == ans[1]) finalSize--;
    cout<<finalSize<<"\n";
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}