#include<bits/stdc++.h>
using namespace std;

int main(){
    string num = "1432219";
    stack<char>st;
    int k = 3;
    
    for (int i = 0; i < num.size(); i++)
    {
        while (!st.empty()&&k>0&&st.top()>num[i])
        {
            st.pop();
            k--;
        }
        st.push(num[i]);
    }

    while (k>0)
    {
        st.pop();
        k--;
    }
    
    if(st.empty()){
        cout<<"0";
        return 0;
    }
    
    string res = "";

    while (!st.empty())
    {
        res.push_back(st.top());
        st.pop();
    }

    reverse(res.begin(), res.end());
    
    while (res.size()>0&&res[0]=='0'){
        res.erase(res.begin());
    }
    
    
    if(res.empty()){
        cout<<"0";
        return 0;
    }
    cout << res << endl;
        
}
