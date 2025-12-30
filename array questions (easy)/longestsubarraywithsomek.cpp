// optomal approach of the 
#include <bits/stdc++.h>
using namespace std;

// int longestsubarraywithsomek(int arr[],long long k){
//     int left  = 0,right =0;
//     int sum = arr[0];
//     int maxlenght = 0;
//     long long n = sizeof(arr)/sizeof(arr[0]);

//     // writing the logic with the two pointer approach
//     // while pointing the right and left and the right will move further aand the left will be the its own place 
//     // until the sum of the vlaues of the array would we greater the sum which we want

//     while(right<n){
//         while (left<=right && sum>k)
//         {
//             sum -= arr[left];
//             left++;
//         }
//         if(sum==k){
//             maxlenght = max(maxlenght,right - left + 1);
//         }
//         right++;
//         if(right<n){
//             sum += arr[right];
//         }    
//     }
//     return maxlenght;
// }

int longestsubarraywithsomek(int arr[],int n,long long k){
    long long sum = arr[0];
    int maxlength = 0;
    int left = 0;
    int right = 0;


    // loops:

    while(right<n){
        right++;
        while(left<=right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum==k){
            maxlength = max(maxlength,right-left+1);
        }
        if(right<n){
            sum +=arr[right];
        }

    }
    return maxlength;
}


int main() {
    long long k;
    cin>>k;

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << longestsubarraywithsomek(arr, n, k);
    return 0;
}
