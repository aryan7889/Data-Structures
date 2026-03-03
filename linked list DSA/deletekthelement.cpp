#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* nxt;
    Node(int data1,Node* nct1){
        data = data1;
        nxt = nct1;
    }
    Node(int datata1){
        data = datata1;
        nxt = nullptr;
    }
};

Node* convertoll(int arr[],int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < n; i++)
    {
        Node* temp = new Node(arr[i]);
        mover->nxt=temp;
        mover = temp;
    }
    return head;
}

Node* deletek(Node* head,int k){
    if(head == NULL){
        return NULL;
    }
    if(k==1){
        Node* temp = head;
        head = head->nxt;
        delete temp;
        return head;
    }

    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while (temp!=NULL)
    {
        cnt++;
        if(cnt==k){
            prev->nxt=prev->nxt->nxt;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->nxt;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->nxt;
    }
    cout<<endl;
}

int main(){
    int arr[4]={1,2,3,4};
    Node* head = convertoll(arr,4);
    head = deletek(head,2);
    print(head);
    return 0;

}