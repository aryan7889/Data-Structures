#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* bottom;
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
        bottom = nullptr;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        bottom = nullptr;
    }
};

Node* converttoll(int arr[],int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < n; i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl; 
}

Node* merge(Node* head1,Node* head2){
    Node* dummynode = new Node(-1);
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* temp = dummynode;
    while (temp1!=NULL&& temp2!=NULL)
    {
        if (temp1->data<temp2->data)
        {
            temp->bottom = temp1;
            temp = temp1;
            temp1 = temp1->bottom;
        }else{
            temp->bottom = temp2;
            temp = temp2;
            temp2 = temp2->bottom;
        }
        temp->next = NULL;
    }
    if (temp1)
    {
        temp->bottom = temp1;
    }else{
        temp->bottom = temp2;
    }
   return dummynode->bottom; 
}
Node* flattenedlist(Node* head){
    if(head==NULL||head->next ==NULL){
        return head;
    }
    Node* mergehead= flattenedlist(head->next);
    head = merge(head,mergehead);
    return head;
}

