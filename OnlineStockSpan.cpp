#include<bits/stdc++.h>
using namespace std;

class StockSpan{
    private:
    stack<pair<int,int>>st;
    int index = -1;
    public:

    StockSpan(){

    }

    int span(int prices){
        index++;
        int span = 0;
        while (!st.empty()  &&  st.top().first<prices)
        {
            st.pop();
        }
        if(!st.empty()){
            span = index - st.top().second;
        }else{
            span = index - (-1);
        }

        st.push({prices,index});
    return span;
    }
};

int main(){
    StockSpan s;
    vector<int> prices = {7,2,1,3,3,1,8};

    cout<<"Prices -> Span"<<endl;
    cout<<"              "<<endl;

    for(int price: prices){
        cout<<price<<"   ->   "<<s.span(price)<<endl;
    }
    return 0;
}