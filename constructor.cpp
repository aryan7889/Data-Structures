#include <iostream>
#include <cstring>
using namespace std;

// class Book{
//     private:
//     string title;
//     string author;

//     public:

//     Book(string t,string a){
//         title = t;
//         author = a;
//     }

//     void displayinfo(){
//         cout<<"title of the book is: "<<title<<endl;
//         cout<<"the author of the book is: "<<author<<endl;
//     }
// };

// class BankAccount{
//     private:
//     string accountnumber;
//     double balance;

//     public:

//     BankAccount(string accNo,double bal){
//         accountnumber = accNo;
//         if (bal<0)
//         {
//             cout<<"balance caannot be in the negative."<<endl;
//             balance = 0;
//         }
//         else{
//             balance = bal;
//         }
//     }

//     void showbalance(){
//         cout<<"acccunt: "<<accountnumber<<"balance: "<<balance<<endl;
//     }
// };

// class Rectangle{
//     private:
//     int length;
//     int breadth;

//     public:

//     Rectangle(){
//         length = 1;
//         breadth = 1;
//     }

//     Rectangle (int side){
//         length = side;
//         breadth = side;
//     }

//     Rectangle(int l,int w){
//         length = l;
//         breadth = w;
//     }

//     int area(){
//         return length*breadth;
//     }

//     int perimeter(){
//         return 2*(length+breadth);
//     }

//     void display(){
//         cout<<"length: "<<length<<"breadth: "<<breadth<<endl;
//         cout<<"Area: "<<area()<<endl;
//         cout<<"perimeter: "<<perimeter()<<endl;
//     }
// };

// class Employee{
//     private:
//     string name;
//     int employeeid;
//     string department;
//     double salary;

//     public:
//     Employee(string n,int id,string dept,double sal){
//         name = n;
//         employeeid = id;
//         department = dept;
//         salary = sal;
//     }

//     void displayDetails(){
//         cout<<"name: "<<name<<endl;
//         cout<<"id : "<<employeeid<<endl;
//         cout<<"department: "<<department<<endl;
//         cout<<"salary: "<<salary<<endl;
//     }

//     void giverraise(float percentage){
//         int raise = salary *(percentage/100);
//         salary += raise;
//         cout<<"new salary: "<<salary<<endl;
//     }
// };
// copy constructor:

// class Point{
//     int x,y;

//     public:

//     Point(int xcoord,int ycoord){
//         x = xcoord;
//         y = ycoord;
//         cout<<"Parametrized constructor called"<<endl;
//     }

//     Point(const Point &p){
//         x = p.x;
//         y = p.y;
//         cout<<"Copy constructor called"<<endl;
//     }

//     void display(){
//         cout<<"point("<<x<<","<<y<<")"<<endl;
//     }
// };

// class Student{
//     private:
//     string name;
//     int* marks;
//     int numsubjects;

//     public:
//     Student(string n,int subjects){
//         name = n;
//         numsubjects = subjects;
//         marks = new int[numsubjects];

//         for(int i=0;i<numsubjects;i++){
//             marks[i]=0;
//         }
//     }

//     void setmarks(int subject,int mark){
//         if(subject>=0&&subject<numsubjects){
//             marks[subject]=mark;
//         }
//     }

//     double getaverage(){
//         int sum = 0;
//         for(int i=0;i<numsubjects;i++){
//             sum += marks[i];
//         }

//         return (double)sum/numsubjects;
//     }

//     void display(){

//     }
// };

// class Student{
//     public:
//     char* name;
//     int age;

//     Student(const char* n,int a){
//         age = a;
//         name = new char[strlen(n)+1];
//         strcpy(name,n);
//     }

//     ~Student(){
//         delete[] name;
//         cout<<"destructor is called."<<endl;
//     }

// };

// deep copy
// class Student{
//     public:
//     char* name;
//     int age;

//     Student(const char* n,int a){
//         age = a;
//         name = new char[strlen(n)+1];
//         strcpy(name,n);
//         cout<<"the constructor is called for: "<<name<<endl;
//     }

//     // deep copy

//     Student(const Student &obj){
//         age = obj.age;
//         name = new char[strlen(obj.name)+1];
//         strcpy(name,obj.name);
//         cout<<"deep copy constructor for"<<name<<endl;
//     }

//     ~Student(){
//         cout<<"ddestructor called for "<<name<<endl;
//         delete[] name;
//     }

//     void display(){
//         cout<<"Name: "<<name<<"age :"<<age<<endl;
//     }
// };
// shopping cart:

class Shoppingcart{
    public:
    char* username;
    int* items;
    int itemcount;

    Shoppingcart(const char* name,int count){
        username = new char[strlen(name)+1];
        strcpy(username,name);

        itemcount = count;
        items = new int[count];
        for(int i=0;i<count;i++){
            items[i]=(i+1)*100;
        }
    }

    Shoppingcart(const Shoppingcart &obj){
        username = new char[strlen(obj.username)+1];
        strcpy(username,obj.username);

        itemcount = obj.itemcount;
        items = new int[itemcount];
    }
};
int main(){
    
    return 0;
}

