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
Node* mergetwoll(Node* head1,Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;
    while (temp1!=NULL&&temp2!=NULL)
    {
        if (temp1->data<temp2->data)
        {
            temp->next = temp1;
            temp = temp1;
            temp1 = temp1->next;
        }else{
            temp->next = temp2;
            temp = temp2;
            temp2 = temp2->next;
        }
    }
    if (temp1)
        {
            temp->next = temp1;
        }else{
            temp->next = temp2;
        }
    return dummyNode->next;
}

int main(){
    int arr[4]={2,3,4,5};
    int arr1[4]={1,6,7,8};
    Node* head1 = converttoll(arr,4);
    Node* head2 = converttoll(arr1,4);
    Node* newhead = mergetwoll(head1,head2);
    Print(newhead);
    return 0;
}