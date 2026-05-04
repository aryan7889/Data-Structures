#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>arr){
    for (int i = 1; i < arr.size(); i++)
    {
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}


int toFindResultant(vector<int>arr){
    int ops = 0;

    while (!isSorted(arr))
    {
        int n = arr.size();
        int minSum = INT_MAX;
        int idx = 0;


        vector<int>newPair;
        for (int i = 0; i < n-1; i++)
        {
            int sum = arr[i]+arr[i+1];
            if(sum<minSum){
                minSum = sum;
                idx = i;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if(i == idx){
                newPair.push_back(arr[i]+arr[i+1]);
                i++;
            }else{
                newPair.push_back(arr[i]);
            }
        }
        arr = newPair;
        ops++;
        
    }
   return ops; 
}
int main(){
    vector<int>arr = {5,2,3,1};
    int ops = toFindResultant(arr);
    cout<<ops;

}