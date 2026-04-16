#include<bits/stdc++.h>
using namespace std;

vector<int>asteroidCollision(vector<int>num){
    int n = num.size();
    stack<int>st;
    for(int i=0;i<n;i++){
        if(num[i]>0){
            st.push(num[i]);
        }else{
            while (!st.empty() && st.top()>0 && st.top()<abs(num[i]))
            {
                st.pop();
            } 
            if(!st.empty() && st.top()==abs(num[i])){
            st.pop();
        }else if(st.empty() || st.top()<0){
            st.push(num[i]);
        }
    }
}

vector<int>ans(st.size());

for(int i=ans.size()-1;i>=0;i--){
        ans[i]=st.top();
        st.pop();
}

return ans;
}

int main(){
    vector<int>num = {3,5,-6,2,-1,4};
    vector<int>resultant = asteroidCollision(num);
    cout<<"the resultant array would be:"<<endl;
    for(int x: resultant){
        cout<<x<<" ";
    }
    return 0;
}