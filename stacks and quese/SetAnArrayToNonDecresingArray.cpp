#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    stack<pair<int,int>>st;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = n-1; i >= 0; i--)
    {
        int steps = 0;
        while (!st.empty()&&st.top().first<arr[i])
        {
            steps = max(steps+1,st.top().second);
            st.pop();
        }

        st.push({arr[i],steps});
        ans = max(ans,steps);
    }

    cout<<"the number of steps to make the array non decreasing is "<<ans;
    return 0;
    
    
}/*
thinkinng to this approach is like that we would be starting from the behind of the array and we need to make sure that every case has to be taken
so we are taking the path of right to left.
step 1 => the thinking is that we need to make sure to count the number of step it takes to remove the element.

*/
