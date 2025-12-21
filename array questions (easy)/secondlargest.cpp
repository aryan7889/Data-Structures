#include <iostream>
using namespace std;

int main(){
    int arr[10]={2,5,6,8,9,7,5,6,5,3};

    int largest;
    largest = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i];
        }
    }

    cout<<"the largest is : "<<largest<<endl;

    cout<<"to find the second largest: "<<endl;

    int secondlargest;
    secondlargest = -1;
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]>largest){
            largest = arr[i];
            secondlargest = largest;
        }else if(arr[i]<largest && arr[i]>secondlargest){
            secondlargest = arr[i];
        }
    }
    
    cout << "the second largest element is : "<<secondlargest;
    return 0;
}