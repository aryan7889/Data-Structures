/*(

)*/
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
int findlenght(Node* slow,Node* fast){
    int cnt = 1;
    fast = fast->next;
    while (slow!=fast)
    {
        cnt++;
        fast = fast->next;
    }
    return cnt;
}
int lenghtoftheloop(Node* head){
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow==fast)
        {
            return findlenght(slow,fast);
        }
    }
    return 0;
}



int main(){
    
    int arr[] = {1,2,3,4,5};
    Node* head = converttoll(arr,5);

    // Creating a loop manually
    head->next->next->next->next->next = head->next;
    cout<<"the length of the loop is :"<<lenghtoftheloop(head);
    return 0;
}