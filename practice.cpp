// // // // // // // // #include<bits/stdc++.h>
// // // // // // // // using namespace std;
// // // // // // // // class Task{
// // // // // // // //     public:
// // // // // // // //     string name;
// // // // // // // //     int duration;
// // // // // // // // };
// // // // // // // // void stimulateCPU(queue<Task>q,int t){
// // // // // // // //     while(!q.empty()){
// // // // // // // //         Task current=q.front();
// // // // // // // //         q.pop();
// // // // // // // //         if(current.duration>t){
// // // // // // // //             current.duration-=t;
// // // // // // // //             q.push(current );

// // // // // // // //         }else{
// // // // // // // //             cout<<current.name<<"completed"<<endl;
            
// // // // // // // //         }
// // // // // // // //     }

// // // // // // // // }
// // // // // // // // int main(){
// // // // // // // //     int n,t;
// // // // // // // //     cout<<"Enter no of tasks"<<endl;
// // // // // // // //     cin>>n;
// // // // // // // //     queue<Task>q;
// // // // // // // //     for(int i=0;i<n;i++){
// // // // // // // //         Task temp;
// // // // // // // //         cout<<"name"<<endl;
// // // // // // // //         cin>>temp.name;
// // // // // // // //         cout<<"duration"<<endl;
// // // // // // // //            cin>>temp.duration;

// // // // // // // //         q.push(temp);

// // // // // // // //     }
// // // // // // // //     cout<<"enter fixed time slice"<<endl;
// // // // // // // //     cin>>t;
// // // // // // // //     stimulateCPU(q,t);


// // // // // // // // }
// // // // // // // #include <iostream>
// // // // // // // #include <queue>
// // // // // // // using namespace std;

// // // // // // // int main() {
// // // // // // //     queue<int> q;

// // // // // // //     // 1. push() — add element at rear
// // // // // // //     q.push(10);
// // // // // // //     q.push(20);
// // // // // // //     q.push(30);

// // // // // // //     // 2. front() — first element
// // // // // // //     cout << "Front element: " << q.front() << endl;

// // // // // // //     // 3. back() — last element
// // // // // // //     cout << "Back element: " << q.back() << endl;

// // // // // // //     // 4. pop() — removes front element
// // // // // // //     q.pop();
// // // // // // //     cout << "After pop, new front: " << q.front() << endl;

// // // // // // //     // 5. size() — number of elements
// // // // // // //     cout << "Size of queue: " << q.size() << endl;

// // // // // // //     // 6. empty() — check if queue is empty
// // // // // // //     cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

// // // // // // //     // 7. emplace() — construct element in-place
// // // // // // //     q.emplace(40);
// // // // // // //     cout << "After emplace, back: " << q.back() << endl;

// // // // // // //     // 8. swap() — swap queues
// // // // // // //     queue<int> q2;
// // // // // // //     q2.push(100);
// // // // // // //     q2.push(200);

// // // // // // //     q.swap(q2);
// // // // // // //     cout << "After swap, new front: " << q.front() << endl;

// // // // // // //     // Display all queue elements (copying queue)
// // // // // // //     cout << "Elements in queue: ";
// // // // // // //     while (!q.empty()) {
// // // // // // //         cout << q.front() << " ";
// // // // // // //         q.pop();
// // // // // // //     }

// // // // // // //     return 0;
// // // // // // // }

// // // // // // // #include <iostream>
// // // // // // // #include <stack>
// // // // // // // using namespace std;

// // // // // // // int main() {
// // // // // // //     stack<int> st;

// // // // // // //     // 1. push() — add elements
// // // // // // //     st.push(10);
// // // // // // //     st.push(20);
// // // // // // //     st.push(30);

// // // // // // //     // 2. top() — access top element
// // // // // // //     cout << "Top element: " << st.top() << endl;

// // // // // // //     // 3. pop() — remove top element
// // // // // // //     st.pop();
// // // // // // //     cout << "After pop, top: " << st.top() << endl;

// // // // // // //     // 4. size() — number of elements
// // // // // // //     cout << "Size of stack: " << st.size() << endl;

// // // // // // //     // 5. empty() — check if stack is empty
// // // // // // //     cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl;

// // // // // // //     // 6. emplace() — construct element in-place
// // // // // // //     st.emplace(40);  // same as push but more efficient
// // // // // // //     cout << "After emplace(), top: " << st.top() << endl;

