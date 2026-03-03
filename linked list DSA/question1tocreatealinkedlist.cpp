#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int main(){
    int arr[4]={1,2,3,4};
    Node* y = new Node(arr[0],nullptr);
    cout<<y->data;
    return 0;
}