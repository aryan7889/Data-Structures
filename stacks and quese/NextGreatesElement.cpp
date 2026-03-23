#include<bits/stdc++.h>
using namespace std;
//     int findNextGreates(int target,vector<int> num2){
//         int n = num2.size();
//         int index = -1;
//         for (int i = 0; i < n; i++)
//         {
//             if(num2[i]==target){
//                 index = i;
//                 break;
//             }
//         }
//        for (int i = index+1; i < n; i++)
//        {
//             if(num2[i]>target){
//                 return num2[i];
//             }
//        }
//        return -1; 
//     }

//     vector<int>nextGreatesElement(vector<int>& num1,vector<int>& num2){
//         vector<int>ans;

//         for (int x: num1)
//         {
//             ans.push_back(findNextGreates(x,num2));
//         }
//         return ans;
//     }


// int main(){
//     vector<int>num1 = {4,1,2};
//     vector<int> num2 = {1,2,4,2};

//     vector<int> result = nextGreatesElement(num1,num2);

//     cout<<"results: "<<endl;
//     for (int x : result)
//     {
//         cout<< x << " ";
//     }
//     return 0;
// }


/*
🔴 Problem with This Approach

If you do this for every element in nums1, you will:

Re-run the stack logic again and again
That leads to O(n * m) complexity ❌ (can go up to O(n²))
🔹 Why We Don’t Do It That Way

The stack is powerful because:
👉 It processes the whole array in ONE PASS

If you restart it for every element → you lose the benefit

🔹 Correct Optimization (Important Insight 🔥)

Instead of:

“Find next greater for each query separately”

We do:

“Precompute next greater for ALL elements once”

🔹 Better Approach (Your Idea + Optimization)

You were THIS close 👇

Step 1:

Run stack once on nums2

Build: element → next greater
Step 2:

Now just lookup for nums1

O(1) per query
🔹 Why This Works Better
Approach	Time Complexity
Your approach (recomputing)	❌ O(n²)
Optimized (map + stack once)	✅ O(n)



Intuition (Very Important)

Think like this:

Instead of asking:

“What is next greater for 4?”

Ask:

“Let me prepare answers for ALL elements in nums2 once”

Then:

“Oh, 4? I already know the answer!”
*/

// so the final intutative approach would be:



vector<int>FindNextGreatestElement(vector<int>num1,vector<int>num2){
    stack<int> st;
    unordered_map<int,int> mp;
    // so that we can store the value of the next greatest element
    // at the correspoinding index.

    for(int i = num2.size()-1;i>=0;i--){
        while (!st.empty()&&st.top()<=num2[i])
        {
            st.pop();
        }
        
        if(st.empty()){
            mp[num2[i]]=-1;
        }else{
            mp[num2[i]]=st.top();
        }

        st.push(num2[i]);
    }

    vector<int>ans;
    for(int x: num1){
        ans.push_back(mp[x]);
    }

    return ans;
}

int main(){
    vector<int> num1 = {4,1,2};
    vector<int> num2 = {1,3,4,2};

    vector<int>result = FindNextGreatestElement(num1,num2);
    cout<<"results: "<<endl;
    for(int x: result){
        cout<<x<<" ";
    }

    return 0;
}