// // // // // // //     // 7. swap() — swap two stacks
// // // // // // //     stack<int> st2;
// // // // // // //     st2.push(100);
// // // // // // //     st2.push(200);

// // // // // // //     st.swap(st2);
// // // // // // //     cout << "After swap, new top: " << st.top() << endl;

// // // // // // //     // Display all stack elements (copying stack)
// // // // // // //     cout << "Elements in stack: ";
// // // // // // //     while (!st.empty()) {
// // // // // // //         cout << st.top() << " ";
// // // // // // //         st.pop();
// // // // // // //     }

// // // // // // //     return 0;
// // // // // // // }
// // // // // // #include<iostream>
// // // // // // using namespace std;
// // // // // // class BankAccount{
// // // // // //     public:
// // // // // //     double balance;
// // // // // //     BankAccount( double val){
// // // // // //         balance=val;
        
// // // // // //     }
// // // // // //     virtual double calculateInterest()=0;
// // // // // //     double operator+(BankAccount& b){
// // // // // //         return this->balance+b.balance;
// // // // // //         }
// // // // // //         double getBalance(){
// // // // // //                 return balance;
// // // // // //         }
// // // // // // };
// // // // // // class Savings:public BankAccount{
// // // // // //     public:
// // // // // //     Savings(double bal):BankAccount(bal){}
// // // // // //     double calculateInterest(){
// // // // // //         double interest=balance*0.04;
// // // // // //             if(balance>10000){
// // // // // //         interest+=balance*0.01;
   
// // // // // //     }  return interest;   }
// // // // // // };
// // // // // // class Checking:public BankAccount{
// // // // // //     public:
// // // // // //     Checking(double bal):BankAccount(bal){}
// // // // // //     double calculateInterest(){
// // // // // //         double interest=balance*0.02;
// // // // // //         interest-=5;
// // // // // //          return interest;
// // // // // //     }
   
// // // // // // };
// // // // // // class BusinessAcoount:public BankAccount{
// // // // // //     public:
// // // // // //     BusinessAcoount(double bal):BankAccount(bal){}
// // // // // //     double calculateInterest(){
// // // // // //         double interest=balance*0.05;
// // // // // //         if(balance>50000){
// // // // // //             interest+=balance*0.02;
// // // // // //             }
// // // // // //                return interest; 
// // // // // //     }
// // // // // // };
// // // // // // int main(){
// // // // // //     BankAccount* acc1=new Savings(15000);
// // // // // //     cout<<acc1->calculateInterest()<<endl;

// // // // // //     BankAccount* acc2=new Savings(15000);
// // // // // //     cout<<acc2->calculateInterest()<<endl;
// // // // // // }



// // // // // // exception handling:

// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;

// // // // // class Student{
// // // // //     private:
// // // // //     int rollno;
// // // // //     vector<int>marks;

// // // // //     public:
// // // // //     Student(int r,int totalSubjects){
// // // // //         rollno = r;
// // // // //         marks.resize(totalSubjects,-1);

// // // // //     }


// // // // //     void inputMarks(){
// // // // //         cout<<"Enter the marks for the roll no:"<<rollno<<endl;

// // // // //         for (int i = 0; i < marks.size(); i++)
// // // // //         {
// // // // //             cout<<"Subjects: "<<i+1<<" : "<<endl;
// // // // //             cin>>marks[i];

// // // // //             if(marks[i]<0||marks[i]>100){
// // // // //                 throw invalid_argument("invalid input.0");
// // // // //             }
// // // // //         }
        
// // // // //     }


// // // // //     double calculateAverage(){
// // // // //         for(auto m: marks){
// // // // //             if(m==-1){
// // // // //                 throw logic_error("the marks cant be empty.");
// // // // //             }
// // // // //         }

// // // // //         double sum = 0;

// // // // //         for(auto m: marks){
// // // // //             sum+=m;
// // // // //         }

// // // // //         return sum/marks.size();
// // // // //     }

// // // // //     void computeResults(){
// // // // //         try{
// // // // //             double avg = calculateAverage();
// // // // //             cout<<"Average Marks:"<<avg<<endl;

// // // // //             if(avg<40){
// // // // //                 throw runtime_error("Failed Average is below passing marks.");
// // // // //             }

// // // // //             cout<<"Results Passed."<<endl;
// // // // //         }catch(const runtime_error& e){
// // // // //             cout<<e.what()<<endl;
// // // // //             throw;
// // // // //         }
// // // // //     }
// // // // // };

// // // // // int main(){
// // // // //     int roll,subjects;

