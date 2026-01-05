#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n,int target){
//     int low = 0;
//     int high = n-1;

//     while(low<=high){
//         int mid = (low+high)/2;

//         if(arr[mid]==target){
//             return mid;
//         }else if(arr[mid]<target){
//             low = mid + 1;
//         }else{
//             high = mid -1;
//         }
//     }
//     return -1; 
}

// the recusrsive code:

int binaryrecursive(int arr[],int low ,int high,int target){
    if(low>high){
        return -1;
    }
    int mid = (low + high)/2;
    if(arr[mid]==target){
        return mid;
    }else if(arr[mid]<target){
        return binaryrecursive(arr,mid+1,high,target);
    }

    return binaryrecursive(arr,low,mid-1,target);

}
// int main(){
//     int n;
//     cin>>n;

//     int target;
//     cin>>target;

//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     // int result = binarysearch(arr, n, target);
//     // int result2 = binaryrecursive(arr,low,high,target);
//     // if (result2 == -1)
//         cout << "Element not found";
//     else
//         cout << "Element found at index " << result2;

    
//     return 0;
// }

