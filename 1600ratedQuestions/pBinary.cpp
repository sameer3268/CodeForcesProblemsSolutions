#include <bits/stdc++.h>
using namespace std;


int main(){
        int num1,num2;
        cin>>num1>>num2;

          int t=0;

      for(t=1;t<=36;t++){
            long long val = (long long)num1 - (long long)t*num2;

            if(val < 0){
                continue;
            }

            if(__builtin_popcountll(val) <= t && t <= val){
                cout<<t<<"\n";
                return 0;
            }
        }
      cout<<"-1\n";
      return 0;
      
}