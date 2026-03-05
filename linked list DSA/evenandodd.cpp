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
    Node* mover  = head;
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


Node* evenandoddll(Node* head){
    if(head == NULL || head->next == NULL)
        return head;

    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;

    while (even!=NULL && even->next!=NULL)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;

    return head;
    
}
/*
odd       → tracks odd position nodes
even      → tracks even position nodes
evenHead  → stores start of even list (VERY IMPORTANT)
If a node already points to a fully formed sublist,
connecting to its head connects the entire sublist.
since both the link are connected as in the odd section and the 
even section and the most important pointer the even head which need to be 
connected to the odd.next.
*/
int main (){
    int arr[]={1,3,56,7,4,21,4,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    Node* head = convertoll(arr,n);
    cout<<"the original list is: "<<endl;
    print(head);

    cout<<"after the odd even the list is: "<<endl;
    print(evenandoddll(head));
    return 0;
}