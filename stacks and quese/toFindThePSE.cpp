#include<bits/stdc++.h>
using namespace std;


vector<int> tofindthePSE(vector<int> num1){
    vector<int>num2(num1.size(),-1);
    stack<int>st;
    for (int i = 0; i < num1.size(); i++)
    {
        int curr = num1[i];
        while (!st.empty()&&st.top()>=curr)
        {
            st.pop();
        }
        if(st.empty()){
            num2[i]=-1;
        }else{
            num2[i] = st.top();
        }
       st.push(curr); 
    }
    return num2;
}
int main(){
    vector<int>num1 = {4,2,7,1,3};
    cout<<"the array is: "<<endl;
    for(int x:num1){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"the resulted array would be: "<<endl;
    vector<int>num2 = tofindthePSE(num1);
    for(int y:num2){
        cout<<y<<" ";
    }
    cout<<endl;
    return 0;
}