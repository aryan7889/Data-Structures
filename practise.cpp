#include<bits/stdc++.h>
using namespace std;
// int main(){
//     vector<int>arr1={1,2,3,1,2,1};
//     int n=arr1.size();
//     int i=0;
//     int count=0;

//         while(i<n){
//             auto pos=find(arr1.begin()+i+1,arr1.end(),arr1[i]);
//             if(pos!=arr1.end()){
//                 arr1.erase(pos);
//                 count++;
//             }
//             else{
//                 i++;
//             }
//         }
//     cout<<count<<endl;
//     return 0;
// }


// Question 2 


// int main(){
// int n,k;
// cin>>n>>k;
// vector<int>arr(n);
// for(int i= 0;i<n;i++){
//     cin>>arr[i];
// }
// unordered_map<int,int>mp;
// for (int i = 0; i < n; i++)
// {
//     int need = k- arr[i];

//     if(mp.find(need)!=mp.end()){
//         int index1 = mp[need];
//         int index2 = i;

//         if(index1<index2){
//             cout<<index1<<" "<<index2;
//         }else{
//             cout<<

//         }
//     }
// }

// }







class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

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







 