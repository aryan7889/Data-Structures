#include<bits/stdc++.h>
using namespace std;
vector<int>asteroidcollision(int arr[],int n){
    list<int> st;

    for(int i=0;i<n;i++){
        int ast = arr[i];
        bool desteroyed = false;
        while (!st.empty()&&st.back()>0&&ast<0)
        {
            if(abs(st.back())<abs(ast)){
                st.pop_back();
            }
        }
        
    }
}