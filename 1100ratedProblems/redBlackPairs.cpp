#include <bits/stdc++.h>
using namespace std;

int costV(int i,string &s1,string &s2){
    if(s1[i] == s2[i]) return 0;
    else return 1;
}

int costTwoH(int i,string &s1,string &s2,int n){
    if(i + 1 >= n) return 1e9;
    int cnt = 0;
    if(s1[i] != s1[i+1]) cnt++;
    if(s2[i] != s2[i+1]) cnt++;
    return cnt;
}


int solve(int i,string &s1,string &s2,vector<int> &dp,int n){
     if(i > n) return 1e9;
     if(i == n) return 0;
     if(dp[i] != -1) return dp[i];
   

    int ans = 1e9;
    ans = min(ans,solve(i+1,s1,s2,dp,n) + costV(i,s1,s2));
    ans = min(ans,solve(i+2,s1,s2,dp,n) + costTwoH(i,s1,s2,n));
    return dp[i] = ans;   
   
}


void ram(){
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;

    vector<int> dp(n+1,-1);

    cout<<solve(0,s1,s2,dp,n)<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ram();
    }
}