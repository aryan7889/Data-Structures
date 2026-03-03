#include<bits/stdc++.h>
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

Node* convertoll(int arr[],int n){
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

Node* deletehead(Node* head){
    if(head == NULL){
        return 0;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

void print(Node* head){
    Node* temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    int arr[4]={1,2,3,4};
    Node* head = convertoll(arr,4);
    head = deletehead(head);
    print(head);
    return 0;
}