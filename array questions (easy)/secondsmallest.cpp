#include <iostream>
#include <climits>
using namespace std;

int secondlargest(int arr[], int n) {
    int largest = arr[0];
    int slargest = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        } 
        else if(arr[i] < largest && arr[i] > slargest) {
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondsmallest(int arr[], int n) {
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            ssmallest = smallest;
            smallest = arr[i];
        } 
        else if(arr[i] > smallest && arr[i] < ssmallest) {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int main() {
    int arr[] = {1,2,3,4,8,9,4,5,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secLarge = secondlargest(arr, n);
    int secSmall = secondsmallest(arr, n);

    cout << "Second largest element: " << secLarge << endl;
    cout << "Second smallest element: " << secSmall << endl;

    return 0;
}
