#include <iostream>
using namespace std;

bool check(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[10] = {1,2,3,4,5,5,6,6,7,8};

    bool ans = check(arr, 10);

    if (ans) {
        cout << "sorted";
    } else {
        cout << "unsorted";
    }
    return 0;
}
