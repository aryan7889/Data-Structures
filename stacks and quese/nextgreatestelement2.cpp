// in this appraoch we will make sure to look in the circular direction
/* so the first approach is like that we will create a set of two same 
array so that we can apply the circular search. we have to create a new index which will  
keep on changing as it will in the loop of the j which will run from i+1 to i+n-1 so that 
array can we iterate in the circular format.*/


#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElementII(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> st; 

    // Start from the last index, go backwards, 2 full passes
    for (int i = 2 * n - 1; i >= 0; i--) {
        int curr = nums[i % n];

        // Pop elements that are not greater than current
        while (!st.empty() && st.top() <= curr) {
            st.pop();
        }

        // In the first pass (i < n), record the answer
        if (i < n) {
            result[i] = st.empty() ? -1 : st.top();
        }

        // Always push current value onto stack
        st.push(curr);
    }

    return result;
}

int main() {
    vector<int> nums = {5, 4, 3, 2, 7};

    vector<int> result = nextGreaterElementII(nums);

    cout << "Input array   : ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    cout << "NGE II result : ";
    for (int x : result) cout << x << " ";
    cout << endl;

    // Additional test case
    vector<int> nums2 = {1, 2, 1};
    vector<int> result2 = nextGreaterElementII(nums2);

    cout << "\nInput array   : ";
    for (int x : nums2) cout << x << " ";
    cout << endl;

    cout << "NGE II result : ";
    for (int x : result2) cout << x << " ";
    cout << endl;

    return 0;
}


