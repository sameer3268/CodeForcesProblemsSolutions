#include <bits/stdtr1c++.h>
using namespace std;

void soln(){
     string s;
     cin>>s;
     int n = s.size();
     vector<int> pf(n),sf(n);

     int cnt = 0;
     for(int i=0;i<n;i++){
        if(s[i] == '2') cnt++;
        pf[i] = cnt;
     }

     cnt = 0;
     for(int i=n-1;i>=0;i--){
        if(s[i] == '1' || s[i] == '3') cnt++;
        sf[i] = cnt;
     }

     int mx = 0;
     for(int i=0;i<n;i++){
        mx = max(mx,pf[i]+sf[i]);
     }
     cout<<n-mx<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        soln();
    }
}