// // // // //     cout<<"Enter roll number: ";
// // // // //     cin>>roll;

// // // // //     cout<<"Enter total number of: ";
// // // // //     cin>>subjects;

// // // // //     Student s(roll,subjects);

// // // // //     try{
// // // // //         s.inputMarks();
// // // // //         s.computeResults();
// // // // //     }catch(const invalid_argument& e){
// // // // //         cout<<"caught in main. "<<e.what()<<endl;
// // // // //     }
// // // // //     catch(const logic_error& e){
// // // // //         cout<<"caught in main: "<<e.what()<<endl;
// // // // //     }
// // // // //     catch(const runtime_error& e){
// // // // //         cout<<"Caught in main(Final Handler)"<<e.what()<<endl;
// // // // //     }
    
// // // // //     cout<<"Program End."<<endl;
// // // // //     return 0;
// // // // // }

// // // // #include<bits/stdc++.h>
// // // // using namespace std;

// // // // class Order{
// // // //     protected:
// // // //     double amount;

// // // //     public:
// // // //     Order(double amt){
// // // //         amount = amt;
// // // //     }
// // // //     virtual ~Order(){}

// // // //     virtual void processpayment()=0;

// // // //     void placeOrder(){
// // // //         try{
// // // //             processpayment();
// // // //             cout<<"Order Placed Successfully."<<endl;
// // // //         }catch(const invalid_argument& e){
// // // //             cout<<"Payment error(caugth in PlaceOrder)"<<e.what()<<endl;
// // // //             throw;
// // // //         }
// // // //         catch(const logic_error& e){
// // // //             cout<<"order elated logic error."<<e.what()<<endl;
// // // //             throw;
// // // //         }
// // // //         catch(const runtime_error& e){
// // // //             cout<<"Runtime order issue"<<e.what()<<endl;
// // // //             throw;
// // // //         }
// // // //         catch(const exception& e){
// // // //             cout<<"Genral Error Ocured."<<e.what()<<endl;
// // // //             throw;
// // // //         }
// // // //     }
// // // // };

// // // // class PhysicalOrder:public Order{
// // // //     private:
// // // //     int stock;

// // // //     public:
// // // //     PhysicalOrder(double amt,int stk):Order(amt){
// // // //         stock = stk;
// // // //     }

// // // //     void processpayment()override{
// // // //         try{
// // // //             if(amount<=0){
// // // //                 throw invalid_argument("Payment failed.");
// // // //             }

// // // //             if(stock<=0){
// // // //                 throw logic_error("Stock unavailable for physical order.");
// // // //             }

// // // //             cout<<"Processing Physical Order"<<endl;
// // // //             cout<<"payment successfull"<<endl;
// // // //         }catch(const exception& e){
// // // //             cout<<"error inside the class physical"<<e.what()<<endl;
// // // //             throw;
// // // //         }
// // // //     }
// // // // };

// // // // class DigitalOrder: public Order{
// // // //     private:
// // // //     int downLoadLimit;

// // // //     public:
// // // //     DigitalOrder(double amt,int limit):Order(amt),downLoadLimit(limit){}

// // // //     void processpayment()override{
// // // //         try{
// // // //             if(amount<=0){
// // // //                 throw invalid_argument("Payment Failed");
// // // //             }

// // // //             if(downLoadLimit<0){
// // // //                 throw runtime_error("downlimit error reached");
// // // //             }

// // // //             cout<<"processing digital order."<<endl;
// // // //             cout<<"payment successfull download available"<<endl;

// // // //         }catch(const exception& e){
// // // //             cout<<"partial handling inside digital order"<<endl;
// // // //             throw;
// // // //         }
// // // //     }
// // // // };

// // // // int main(){
// // // //     cout<<"testing the physical order."<<endl;
// // // //     try{
// // // //         PhysicalOrder p1(500,0);
// // // //         p1.placeOrder();
// // // //     }catch(const exception& e){
// // // //         cout<<"caught in main"<<e.what()<<endl;
// // // //     }

// // // //     cout<<"testing the digital order"<<endl;
// // // //     try{
// // // //         DigitalOrder d1(300,0);
// // // //         d1.placeOrder();
// // // //     }catch(const exception& e){
// // // //         cout<<"caught in main"<<e.what()<<endl;
// // // //         throw;
// // // //     }
// // // //     return 0;
// // // // }


// // // #include <iostream>
// // // #include <stdexcept>
// // // #include <string>
// // // using namespace std;

