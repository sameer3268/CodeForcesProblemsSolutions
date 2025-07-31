// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// void solve(){
//     string s;
//     cin>>s;
//     ll n=s.size();
//     int maxi=0;
//     int i=0;
//     while(i<n){//n
//         if(s[i]=='0'){
//             i++;
//             continue;
//         }
//         int j=i+1;
//         while(j<n && s[j]=='1'){
//             j++;
//         }
//         maxi=max(maxi,j-i);
//         i=j;
//     }
//     if(maxi==n){
//         cout<<n*n<<endl;
//         return;
//     }
//     if(s[0]=='1' && s[n-1]=='1'){//n
//         int i=0;
//         int cnt=0;
//         while(i<n && s[i]=='1'){
//             i++;
//             cnt++;
//         }
//         int j=n-1;
//         while(j>i && s[j]=='1'){
//             j--,cnt++;
//         }
//         maxi=max(maxi,cnt);
//     }
//     maxi++;
//     ll temp=(maxi+1)/2;
//     cout<<(temp)*(maxi/2)<<endl;
//     // T.C :- O(n)
//     // S.C :- O(n)
// }

// int main(){
// #ifndef ONLINE_JUDGE
//     freopen("Error.txt","w",stderr);
// #endif
    
    
//     int t=1;
//     cin>>t;
//     while(t--){
//         solve();
//     }
// } 

#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
  int t;cin>>t;
  while ( t--)
  {
    string s; cin>>s; int len=0;int n=s.size();
    for(int i=0;i<n;){
        int cnt=0;
        if(s[i]=='1'){
            while ( i<n && s[i]=='1')
            {
                 cnt++;
                 i++;
            }
            len=max(len,cnt);
        }
        else{
            i++;
        }
    }

    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            break;
        }
        cnt++;
    }

    for(int i=n-1;i>=0;i--){
        if(s[i]=='0'){
            break;
        }
        cnt++;
    }

    cnt=min(cnt,n);
    len=max(len,cnt);
    if(len==n){
        cout<<n*n<<endl;
    }
    else
    {   len++;
         int l=(len)/2;
         int b=len-l;
         cout<<l*b<<endl;
    }
    

  }
}
