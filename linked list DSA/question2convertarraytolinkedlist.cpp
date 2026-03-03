#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1,Node* node1){
        data = data1;
        next = node1;
    }
    Node (int data1){
        data = data1;
        next = nullptr;
    }
};

Node* converttoll(int arr[],int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < n; i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next= temp;
        mover = temp;
    }
    return head;
}

int main(){
    int arr[4]={12,2,3,4};
    Node* head = converttoll(arr,4);
    cout<<head->data;
    return 0;
}