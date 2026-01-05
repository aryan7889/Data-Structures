// to find a number in the rotated array:
#include <bits/stdc++.h>
using namespace std;

int functionforfindingtarget(int arr[],int n,int target){
    int low=0,high=n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && arr[mid]>=target){
                high = mid -1;
            }else{
                low = mid + 1;
            }
        }else{
            if(arr[mid]<=target && target<=arr[high]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int answer = functionforfindingtarget(arr,n,target);

    cout<<answer;
    return 0;
    
}