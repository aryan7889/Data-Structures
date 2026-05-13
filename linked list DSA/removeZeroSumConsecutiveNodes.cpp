#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1,Node* nxt1){
        data = data1;
        next = nxt1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertoll(int arr[],int n){
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
Node* removeZeroSumConsecutiveNodes(Node* head){
    stack<int>result;
    Node*temp = head;
    
}