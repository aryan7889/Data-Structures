#include<bits/stdc++.h>
using namespace std;
class Minstack{
    public:
    stack<int>st;
    int min;
    void push(int val){
        if(st.empty()){
            min = val;
            st.push(val);
        }else{
            if(val>=min){
                st.push(val);
            }else{
                st.push(2*val-min);
                min= val;
            }
        }
    }

    void pop(){
        if(st.empty()){
            return;
        }
        int x = st.top();
        st.pop();
        if(x<min){
            min = 2*min - x;
        }
    }

    int gettop(){
        if(st.empty()){
            return -1;
        }
        int x = st.top();
        if(x>=min){
            return x;
        }
        return min;
    }

    int getmin(){
        return min;
    }
};

int main(){

    Minstack s;

    s.push(5);
    s.push(3);
    s.push(7);
    s.push(2);

    cout<<"Current Minimum: "<<s.getmin()<<endl;

    cout<<"Top Element: "<<s.gettop()<<endl;

    s.pop();

    cout<<"After pop:"<<endl;

    cout<<"Top Element: "<<s.gettop()<<endl;
    cout<<"Current Minimum: "<<s.getmin()<<endl;

    return 0;
}