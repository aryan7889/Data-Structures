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

// Node* findMiddle(Node* head){
//     if (head==NULL)
//     {
//         return NULL;
//     }
//     int lenght = 0;
//     Node* temp = head;

//     while (temp!=NULL)
//     {
//         lenght++;
//         temp=temp->next;
//     }
//     int middlenode = lenght/2+1;

//     temp = head;
//     while (temp!=NULL)
//     {
//         middlenode = middlenode - 1;
//         if (middlenode == 0)
//         {
//             break;
//         }

//         temp = temp->next;
//     }
//     return temp;
// }

Node* findmiddle(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while (fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

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

int  main(){
    int arr[4]={1,2,3,4};
    Node* head = converttoll(arr,4);
    Node* newHead = findmiddle(head);
    Print(newHead);
    return 0;
}