#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

void solve(){
     int x;
     cin>>x;
     int minNum = INT_MAX;
     string s = to_string(x);
     for(int i=0;i<s.length();i++){
        minNum = min(s[i]-'0',minNum);
     }
     cout<<minNum<<endl;
}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}