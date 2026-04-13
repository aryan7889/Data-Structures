#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};


Node* converttol(vector<int>arr){
    int n=arr.size();
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
Node* reverseList(vector<int>arr){
    Node*head=converttol(arr);
    Node*prev=nullptr;
    Node*temp=head;
    while(temp!=NULL){
        Node*duplicate=temp->next;
        temp->next=prev;
        prev=temp;
        temp=duplicate;
    }

    return prev;


}
void print(Node*head){
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main(){
    vector<int>arr={1,2,3,4};
    Node*head=reverseList(arr);
    print(head);

}