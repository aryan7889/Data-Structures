#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1, 2, 3, 1};
    int n = 4;

    // precompute
    int hash[1000]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;

        if(hash[arr[i]]>1){
            cout<<"true";
            return 0;
        }
    }
    cout<<"false";
    return 0;
}