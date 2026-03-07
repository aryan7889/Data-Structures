/*

*/

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
Node* getkthnode(Node* temp,int k){
    k-=1;
    while (temp!=NULL&&k>0)
    {
        k--;
        temp= temp->next;
    }
    return temp;
}
Node* reversethell(Node* head){
    if (head == NULL || head->next==NULL)
    {
        return head;
    }

    Node* newhead = reversethell(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newhead;
}
Node* kreverse(Node* head,int k){
    Node* temp = head;
    Node* prevnode = NULL;
    while (temp!=NULL)
    {
        Node* kthnode = getkthnode(temp,k);
        if (kthnode == NULL)
        {
            if (prevnode)
            {
            prevnode->next = temp;
            }
            break;
        }
        // if the if condition is not satisfying then we need to make sure 
        // k th node should point to the null and make sure to reverse the part
        // but first we need to make sure to store the new node which is 
        // next to the kth node.

        Node* newNode = kthnode->next;
        kthnode->next = NULL;
        // if we need to reverse the part of the linked list then 
        // the end pointer should be null so we are doing that kth.next = NULL;
        Node* newHead = reversethell(temp);
        // reversing the temp.
        if (temp==head)
        {
            head = newHead;
            // this step is done because when we will be printing the linked
            // list we need the first pointer 
        }else{
            prevnode->next=newHead;
            // this step has been done because we can point the linked
            // list after reversing.
        }
        prevnode = temp;
        temp = newNode;
    }
    return head;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int k = 3;

    Node* head = converttoll(arr,n);

    cout << "Original Linked List: ";
    Print(head);

    head = kreverse(head,k);

    cout << "After K Reverse: ";
    Print(head);

    return 0;
}