#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int totalDigits = 0;
    int trailingZeros[n]{};
    for(int i=0;i<n;i++){
        while(arr[i]%10 == 0){
            trailingZeros[i]++;
            arr[i] /= 10;
            totalDigits++;
        }
        while(arr[i]>0){
            totalDigits++;
            arr[i] /= 10;
        }
    }
    sort(trailingZeros,trailingZeros+n,greater<>());

    for(int i=0;i<n;i+=2){
        totalDigits -= trailingZeros[i];
    }
    if(totalDigits > m){
        cout<<"Sasha\n";
    }else{
        cout<<"Anna\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}