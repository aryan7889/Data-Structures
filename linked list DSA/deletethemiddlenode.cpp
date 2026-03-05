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



// Node* deletethemiddlenode(Node* head){
//     Node* slow = head;
//     Node* fast = head;
//     if (head==NULL || head->next==NULL)
//     {
//         return NULL;
//     }
//     fast = fast->next->next;
//     while (fast!=NULL && fast->next!=NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     slow->next = slow->next->next;
//     return head;
// }

Node* deletemiddle(Node* head){
    Node* temp = head;
    int cnt = 0;
    if (head == NULL || head->next == NULL){
        return NULL;
    }
    
    
    while (temp!=NULL)
    {
        cnt++;
        temp = temp->next;
    }
    int res = cnt/2;
    temp = head;
    while (temp!=NULL)
    {
        res--;
        if (res == 0)
        {
            Node* middle = temp->next;
            temp->next = temp->next->next;
            delete middle;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main(){
    int arr[5]={1,2,3,4,5};
    Node* head = converttoll(arr,5);
    // Node* newHead = deletethemiddlenode(head);
    // Print(newHead);
    Node* newN = deletemiddle(head);
    Print(newN);
    return 0;
} 