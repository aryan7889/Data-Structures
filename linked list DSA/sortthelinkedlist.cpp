#include <bits/stdc++.h>
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

Node* converttoll(int arr[],int n){
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
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* sortthell(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);

    Node* zero = zeroHead;
    Node* one = oneHead;
    Node* two = twoHead;
    
    Node* current = head;

    while (current)
    {
        if(current->data==0){
            zero->next = current;
            zero = zero->next;
        }else if(current->data == 1){
            one->next = current;
            one = one->next;
        }else{
            two->next = current;
            two = two->next;
        }

        current = current->next;
    }

    zero->next = (oneHead->next)? oneHead->next : twoHead->next;
    one->next = twoHead->next;
    two->next = NULL;

    Node* newNode = zeroHead->next;

    delete oneHead;
    delete zeroHead;
    delete twoHead;
    return newNode;
    
}

int main(){

    int arr[] = {1, 0, 2, 1, 0, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    Node* head = converttoll(arr, n);

    cout << "Original List: ";
    print(head);

    head = sortthell(head);

    cout << "Sorted List: ";
    print(head);

    return 0;
}