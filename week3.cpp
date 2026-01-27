#include <iostream>
#include <string>
using namespace std;

// class Electricitybill{
//     string customername;
//     int customerid;
//     int unitsconsumed;
//     float billamount;
//     public:

//     Electricitybill(){
//         billamount = 0;
//     }

//     void get(){
//         cout<<"the details of the customer is:"<<endl;
//         cout<<"enter the customer name:";
//         cin.ignore();
//         getline(cin,customername);

//         cout<<"enter the customer id: ";
//         cin>>customerid;

//         cout<<"the number of units consumed are: ";
//         cin>>unitsconsumed;
//     }

//     void calbill(){
//         billamount = unitsconsumed*12;
//     }


//     void put(){
//         cout << "\nCustomer Name: " << customername;
//         cout << "\nCustomer ID: " << customerid;
//         cout << "\nUnits Consumed: " << unitsconsumed;
//         cout << "\nTotal Bill Amount: " << billamount << endl;
//     }
// };
// class Second{
//     int personalid;
//     public:
//     Second(){
//         personalid = 0;
//         cout<<"the default constructor is called."<<endl;
//     }

//     Second(int id){
//         personalid = id;
//         cout<<"the paramaterised constructor have been called."<<endl;
//     }

//     void printpersonalid(){
//         cout<<"the id of the person is: "<<personalid<<endl;
//     }
// };

// class Information{
//     int  enrollmentno;
//     string name;
//     string branch;
//     float cgpa;

//     public:
//     Information(int enroll,string n,string brc,float cg){
//         enrollmentno = enroll;
//         name = n;
//         branch = brc;
//         cgpa = cg;
//     }

//     Information (int enroll,string n,float cg){
//         enrollmentno = enroll;
//         name = n;
//         cgpa = cg;
//         branch = "CSE";
//     }

//     Information(){
//         enrollmentno = 1;
//         name = "unknown";
//         cgpa = 6.0;
//         branch = "CSE";
//     }

//     void setEnrolmentNo(int e) {
//         enrollmentno = e;
//     }

//     void setName(string n) {
//         name = n;
//     }

//     void setBranch(string b) {
//         branch = b;
//     }

//     void setCGPA(float c) {
//         cgpa = c;
//     }

//     // Getter functions
//     int getEnrolmentNo() {
//         return enrollmentno;
//     }

//     string getName() {
//         return name;
//     }

//     string getBranch() {
//         return branch;
//     }

//     float getCGPA() {
//         return cgpa;
//     }

//     void display(){
//         cout << "\nEnrolment Number: " << enrollmentno;
//         cout << "\nName: " << name;
//         cout << "\nBranch: " << branch;
//         cout << "\nCGPA: " << cgpa << endl;
//     }
// };
class Wall{
    float length;
    float height;

    public:
    Wall(float l,float h){
        length = l;
        height = h;
    }

    Wall(const Wall &w1){
        length = w1.length;
        height = w1.height;
    }

    float area(){
        return length*height;
    }

    void display(){
        cout<<"legth of the rectangle is: "<<length<<endl;
        cout<<"legth if the rectangle is: "<<height<<endl;
        cout<<"the area is: "<<area()<<endl;
    }
};

int main(){
    // Electricitybill c1;
    // c1.get();
    // c1.calbill();
    // c1.put();

    // Second emp1;
    // emp1.printpersonalid();

    // Second obj2(12345);
    // obj2.printpersonalid();
    // Information s1(101, "Aryan", "IT", 8.5);
    // Information s2(102, "Rahul", 7.8);
    // Information s3;

    Wall W1(10,10);
    W1.display();

    Wall W2(W1);
    W2.display();
    return 0;
}
