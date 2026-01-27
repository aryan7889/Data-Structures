#include<iostream>
#include<string>
using namespace std;
// class Student{
//     string name;
//     int rollno;
//     float marks;

//     public:
//         void studentdetails(){
//             cout<<"enter the name: "<<endl;
//             cin.ignore();
//             getline(cin,name);
//             cout<<"enter the rollno."<<endl;
//             cin>>rollno;
//             cout<<"enter the marks: ";
//             cin>>marks;
            
//         }
// };

// class bankaccount{
//     int accountnumber;
//     string accountholder;
//     float balance;

//     public:
//     void setdetails(int accNum,string name,float intialbalance){
//         accountholder = name;
//         accountnumber = accNum;
//         balance = intialbalance;
//     }

//     void deposit(float amount){
//         if(amount>0){
//             balance +=amount;
//             cout<<"the amount has been deposited.";
//         }else{
//             cout<<"enter the valid amount.";
//         }
//     }

//     void withdraw(float amount){
//         if(amount>0 && amount<=balance){
//             balance-=amount;
//             cout<<"the amount has been withdrawn.";
//         }else{
//             cout<<"insufficeint amount.";
//         }
//     }

//     void displaydetails(){
//         cout<<"";
//         cout<<"";
//         cout<<"";
//     }
// };

// class employe{
//     int employeeid;
//     string name;
//     float salary;

//     public: 
//     void inputdetails(){
//         cout<<"enter the employe id:";
//         cin>>employeeid;
//         cout<<"enter the name";
//         cin.ignore();
//         getline(cin,name);
//         cout<<"enter the slarary:";
//         cin>>salary;
//     }
//     int annualslary(){
//         return salary*12;
//     }

//     int giveraise(float perenatge){
//         int raise = salary * (perenatge/1000);
//         salary+=raise;
//     }
// }

// constructor:
// copy constructor:

// class Point
// {
// private:
//     int x,y;
// public:
//     Point(int xcoord,int ycoord){
//         x = xcoord;
//         y = ycoord;
//         cout<<"Paramaterized constructor called.";
//     }
//     Point(const Point &p){
//         x = p.x;
//         y = p.y;
//         cout<<"copy constructor called.";
//     }

//     void display(){
//         cout<<"Point ("<<x<<","<<y<<")"<<endl;
//     }
// };
// class Student{
//     string name;
//     int * marks;
//     int numsubjects;

//     public:
//         Student(string n,int subjects){
//             name = n;
//             numsubjects = subjects;
//             marks = new int[numsubjects];

//             for(int i=0;i<numsubjects;i++){
//                 marks[i]=0;
//             }
//         }

//         void setmarks(int subject,int mark){
//             if (subject>0 && subject< numsubjects)
//             {
//                 marks[subject]=mark;
//             }
            
//         }

//         double averagemark(){
//             int sum = 0;
//             for(int i=0;i<numsubjects;i++){
//                 sum += marks[i];
//             }

//             return (double)sum/numsubjects;
//         }

//         void display(){
//             cout << "Student: " << name << endl;
//         cout << "Marks: ";
//         for(int i = 0; i < numsubjects; i++) {
//             cout << marks[i] << " ";
//         }
//         cout << endl;
//         cout << "Average: " << averagemark() << endl;
//         }

//         ~Student(){
//             delete[]marks;
//         }
// };
int main(){
    
    return 0;
}