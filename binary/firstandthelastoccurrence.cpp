#include <bits/stdc++.h>
using namespace std;

int findfirst(int arr[],int n,int target){
    int low = 0;
    int high = n-1;
    int first = 0;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==target){
            first = mid;
            high = mid -1;
        }else if(arr[mid]<=target){
            low = mid +1;
        }else{
            high = mid -1;
        }
    }
    return first;
}

int findlast(int arr[],int n,int target){
    int low = 0;
    int high = n-1;
    int last = 0;
    while (low<=high)
    {
        int mid = (low+high)/2;

        if(arr[mid]==target){
            last = mid;
            low = mid +1;
        }else if(arr[mid]>target){
            high = mid -1;
        }else{
            low = mid + 1;
        }
    }
    return last;
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

    int first1 = findfirst(arr,n,target);
    int last1 = findlast(arr,n,target);

    cout<<first1<<endl;
    cout<<last1;

    return 0;
    
}