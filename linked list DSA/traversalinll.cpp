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
// if we need to convert to ll then we need to take three pointers
// so that one points to the temp which is the element next to the head
// one pointer to the heaad
// one pointer to the mover which is intially on the head.
// so the head would not be chaged mover will move forwqard and the temp will move forward
// if it is the linked list then it should satisfy yhe condition that the mover.next = temp;
// and then to proceed further the mover shoould be getting updated in the way [mover = temp];

Node* convertoll(int arr[],int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < n; i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover=temp;
    }
    
return head;
}
int main(){
    int arr[4]={1,2,3,4};
    Node* head= convertoll(arr,4);
    Node* temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}