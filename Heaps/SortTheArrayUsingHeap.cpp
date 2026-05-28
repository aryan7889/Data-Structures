#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size = 0;


    heap(){
        arr[0]=-1;
        size = 0;

    }
    // void insert(int val){
    //     size = size+1;
    //     int index = size;
    //     arr[index]=val;

    //     while(index>1){
    //         int parent = index/2;
    //         if(arr[parent]<arr[index]){
    //             swap(arr[parent],arr[index]);
    //             index = parent;
    //         }else{
    //             return;
    //         }
    //     }
    // }


    void print(){
        for (int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
        
    }

    // void deleteFromHeap(){
    //     if(size==0){
    //         cout<<"nothing there to delete."<<endl;
    //         return;
    //     }

    //     arr[1]=arr[size];

    //     size--;

    //     int i = 1;
    //     while (i<size)
    //     {
    //         int leftindex = 2*i;
    //         int rightIndex = 2*i+1;

    //         if(leftindex<size && arr[i]<arr[leftindex]){
    //             swap(arr[i],arr[leftindex]);
    //             i = leftindex;
    //         }else if(rightIndex<size && arr[i]<arr[rightIndex]){
    //             swap(arr[i],arr[rightIndex]);
    //             i = rightIndex;
    //         }else{
    //             return;
    //         }
    //     }
        
    // }


    
};


void heapify(vector<int>&nums,int n,int i){
    
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(right<=n && nums[largest]<nums[right]){
        largest = right;
    }

    if(left<=n && nums[largest]<nums[left]){
        largest = left;
    }

    if(largest!=i){
        swap(nums[largest],nums[i]);
        heapify(nums,n,largest);
    }
}

int main(){
    vector<int>nums = {-1,54,53,55,52,50};
    int n = 5;
    for(int i = n/2;i>=1;i--){
        heapify(nums,n,i);
    }
    cout<<"printing the array now: "<<endl;
    for (int i = 1; i <=n; i++)
    {
        cout<<nums[i]<<" ";
    }cout<<endl;
return 0;
}