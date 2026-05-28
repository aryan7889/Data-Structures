// /*
// Insert at the end.
// take it to the correct position.
// make sure to swap the things while comparing with the parent node

// */

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
    void insert(int val){
        size = size+1;
        int index = size;
        arr[index]=val;

        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }else{
                return;
            }
        }
    }


    void print(){
        for (int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
        
    }

    void deleteFromHeap(){
        if(size==0){
            cout<<"nothing there to delete."<<endl;
            return;
        }

        arr[1]=arr[size];

        size--;

        int i = 1;
        while (i<size)
        {
            int leftindex = 2*i;
            int rightIndex = 2*i+1;

            if(leftindex<size && arr[i]<arr[leftindex]){
                swap(arr[i],arr[leftindex]);
                i = leftindex;
            }else if(rightIndex<size && arr[i]<arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i = rightIndex;
            }else{
                return;
            }
        }
        
    }


    
};
// void heapify(int arr[],int n,int i){
//         int largest = i;
//         int left = i*2;
//         int right = 2*i+1;
//         if(left<n && arr[largest]<arr[left]){
//             largest = left;
//         }

//         if(right<n&&arr[largest]<arr[right]){
//             largest = right;
//         }

//         if(largest!=i){
//             swap(arr[largest],arr[i]);
//             heapify(arr,n,largest);
//         }
//     }

// void heapify(int arr[],int n,int i){
//     int smallest = i;
//     int left = 2*i;
//     int right = 2*i+1;
//     if(right<n && arr[smallest]>arr[right]){
//         smallest = right;
//     }

//     if(left<n && arr[smallest]>arr[left]){
//         smallest = left;
//     }

//     if(smallest!=i){
//         swap(arr[smallest],arr[i]);
//         heapify(arr,n,smallest);
//     }
// }
int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    

h.print();

h.deleteFromHeap();
h.print();


int arr[6]={-1,54,53,55,52,50};
int n = 5;
for (int i = n/2; i>0; i--)
{
    // heapify(arr,n,i);
}
cout<<"printing the array now: "<<endl;
for (int i = 1; i < n; i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;



return 0;
}


// deletion of the node so what we need to do is:
// the last node shpuld be go into the array and make sure to make it to the node one.4
// remove the last node.
// propagate root node to the perfect position.



// t.c. O(logn);


// heapify algorithm:

