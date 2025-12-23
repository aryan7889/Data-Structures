#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,89,4,5};
    int temp[10];
    int i = 0;
    temp[0]=arr[0];
    for (int j = 1; j < 10; j++)
    {
        if(arr[j]!=arr[j-1]){
            temp[i+1]=arr[j];
            i++;
        }
    }
    cout<<"the array woul be : ";
    for (int i = 0; i < 10; i++)
    {
        cout<<temp[i]<<" ";
    }
    
    return 0;
}