#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> st; // stores values

    // Start from the last index, go backwards (single pass, no circular)
    for (int i = n - 1; i >= 0; i--) {
        int curr = nums[i];

        // Pop elements that are not greater than current
        while (!st.empty() && st.top() <= curr) {
            st.pop();
        }

        // Stack top is the next greater element
        result[i] = st.empty() ? -1 : st.top();

        // Push current value for elements to the left
        st.push(curr);
    }

    return result;
}

int main() {
    vector<int> nums = {4, 5, 2, 10, 8, 1};

    vector<int> result = nextGreaterElement(nums);

    cout << "Input array   : ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    cout << "NGE result    : ";
    for (int x : result) cout << x << " ";
    cout << endl;

    // Corrected test case — no circular wrapping
    vector<int> nums2 = {1, 2, 1};
    vector<int> result2 = nextGreaterElement(nums2);

    cout << "\nInput array   : ";
    for (int x : nums2) cout << x << " ";
    cout << endl;

    cout << "NGE result    : ";
    for (int x : result2) cout << x << " ";
    cout << endl;

    return 0;
}
