#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* nxt;
    Node(int data1,Node* nct1){
        data = data1;
        nxt = nct1;
    }
    Node(int datata1){
        data = datata1;
        nxt = nullptr;
    }
};

Node* convertoll(int arr[],int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < n; i++)
    {
        Node* temp = new Node(arr[i]);
        mover->nxt=temp;
        mover = temp;
    }
    return head;
}

Node* deletetail(Node* head){
    if(head == NULL || head->nxt == NULL){
        return NULL;
    }
    Node* temp = head;
    while (temp->nxt->nxt!=NULL)
    {
        temp = temp->nxt;
    }
    delete temp->nxt;
    temp->nxt = nullptr;
    return head;
}

void print(Node* head){
    Node* temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->nxt;
    }
    cout<<endl;
}

int main(){
    int arr[4]={1,2,3,4};
    Node* head = convertoll(arr,4);
    head = deletetail(head);
    print(head);
    return 0;
}