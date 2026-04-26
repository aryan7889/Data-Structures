#include<bits/stdc++.h>
using namespace std;

// vector<int>findThePse(vector<int>num){
//     vector<int>num1(num.size(),-1);
//     stack<int>st;
//     for (int i = 0; i < num.size(); i++)
//     {
//         int curr = num[i];
//         while (!st.empty()&&st.top()>=curr)
//         {
//             st.pop();
//         }
//         if(st.empty()){
//             num1[i]=-1;
//         }else{
//             num1[i]=st.top();
//         }

//         st.push(curr);
//     }
//     return num1;
// }

// bool tofind132pattern(vector<int>num){
//         stack<int>st;
//     vector<int>res = findThePse(num);
//     for (int i = num.size()-1; i>=0; i--)
//     {
//         while (!st.empty()&&st.top()<=res[i])
//         {
//             st.pop();
//         }
//         if (!st.empty()&&st.top()<num[i])
//         {
//             return true;
//         }
//         st.push(num[i]); 
//     }
//     return false;
// }


// vector<int> findMinLeft(vector<int> num){
//     vector<int>minLeft(num.size());
//     minLeft[0] = num[0];

//     for(int i = 1; i < num.size(); i++){
//         minLeft[i] = min(minLeft[i-1], num[i]);
//     }
//     return minLeft;
// }

// bool tofind132pattern(vector<int>num){
//     stack<int>st;
//     vector<int>minLeft = findMinLeft(num);

//     for (int i = num.size()-1; i >= 0; i--)
//     {
//         if(num[i] > minLeft[i]){  // important condition
//             while (!st.empty() && st.top() <= minLeft[i]){
//                 st.pop();
//             }

//             if (!st.empty() && st.top() < num[i]){
//                 return true;
//             }

//             st.push(num[i]);
//         }
//     }
//     return false;
// }

// int main(){
//     vector<int>num = {3,5,0,3,4};
//     bool result = tofind132pattern(num);
//     cout<<result;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

vector<int> findMinLeft(const vector<int>& num){
    vector<int> minLeft(num.size());
    minLeft[0] = num[0];

    for(int i = 1; i < num.size(); i++){
        minLeft[i] = min(minLeft[i-1], num[i]);
    }
    return minLeft;
}

bool tofind132pattern(const vector<int>& num){
    if(num.size() < 3) return false;

    stack<int> st;
    vector<int> minLeft = findMinLeft(num);

    for (int i = num.size()-1; i >= 0; i--)
    {
        if(num[i] > minLeft[i]){
            while (!st.empty() && st.top() <= minLeft[i]){
                st.pop();
            }

            if (!st.empty() && st.top() < num[i]){
                return true;
            }

            st.push(num[i]);
        }
    }
    return false;
}

int main(){
    vector<int> num = {3,5,0,3,4};
    cout <<boolalpha<< tofind132pattern(num)<<endl;

    return 0;
}
