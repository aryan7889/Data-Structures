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

Node* reverse(Node* head){
    if (head==NULL || head->next== NULL)
    {
        return head;
    }

    Node* newHead= reverse(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;  
}

bool ispallindrome(Node* head){
    if (head==NULL || head->next ==NULL)
    {
        return true;
    }
    Node* slow = head;
    Node* fast = head;
    while (fast->next!=NULL&&fast->next->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* newNOde = reverse(slow->next);
    Node* first  = head;
    Node* second = newNOde;
    while (second!=NULL)
    {
        if (first->data!=second->data)
        {
            reverse(newNOde);
            return false;
        }
        first = first->next;
        second = second->next;
    }
    
    reverse(newNOde);
    return true;
    
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


int main() {

    int arr[] = {1, 2, 3, 2, 1};
    Node* head = converttoll(arr, 5);

    if (ispallindrome(head))
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    return 0;
}