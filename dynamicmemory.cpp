#include <bits/stdc++.h>
using namespace std;

// class Student{
//     string name;
//     int age;

//     public:
//         void setData(string n,int a){
//             name = n;
//             age = a;
//         } 
//         void display(){
//             cout<<name<<","<<age<<endl;
//         }
// };

// int main(){
//     Student *S1 = new Student();
//     S1->setData("John",20);
//     S1->display();
//     delete S1;

//     Student *S2 = new Student[3];
//     S2[0].setData("Alice",20);
//     S2[1].setData("BOB",10);
//     delete[] S2;

//     return 0;
// }

// problem 2 :
class Student{
    string name;
    float marks;

    public:
    void setData(string n,float a){
        name = n;
        marks = a;
    }

    void display(){
        cout<<"Name : "<<name<<", Marks: "<<marks<<endl;
    }
    float getMArks(){
        return marks;
    }
    string getname(){
        return name;
    }
};
int main(){
    int n;
    cout<<"enter the students number"<<endl;
    cin>>n;

    Student *student = new Student[n];

    for(int i=0;i<n;i++){
        float marks;
        string name;
        cout<<"students"<<i+1<<":"<<endl;
        cout<<"enter the name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter the marks:";
        cin>>marks;
        student[i].setData(name,marks);
    }

    cout<<"all students are"<<endl;
    for(int i=0;i<n;i++){
        student[i].display();
    }

    
}
