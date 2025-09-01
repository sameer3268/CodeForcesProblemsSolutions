#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         int n,s;
//         cin>>n>>s;
//         vector<int> v(n);

//         for(int i=0;i<n;i++){
//             cin>>v[i];

//         }
//         int len = -1;

//         map<int,int> mp;

//         mp[0] = -1;

//         int sum = 0;

//         for(int i=0;i<n;i++){
//             sum += v[i];

//             if(mp.count(sum-s))
//             {
//                 len = max(len,i-mp[sum-s]);
//             }
//             if(!mp.count(sum))
//             {
//                 mp[sum] = i;
//             }
//         }
//         if(len == -1){
//             cout<<"-1\n";
//         }
//         else{
//             cout<<(n-len)<<"\n";
//         }
//     }
//    return 0;
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;

        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        int i=0,j=0;
        int sum = 0;
        int len = -1;
        while(i < n && j < n){
             sum += v[j];
             if(sum == s){
                len = max(len,j-i+1);
             }
             while(sum > s){
                sum -= v[i];
                i++;
             }
             j++;

        }
        if(len == -1){
            cout<<-1<<endl;
        }
        else if(len == n){
            cout<<0<<endl;
        }
        else{
            cout<<n-len<<endl;
        }
    }
}