// // // // ----------------------
// // // // Base Order Class
// // // // ----------------------
// // // class Order {
// // // protected:
// // //     double amount;

// // // public:
// // //     Order(double amt) : amount(amt) {}
// // //     virtual ~Order() {}

// // //     virtual void processPayment() = 0;

// // //     // Wrapper to catch & rethrow exceptions
// // //     void placeOrder() {
// // //         try {
// // //             processPayment();
// // //             cout << "Order processed successfully.\n";
// // //         }
// // //         catch (const invalid_argument &e) {
// // //             cout << "Payment error (caught in placeOrder): " << e.what() << endl;
// // //             throw;
// // //         }
// // //         catch (const logic_error &e) {
// // //             cout << "Order-related logic error: " << e.what() << endl;
// // //             throw;
// // //         }
// // //         catch (const runtime_error &e) {
// // //             cout << "Runtime order issue: " << e.what() << endl;
// // //             throw;
// // //         }
// // //         catch (const exception &e) {
// // //             cout << "General error: " << e.what() << endl;
// // //             throw;
// // //         }
// // //     }
// // // };

// // // // ----------------------
// // // // Physical Order
// // // // ----------------------
// // // class PhysicalOrder : public Order {
// // // private:
// // //     int stock;

// // // public:
// // //     PhysicalOrder(double amt, int s) : Order(amt), stock(s) {}

// // //     void processPayment() override {
// // //         try {
// // //             if (amount <= 0)
// // //                 throw invalid_argument("Payment failed: Invalid amount.");

// // //             if (stock <= 0)
// // //                 throw logic_error("Stock unavailable for Physical Order.");

// // //             cout << "Processing Physical Order payment...\n";
// // //             cout << "Payment successful & stock updated.\n";
// // //         }
// // //         catch (const exception &e) {
// // //             cout << "Partial handling inside PhysicalOrder::processPayment: "
// // //                  << e.what() << endl;
// // //             throw;   // rethrow to placeOrder()
// // //         }
// // //     }
// // // };

// // // // ----------------------
// // // // Digital Order
// // // // ----------------------
// // // class DigitalOrder : public Order {
// // // private:
// // //     int downloadLimit;

// // // public:
// // //     DigitalOrder(double amt, int limit) : Order(amt), downloadLimit(limit) {}

// // //     void processPayment() override {
// // //         try {
// // //             if (amount <= 0)
// // //                 throw invalid_argument("Payment failed: Invalid amount.");

// // //             if (downloadLimit <= 0)
// // //                 throw runtime_error("Download limit reached for Digital Order.");

// // //             cout << "Processing Digital Order payment...\n";
// // //             cout << "Payment successful, download available.\n";
// // //         }
// // //         catch (const exception &e) {
// // //             cout << "Partial handling inside DigitalOrder::processPayment: "
// // //                  << e.what() << endl;
// // //             throw;   // rethrow to placeOrder()
// // //         }
// // //     }
// // // };

// // // // ----------------------
// // // //           MAIN
// // // // ----------------------
// // // int main() {

// // //     cout << "---- TESTING PHYSICAL ORDER (ERROR) ----\n";
// // //     try {
// // //         PhysicalOrder p1(500, 0);  // stock unavailable
// // //         p1.placeOrder();
// // //     }
// // //     catch (const exception &e) {
// // //         cout << "Caught in MAIN: " << e.what() << endl << endl;
// // //     }

// // //     cout << "---- TESTING DIGITAL ORDER (ERROR) ----\n";
// // //     try {
// // //         DigitalOrder d1(300, 0);  // download limit 0
// // //         d1.placeOrder();
// // //     }
// // //     catch (const exception &e) {
// // //         cout << "Caught in MAIN: " << e.what() << endl << endl;
// // //     }

// // //     cout << "---- SUCCESS CASE ----\n";
// // //     try {
// // //         PhysicalOrder p2(1000, 10);
// // //         p2.placeOrder();
// // //     }
// // //     catch (...) {}

// // //     return 0;
// // // }

// // #include<bits/stdc++.h>
// // using namespace std;

// // template<typename T1,typename T2>
// // class Pair{
// //     private:
// //     T1 first;
// //     T2 second;

// //     public:
// //     Pair(int f,int s):first(f),second(s){}

// //     T1 getFirst()const{
// //         return first;
// //     }

// //     T2 getSecond()const{
// //         return second;
// //     }


// //     void swap(){
// //         if(first==second){
// //             throw invalid_argument("the two values are the same!!");
// //         }

