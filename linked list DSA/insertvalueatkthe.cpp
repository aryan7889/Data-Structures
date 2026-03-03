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
Node* convertll(int arr[],int n){
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
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* insertatkth(Node* head,int val,int k){
    if(head==NULL){
        if(k==1){
            return new Node(val);
        }else{
            return head;
        }
    }
    if(k==1){
        Node* temp = new Node(val,head);
        return temp;
    }
    int count = 0;
    Node* temp = head;
    while (temp!=NULL)
    {
        count++;
        if(count == k-1){
            Node* x = new Node(val,temp->next);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
   return head; 
}

int main(){
    int arr[4]={1,2,3,4};
    Node* head = convertll(arr,4);
    head = insertatkth(head,10,1);
    print(head);
}