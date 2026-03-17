/*
SO IN THIS WE NEED TO MAKE SURE TO SATRT THE OUT WARD FOR LOOP OIN THE FROUNT DIRECTION AND THE 
OUTER FOR LOOP FROM THE BACKWARD DIRECTION AND MAKE SURE TO PUT THE 
IF STATERMENT IN THE OUTWARD LOOP WHICH WILL COMPARE THE ELEMENT IS IT SMALL OR NOT
IF IT IS THEN WE NEED TO BREAK.
*/


/*

*/
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> previousSmallerElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> st; // stores values

    // Iterate left to right
    for (int i = 0; i < n; i++) {
        int curr = nums[i];

        // Pop elements that are not smaller than current
        while (!st.empty() && st.top() >= curr) {
            st.pop();
        }

        // Stack top is the previous smaller element
        result[i] = st.empty() ? -1 : st.top();

        // Push current value for future elements
        st.push(curr);
    }

    return result;
}

int main() {
    vector<int> nums = {4, 5, 2, 10, 8, 1};

    vector<int> result = previousSmallerElement(nums);

    cout << "Input array   : ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    cout << "PSE result    : ";
    for (int x : result) cout << x << " ";
    cout << endl;

    // Additional test case
    vector<int> nums2 = {3, 1, 4, 1, 5};
    vector<int> result2 = previousSmallerElement(nums2);

    cout << "\nInput array   : ";
    for (int x : nums2) cout << x << " ";
    cout << endl;

    cout << "PSE result    : ";
    for (int x : result2) cout << x << " ";
    cout << endl;

    return 0;
}