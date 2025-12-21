#include <iostream>
using namespace std;

// Swap function
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i<j)
    {
        while (arr[i]<=pivot&&i<=high-1)
        {
            i++;
        }
        while (arr[j]>=pivot&&j>=low+1)
        {
            j--;
        }
        if (i<j)
        {
            swap(arr[i],arr[j]);
        }
        
    }
    swap(arr[low],arr[j]);
    return j;
}

void quicksort(int arr[],int low,int high){
    if (low<high)
    {
        int p = partition(arr,low,high);

        partition(arr,low,p - 1);
        partition(arr,p + 1,high);
    } 
}

int main() {
    int arr[] = {4, 3, 1, 2, 5, 7, 9, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    cout << "Sorted   array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}