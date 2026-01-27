#include<iostream>
#include<string>
#include <vector>
#include <iomanip>
using namespace std;

// class Bankaacount{
//     string accountholdername;
//     long long accountnumber;
//     double balance;

//     public:
//     void memeberfunction(string n,long long accno,double bal){
//         accountholdername = n;
//         accountnumber = accno;
//         balance = bal;
//         cout<<"account created."<<endl;
//     }

//     void deposit(double amount){
//         if(amount<=0){
//             cout<<"invaalid amount.please enter the positive value."<<endl;
//             return;
//         }
//         balance += amount;
//         cout<<"amount deposited successfully!"<<endl;
//         cout<<"new balance: "<<balance<<"."<<endl;
//     }

//     void withdraw(double amount){
//         if (amount<=0)
//         {
//             cout<<"invalid amount."<<endl;
//             return;
//         }
//         if (amount>balance)
//         {
//             cout<<"amount could not be greater then balance."<<endl;
//             return;
//         }
//         balance -= amount;
//         cout<<"amount withdrwan successfully."<<endl;
//         cout<<"remaning balance is"<<balance<<endl;
        
//     }

//     void display(){
//         cout << "\n--- Account Details ---" << endl;
//         cout << "Account Holder: " << accountholdername << endl;
//         cout << "Account Number: " << accountnumber << endl;
//         cout << "Current Balance: $"<< balance << endl;
//         cout << "----------------------\n" << endl;
//     }
// };




// class Vector{
//     private:
//     vector<float> elements;
//     int size;

//     public:
//     Vector(int n){
//         size = n;
//         elements.resize(n);
//         cout<<"vector of size"<<n<<endl;
//     }

//     void initializze(){
//         cout<<"enter "<<size<<" elemnts"<<endl;
//         for (int i = 0; i < size; i++)
//         {
//             cout<<"elements "<<(i+1)<<" :"<<endl;
//             cin>>elements[i];
//         }
//     }

//     void initialize(float arr[],int n){
//         if(n!=size){
//             cout<<"array size os mismatch"<<endl;
//             return;
//         }
//         for (int i = 0; i < size; i++)
//         {
//             elements[i]=arr[i];
//         }
//         cout<<"vector initialized with provided vlaue."<<endl;
//     }

//     void addscalar(float scalar){
//         cout<<"adding the element:"<<endl;
//         for (int i = 0; i < size; i++)
//         {
//             elements[i]+=scalar;
//         }
//     }

//     void multiplyscalar(float scalar){
//         cout<<"multiplying the element."<<endl;
//         for (int i = 0; i < size; i++)
//         {
//             elements[i]*=scalar;
//         }
//     }

//     void display(){
//         cout<<"(";
//         for (int i = 0; i < size; i++)
//         {
//             cout<<elements[i];
//             if (i<size-1){
//                 cout<<",";
//             }            
//         }
//         cout<<")"<<endl;
//     }

//     int getsize(){
//         return size;
//     }
// };

// class Print{
//     string studentname;
//     public:
//     Print(string n){
//         studentname = n;
//     }

//     void printname(){
//         cout<<"student name: "<<studentname;
//     }
// };


int main(){
    
    return 0;
}