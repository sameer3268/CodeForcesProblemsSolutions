#include <bits/stdc++.h>
using namespace std;

int expectedFirstPair(int curr,vector<int>& B,int N){
    for(int i=0;i<N;i++){
        if(curr == 1 && B[i] == 1){
            curr = 0;
        }
        else if(curr == 0 && B[i] == 1){
            curr =1;
        }
    }
    return curr;
}
void solve(){
    int N;
    cin>>N;

    vector<int> B(N);
    for(int i=0;i<N;i++){
        cin>>B[i];
    }
    int first,first_expected;
    first = 1;
    first_expected = expectedFirstPair(1,B,N);

    if(first == first_expected){
        cout<<"YES\n";
        return;
    }
    first = 0;
    first_expected = expectedFirstPair(0,B,N);
    if(first == first_expected){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}


int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}