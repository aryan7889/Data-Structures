#include<bits/stdc++.h>
using namespace std;


vector<int> toFindThePSE(vector<int>num1){
    stack<int>st;
    vector<int>num2(num1.size(),-1);
    for (int i = 0; i < num1.size(); i++)
    {
        int curr = num1[i];
        while (!st.empty()&&num1[st.top()]>=curr)
        {
            st.pop();
        }
        if(st.empty()){
            num2[i]=-1;
        }else{
            num2[i]=st.top();
        }
       st.push(i); 
    }
    return num2;
}
vector<int> toFindNSE(vector<int>num1){
    stack<int>st;
    vector<int>num2(num1.size(),-1);
     for (int i = num1.size()-1; i>=0; i--)
    {
        int curr = num1[i];
        while (!st.empty()&&num1[st.top()]>=curr)
        {
            st.pop();
        }
        if(st.empty()){
            num2[i]=num1.size();
        }else{
            num2[i]=st.top();
        }
       st.push(i); 
    }
    return num2;
}
int toFindTheMaxArea(vector<int>num1){
    int n = num1.size();
    vector<int> pse = toFindThePSE(num1);
    vector<int> nse = toFindNSE(num1);
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,num1[i]*(nse[i]-pse[i]-1));
    }
    return maxi;
}

int getTheMaxArea(vector<int>num1){
    stack<int>st;
    int maxArea = 0;
    for (int i = 0; i < num1.size(); i++)
    {
        while (!st.empty()&&num1[st.top()]>=num1[i]){
            int element = st.top();
            st.pop();
            int NSE = i;
            int PSE = st.empty() ? -1 : st.top();

            maxArea = max(num1[element]*(NSE-PSE-1),maxArea);
        } 
        st.push(i);
    }
    int n = num1.size();
    while(!st.empty()){
        int element = st.top();
        st.pop();

        int NSE = n;
        int PSE = st.empty() ? -1 : st.top();

        maxArea = max(num1[element] * (NSE - PSE - 1), maxArea);
    }

    return maxArea;
}
int main(){
    vector<int> num1 = {3,2,10,11,5,10,6,3};
    cout<<"the area of the rectangle are: "<<endl;
    for(int x:num1){
        cout<<x<<" ";
    }
    cout<<endl;
    int maxarea = getTheMaxArea(num1);
    int maxarea1 = toFindTheMaxArea(num1);
    cout<<"the maximum area would be: ";
    cout<<maxarea<<endl;
    cout<<maxarea1<<endl;
    return 0;

}


