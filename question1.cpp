#include <iostream>
#include<cstring>
using namespace std;

// int main(){
//     int *ptr = new int;
//     cout<<"enter the values of the pointer :"<<endl;
//     cin>>*ptr;

//     cout<<"the value of the pointer is :"<<*ptr<<endl;
//     cout<<"the address of the poibnter is :"<<ptr;

//     delete ptr;
//     ptr = nullptr;
// }
/*
int main(){
    int n;
    cout<<"enter the size of the array: "<<endl;
    cin>>n;

    int *arr =new int[n];
    cout<<"enter the elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    cout<<"the sum is "<<sum<<endl;
    delete []arr;
    return 0;
}
*/

/*
int main(){
    for(int i=0;i<5;i++){
        int *temp = new int;
        *temp = i*10;
        cout<<"the value of the temp is "<<*temp<<endl;
        delete temp;
    }
    return 0;
}*/

// so we need to dynamic allocate the memory of the 2d array:
/*
int main(){
    int rows,cols;
    cin>>rows>>cols;

    // to allocate the memory :
    int **matrix = new int *[rows];
    for(int i=0;i<rows;i++){
        matrix[i]= new int [cols];
    }

    cout<<"enter the elements in the array: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"the matrix is: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<rows;i++){
        delete[] matrix;
    }
    delete[] matrix;

    return 0;
}*/

/*int *resizearry(int *oldarray,int oldsize,int &newsize){
    newsize = oldsize*2;
    int *newarray = new int [newsize];
    for(int i=0;i<oldsize;i++){
        newarray[i]=oldarray[i];
    }

    for (int i = oldsize ;i < newsize; i++)
    {
        newarray[i]=0;
    }
    delete[]oldarray;
    return newarray;
}
int main(){
    int size;
    cin>>size;

    int *arr = new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"the original array: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    arr = resizearry(arr,size,size);

    cout<<"resized array is : ";
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/

// struct Student
// {
//     char name[50];
//     int rollno;
//     float marks;
// };

// int main(){
//     int n;
//     cout<<"enter the size of the student"<<endl;
//     cin>>n;

//     Student *student = new Student[n];

//     for(int i=0;i<n;i++){
//         cout<<"the name of the student: "<<i+1<<endl;
//         cin>>student[i].name;
//         cout<<"rollno: ";
//         cin>>student[i].rollno;
//         cout<<"marks: ";
//         cin>>student[i].marks;
//     }

    
//     int maxindex = 0;
//     for(int i=1;i<n;i++){
//         if(student[i].marks>student[maxindex].marks){
//             maxindex = i;
//         }
//     }

//     cout<<"the highest marks are: "<<student[maxindex].marks<<endl;
//     cout<<"the name is : "<<student[maxindex].name<<endl;
//     cout<<"the rollno. : "<<student[maxindex].rollno<<endl;

//     return 0;
// }

//  now on to the further self we will learn the structure and union in the programming language

// struct information
// {
//     char name[20];
//     int rollno;
//     float marks;
// };
// int main(){
//     information S1;
//     S1.rollno = 20;
//     S1.marks = 100;
//     strcpy(S1.name,"aryan goyal");

//     cout << "Roll No: " << S1.rollno<< endl;
//     cout << "Name: " << S1.name<< endl;
//     cout << "Marks: " << S1.marks;

//     return 0;
// }
/*struct student{
    char name[20];
    int rollno;
    int marks;
};
int main(){
    student *info = new student;
    info->marks=20;
    info->rollno = 10;
    strcpy(info->name,"aryan goyal");

    cout<<"the name is: "<<info->name<<endl;
    cout<<"roll number is: "<<info->rollno<<endl;
    cout<<"marks are: "<<info->marks;

    return 0;
}
*/

