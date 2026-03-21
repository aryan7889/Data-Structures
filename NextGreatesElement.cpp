#include<bits/stdc++.h>
using namespace std;
vector <int>nextgreatestelement(vector<int>& arr){
    int n = arr.size();
    vector<int> ans(n);
    stack<int>st;

    for (int i = n-1; i >=0; i--)
    {
        while(!st.empty()&&st.top()<=arr[i]){
            st.pop();
        }

        if(st.empty()){
            ans[i]=-1;
        }else{
            ans[i]=st.top();
        }

        st.push(arr[i]);
    }
    return ans;
}


int main(){
    vector<int> arr = {4,5,2,10};
    
    vector<int> result = nextgreatestelement(arr);

    cout<<"the next greatest eleemnt is: "<<endl;
    for(int x:result){
        cout<<x<<" ";
    }
    return 0;
}