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
Node* convertll(int arr[],int n){
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
    Node* temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
/*
dummy variable approach is the useful approach when we are making
a new linked list it help to easily implement the code.
that is the reason that we are using the dummy variable concept.


In this problem we are making sure to make a new linked list so we have assigned a s
dummy varible to be as -1.
->first value of the linked going in to the temp1.
->first value of the second linked list gooes in to the temp2.
->carr which is representing the dummy variable and will be getting further as soon as we do the sum of the data.
->carry which will storing the second place value number of the sum.

*/
Node* addtwonumber(Node* head1,Node* head2){
    Node* dummyvariable = new Node(-1);
    Node* carr = dummyvariable;
    Node* temp1 = head1;
    Node* temp2 = head2;

    int carry = 0;
    while (temp1!=NULL||temp2!=NULL)
    {
        int sum = carry;
        if(temp1){
            sum += temp1->data;
        }
        if(temp2){
            sum+= temp2->data;
        }
        Node* newnode = new Node(sum%10);
        carry = sum/10;

        carr->next= newnode;
        carr = carr->next;

        if(temp1){
            temp1 = temp1->next;
        }

        if(temp2){
            temp2 = temp2->next;
        }
    }

    if(carry){
        Node* newnode = new Node(carry);
        carr->next = newnode;
    }
    return dummyvariable->next;
}

int main(){
    int arr[3]={1,2,3};
    int arr2[3]={1,8,3};
    Node*head1 = convertll(arr,3);
    Node* head2 = convertll(arr2,3);

    Node* result = addtwonumber(head1,head2);
    print(result);
    return 0;
}