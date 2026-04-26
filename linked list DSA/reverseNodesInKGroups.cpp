#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void Print(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* converttoll(int arrrr[],int n){
    Node* head = new Node(arrrr[0]);
    Node* mover = head;
    for (int i = 1; i < n; i++)
    {
        Node* temp = new Node(arrrr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* getKthNode(Node* temp,int k){
    
}