// //         if constexpr(is_same<T1,T2>::value){
// //             throw invalid_argument("both the arguments have the same error.!!");
// //         }


// //         T1 temp = first;
// //         first = (T1)second;
// //         second = (T2)temp;
// //     }

// //     bool operator ==(const pair<T1,T2>& p){
// //         return (first == p.first && second == p.second);
// //     }

// //     friend void compare(const Pair& p1,const Pair& p2){
// //         double val1 = (double)p1.first+(double)p1.second;
// //         double val2 = (double)p2.first+(double)p2.second;

// //         cout<<"comparing the pair"<<endl;
// //         if(val1>val2){
// //             cout<<"pair 1 is greater then the pair 2."<<endl;
// //         }else if(val2>val1){
// //             cout<<"pair 2 is greater then 1."<<endl;
// //         }else{
// //             cout<<"both aree equal."<<endl;
// //         }
// //     }


// //     friend ostream& operator <<(ostream& out,const Pair<T1,T2>& p){
// //         out<<"("<<p.first<<" , "<<p.second<<")";
// //         return out;
// //     }
// // };

// // int main(){
// //     try {
// //         Pair<int, double> p1(10, 20.5);
// //         Pair<int, int> p2(5, 5);

// //         cout << "Pair 1: " << p1 << endl;

        
// //         p1.swap();
// //         cout << "After swapping p1: " << p1 << endl;

        
// //         p2.swap();
// //     }
// //     catch (exception& e) {
// //         cout << "Error: " << e.what() << endl;
// //     }

// //     Pair<int, double> a(10, 15.5);
// //     Pair<int, double> b(20, 4.5);

// //     cout << "\nComparing a and b:\n";
// //     compare(a, b);

// //     return 0;
// // }

// // #include<bits/stdc++.h>
// // using namespace std;

// // template <class T>
// // class Stack


// #include<bits/stdc++.h>
// using namespace std;

// template<typename T>
// class Matrix{
//     int rows;
//     int columns;
//     vector<vector<T>>data;

//     public:
//     Matrix(int r,int c):rows(r),columns(c),data(r,vector<T>(c)){}

//     void setElements(int r,int c,T val){
//         if(r<0||r>=rows||c<0||c>=columns){
//             throw out_of_range("index out of range.");
//         }
//         data[r][c]=val;
//     }

//     T getElemnts(int r,int c)const{
//         if(r<0||r>=rows||c<0||c>=columns){
//             throw out_of_range("index out of range.");
//         }
//         return data[r][c];
//     }

//     Matrix operator+(const Matrix& m){
//         if(rows!=m.rows||columns!=m.columns){
//             throw out_of_range("the row and colm are not equL");
//         }

//         Matrix result(rows,columns);

//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < columns; j++)
//             {
//                 result.data[i][j]=data[i][j]+m.data[i][j];
//             }
//         }
//         return result;
//     }


//     Matrix operator*(const Matrix& m){
//         if(columns!=m.rows){
//             throw out_of_range("the row and colm are not equL");
//         }

//         Matrix result(rows,m.columns);

//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < m.columns; j++)
//             {
//                 result.data[i][j]=T();
//                 for (int k = 0; k < columns; k++)
//                 {
//                     result.data[i][j]+=data[i][k]*m.data[k][j];
//                 } 
//             }
//         }
//         return result;
//     }

//     friend void display(const Matrix<T>& m){
//          for (int i = 0; i < m.rows; i++) {
//             for (int j = 0; j < m.cols; j++) {
//                 cout << m.data[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
    
// };

// int main(){
//     try{

//     }
// }


#include<bits/stdc++.h>
using namespace std;

class BankAccount{
    string accountNumber;
    string name;
    double balance;

    public:
    BankAccount(string accNo=" ",string n= " ",double bal=0.00){
        accountNumber=accNo;
        name=n;
        balance = bal;
    }

    string getAccountNumber()const{
        return accountNumber;
    }

    BankAccount operator +(const BankAccount& b){
        return BankAccount(
            accountNumber + "&" + b.accountNumber,
            name + " & "+ b.name,
            balance + b.balance
        );
    }

    friend ostream& operator<<(ostream& out,const BankAccount& b){
        out<<b.accountNumber<<endl;
        out<<b.balance<<endl;
        out<<b.name<<endl;
        return out;
    }
};


BankAccount findAccount(const vector<BankAccount>& arr,string accNo){
    
}