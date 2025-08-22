#include <bits/stdc++.h>
using namespace std;

long long lcm(long long num1,long long num2){
     return (num1*num2)/(__gcd(num1,num2));
}

long long calculateSum(long long start, long long end) {
     long long sum = ((start+end)*(end-start+1))/2;
     return sum;
}
void solve(){
    long long n,x,y;
    cin>>n>>x>>y;
    
    long long count1 = (n/x) - (n/lcm(x,y));
    long long count2 = (n/y) - (n/lcm(y,x));

    long long ans = calculateSum(n-count1+1,n) - calculateSum(1LL,count2);

    cout<<ans<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}