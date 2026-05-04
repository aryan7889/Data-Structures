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

Node* reverseTheLL(Node* head){
    Node* temp = head;
    Node* prev = nullptr;
    while(temp){
        Node* newNode  = temp->next;
        temp->next = prev;
        prev = temp;
        temp = newNode;

    }
    return prev;
}

Node* RemoveNodesFromTheRight(Node* head){
    head = reverseTheLL(head);
    Node* curr = head;
    int mv = curr->data;
    
    while (curr && curr->next)
    {
        if(curr->next->data<mv){
            curr->next = curr->next->next;
        }else{
            curr = curr->next;
            mv = curr->data;
        }
    }
    return reverseTheLL(head);
    
}

Node* converToLL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

int main(){
    vector<int>array = {5,2,13,3,8};
    Node* head = converToLL(array);
    head = RemoveNodesFromTheRight(head);
    print(head);
    return 0;
}