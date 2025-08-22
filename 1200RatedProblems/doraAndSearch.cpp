#include <bits/stdc++.h>
using namespace std;

bool isMinOrMax(int val,set<int> &segEle){
     if((*segEle.begin()) == val){
          return true;
     } 
     if((*segEle.rbegin()) == val){
        return true;
     }
     return false;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        set<int> segEle(arr.begin(),arr.end());

        int i=0,j=n-1;

        while(i < j){
            if(isMinOrMax(arr[i],segEle)){
                segEle.erase(arr[i]);
                i++;
                continue;
            }
            if(isMinOrMax(arr[j],segEle)){
                segEle.erase(arr[j]);
                j--;
                continue;
            }
            break;
        }
        if(i < j){
            cout<<(i+1)<<" "<<(j+1)<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}