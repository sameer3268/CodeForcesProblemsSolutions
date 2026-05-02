#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<int> a(n);
        int xorValue = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            xorValue ^= a[i];
        }
        if(n%2 == 1){
            cout<<xorValue<<endl;
        }
        else{
            if(xorValue == 0){
                cout<<0<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
        }
    return 0;
}