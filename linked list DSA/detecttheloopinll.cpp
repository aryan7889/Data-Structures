/*
If there exist a minimum of one node where we can start adn reach back to the same number.

so what we will actually do is that we wont store the value we would be 
storing the object at that memory allocation.

and we will check before sstiring that does that object was present
inside the map before making sure to add it in the map.

*/

/*
temp = head
make sure to check 
if(mpp.find(temp)==object){
retrurn true;}

*/

/*

tortoise and the horse algo:
make sure to point the slow and the fast on the head and make sure to move the pointer
of the slow by 1 step and the pointer of the fast by the 2 step so 
the condition of the while ehich we need to put in would be the same as we used to do in 
finding the middle.
and the boolean result which would be telling about the loop in the lined list 
would be satisfied when the slow and the fat would be at the same node in the linked list.

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

Node* converttoll(int arr[], int n) {
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < n; i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

bool detectLoop(Node* head) {

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            return true;
        }
    }

    return false;
}

int main() {

    int arr[] = {1,2,3,4,5};
    Node* head = converttoll(arr,5);

    // Creating a loop manually
    head->next->next->next->next->next = head->next;

    if(detectLoop(head)) {
        cout << "Loop detected";
    }
    else {
        cout << "No loop";
    }

}