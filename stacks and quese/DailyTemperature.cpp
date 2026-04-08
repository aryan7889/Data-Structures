#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>num(n,0);
    stack<pair<int,int>>st;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    for (int i = 0; i < n; i++)
    {
        while(!st.empty() && st.top().first<arr[i]){
            int index = st.top().second;
            st.pop();
            num[index]=i-index;
        }
        st.push({arr[i],i});
    }

    for (int x:num)
    {
        cout<<x<<" ";
    }

    return 0;
}