#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve(){
     int n;
     cin>>n;
     vector<int> a(n);
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     ll sum = 0;
     int negativeCount = 0;
     for(int i=0;i<n;i++){
         if(a[i]<0){
            negativeCount++;
            a[i] = -a[i];
         }
        sum += a[i];
         
     }
     sort(a.begin(), a.end());
     if(negativeCount & 1){
         sum -= 2 * a[0];
     }
     cout<<sum<<endl;
   
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}

