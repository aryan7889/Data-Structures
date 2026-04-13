#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array: "<<endl;
    cin>>n;
    vector<int>arr(n);
    vector<int>num(n,0);
    stack<pair<int,int>>st;
    cout<<"enter the elements of the array: "<<endl;
    for(int i = 0;i<n;i++){
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


//the main thing that was thought behind the approach was that we need to compare the 
//element in the stack with the arr[i].if the condition satisfy which is st.top().first<arr[i]
//then we would be going into the while loop which will make sure to do the operarion on behalf of that.
//if the condition satisfy the main thing we need to make sure is that we need to get the index which need to be stored in the answer 
//array and the thing ehich will get reeturn and get stored in the array would be the index of the number which is greater to the 
//corresponding element of the pair so that can be get by the help of subtracting the index of the element which is greater to the element which is correspiding element of the pair
//the main thing how would it get stored: it would get stored int he answer array by storing it in the index which would be st.top().second;
//then pop the pair from the stack.
//push the pair in the stack if it would not aatisfy the condition
