#include<iostream>
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

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
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
/*
By tthe help of the recursive code we have done this question
the concept of the problem is that we are divinding the linked list in to vairous segments and making
sure that the two of them has to be solved.
The concept is that we are introducing the front and the head has 
been given.
The frint would be the element next to the head. now the coore concept off the linked list has to be done
which is the front shoud be the pointing to the element backward and the element before front should be 
pointing to the null so (head should be pointing to the null).
*/
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
    Node* newHead = reversethell(head);
    printList(newHead);
    return 0;
}