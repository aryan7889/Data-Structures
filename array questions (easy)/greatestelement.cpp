#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,3,10,1,3};
    int largest;
    largest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i];
        }
    }

    cout<<"the largest element is "<<largest;
    return 0;
    
}