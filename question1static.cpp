// #include <iostream>
// #include<cstring>
// using namespace std;
// // class Employee{
// //     int empid;
// //     char* name;
// //     float salary;

// //     public:
// //     static int count;
    
// //     Employee(){
// //         name = NULL;
// //         salary = 0;
// //         empid = 0;
// //     }

// //     void getdata(){
// //         char temp[100];

// //         cout<<"enter the id: ";
// //         cin>>empid;
// //         cin.ignore();
// //         cout<<"enter the name: ";
// //         cin.getline(temp,100);

// //         name = new char[strlen(temp)+1];
// //         strcpy(name,temp);

// //         cout<<"enter the salary of the employee: ";
// //         cin>>salary;

// //         count++;
// //     }

// //     void display(){
// //         cout<<"the id is: "<<empid<<endl;
// //         cout<<"the name is: "<<name<<endl;
// //         cout<<"the salary is: "<<salary;
// //     }


// //     bool tocheck(){
// //         return (salary>50000);
// //     }

// //     friend void highestsalary(Employee*name,int n);

// //     ~Employee(){
// //         delete [] name;
// //     }
// // };


// // int Employee::count = 0;


// // void highestsalary(Employee*emp,int n){
// //     if (n==0)
// //     {
// //         return;
// //     }

// //     int index = 0;

// //     for (int i = 0; i < n; i++)
// //     {
// //         if (emp[i].salary>emp[index].salary)
// //         {
// //             index = i;
// //         }
// //     }
    
// //     cout<<"\nthe employee with the highest salary is: "<<endl;
// //     emp[index].display();
// // }

// // int main(){
// //     int N;


// //     cout<<"enter the number of the employee: ";
// //     cin>>N;

// //     Employee *emp = new Employee[N];

// //     for (int i = 0; i < N; i++)
// //     {
// //         cout<<"enter the details of the employees: "<<endl;
// //         emp[i].getdata();
// //     }

// //     cout<<"all employee details are: "<<endl;
// //     for (int i = 0; i < N; i++)
// //     {
// //         emp[i].display();
// //     }
    
// //     highestsalary(emp,N);

// //     int high = 0;
// //     for (int i = 0; i < N; i++)
// //     {
// //         if (emp[i].tocheck()){
// //             high++;
// //         }
// //     }
    
// //     cout<<"\nemployee witht the high salary are"<<high<<endl;

// //     cout<<"total employee: "<<Employee::count<<endl;

// //     delete[]emp;

// //     return 0;
// // }

// // class Employee{
// //     int empid;
// //     char* name;
// //     float salary;

// //     public:
// //     static int count;

// //     Employee(int id=0,const char* n=" ",float sal=0.0){
// //         empid = id;
// //         name = new char[strlen(n)+1];
// //         strcpy(name,n);
// //         salary = sal;

// //         count++;
// //     }

// //     void ddiplay(){
// //         cout<<"Id is: "<<empid<<endl;
// //         cout<<"the name is: "<<name<<endl;
// //         cout<<"the salary is: "<<salary<<endl;
// //     }

// //     bool checkhighest()const{
// //         return (salary>50000);
// //     }

// //     friend void higestsalary(Employee*emp,int n);

// //     ~Employee(){
// //         delete[]name;
// //     }
// // };

// // int Employee::count = 0;

// // void higestsalary(Employee*emp,int n){
// //     if (n==0)
// //     {
// //         return;
// //     }

// //     int index = 0;

// //     for (int i = 1; i < n; i++)
// //     {
// //         if (emp[i].salary>emp[index].salary)
// //         {
// //             index = i;
// //         }
// //     }

// //     cout<<"\nthe employee with the highest salary is: "<<endl;
// //     emp[index].ddiplay();
// // }

// // int main(){
// //     int n;
// //     cout<<"enter the number of employee: "<<endl;
// //     cin>>n;

// //     Employee**emp = new Employee*[n];

// //     for (int i = 0; i < n; i++)
// //     {
// //         int id1;
// //         char name[100];
// //         int sala1;

// //         cout<<"enter the id of the employee: "<<endl;
// //         cin>>id1;
// //         cin.ignore();
// //         cout<<"enter the name of the employee: ";
// //         cin.getline(name,100);

// //         cout<<"enter the salary : "<<endl;
// //         cin>>sala1;

// //         emp[i]=new Employee(id1,name,sala1);
// //     }

// //     cout<<"information of the employees are: "<<endl;
// //     for (int i = 0; i < n; i++)
// //     {
// //         emp[i]->ddiplay();
// //     }
    
    
// // }

// // 

// // class LoanApplication{
// //     char* applicationname;
// //     int applicantId;
// //     float loanamount;
// //     int creditscore;

// //     public:

// //     friend class LoanPffocer;

// //     static int loanapplications;

// //     LoanApplication(const char* n,int id,float amount,int score){
// //         applicationname = new char[strlen(n)+1];
// //         strcpy(applicationname,n);

// //         applicantId = id;
// //         loanamount = amount;
// //         creditscore = score;

// //         loanapplications++;
// //     }

// //     void display(){
// //         cout<<"the name is: "<<applicationname<<endl;
// //         cout<<"the application id is: "<<applicantId<<endl;
// //         cout<<"the loan is: "<<loanamount<<endl;
// //         cout<<"the credit score is: "<<creditscore<<endl;
// //     }

// //     ~LoanApplication(){
// //         delete[]applicationname;
// //         cout<<"memeory releasedL "<<applicantId<<endl;
// //     }
// // };

// // int LoanApplication::loanapplications=0;

// // class LoanPffocer{
// //     public:
// //     void processloan(LoanApplication&app){
// //         double concession = 0;
// //          if(app.creditscore >= 800)
// //             concession = 0.20;
// //         else if(app.creditscore >= 700)
// //             concession = 0.10;
// //         else if(app.creditscore >= 600)
// //             concession = 0.05;
// //         else
// //             concession = 0;

// //         double reduction = app.loanamount*concession;
// //         app.loanamount-=reduction;

// //         cout<<"loan processed for: "<<app.applicationname<<endl;
// //         cout<<"the consession given is: "<<concession*100<<"%"<<endl;
// //         cout<<"updated loan is: "<<app.loanamount<<endl;
// //     }

// //     void showtotalapplication(){
// //         cout<<"the total apllications are: "<<LoanApplication::loanapplications<<endl;
// //     }
// // };

// // int main(){
// //     LoanPffocer officer;

// //     LoanApplication a1("rahul",101,500000,820);
// //     LoanApplication a2("aryan",201,800000,830);

// //     a1.display();
// //     officer.processloan(a1);

// //     a2.display();
// //     officer.processloan(a2);

// //     officer.showtotalapplication();

// //     return 0;
// // }

// // class Order{
// //     int orderid;
// //     double totalamount;
// //     bool delivered;

// //     public:

// //     Order(int id = 0,double amount = 0,bool staus = false){
// //         orderid = id;
// //         totalamount = amount;
// //         delivered = staus;
// //     }

// //     void display(){
// //         cout<<"order id is: "<<orderid<<endl;
// //         cout<<"total amount is: "<<totalamount<<endl;
// //         cout<<"delivered status: "<<delivered;
// //         if (delivered)
// //         {
// //             cout<<"delivered."<<endl;
// //         }else{
// //             cout<<"not delivered."<<endl;
// //         }
// //     }

// //     bool operator == (const Order& o){
// //         return (orderid == o.orderid);
// //     }

// //     Order operator + (const Order& o){
// //         Order temp;
// //         temp.orderid = orderid;
// //         temp.totalamount = totalamount + o.totalamount;
// //         temp.delivered = false;
// //         return false;
// //     }

// //     bool operator !(){
// //         return (!delivered);
// //     }

// //     void pay(double amount){
// //         if(amount>totalamount){
// //             cout<<"payed!!"<<endl;
// //         }else{
// //             cout<<"lacks funds!!"<<endl;
// //         }
// //     }

// //     void pay(double partial,double remaining){
// //         cout<<"partial paymeent recieved::"<<partial<<endl;
// //         totalamount = remaining;
// //         cout<<"the remaining balance is: "<<totalamount<<endl;
// //     }
// // };


// // int main(){
// //     Order O1(101,5000,false);
// //     Order o2(102,6000,true);
// //     Order o3(101,5000,false);

// //     O1.display();
// //     o2.display();
// //     o3.display();


    
// // }



// // #include <iostream>
// // using namespace std;

// // class QuizSession
// // {
// //     int numParticipants;
// //     int *scores;                 // Dynamic array
// //     static int totalSessions;    // Static member

// // public:

// //     // Constructor
// //     QuizSession(int n)
// //     {
// //         numParticipants = n;
// //         scores = new int[numParticipants];  // Dynamic memory allocation
// //         totalSessions++;                    // Increment session count
// //     }

// //     // Function to read scores
// //     void readScores()
// //     {
// //         cout << "\nEnter scores of participants:\n";
// //         for(int i = 0; i < numParticipants; i++)
// //         {
// //             cout << "Participant " << i + 1 << ": ";
// //             cin >> scores[i];
// //         }
// //     }

// //     // Function to display scores
// //     void displayScores()
// //     {
// //         cout << "\nScores of participants:\n";
// //         for(int i = 0; i < numParticipants; i++)
// //         {
// //             cout << scores[i] << " ";
// //         }
// //         cout << endl;
// //     }

// //     // Function to find highest score
// //     void highestScore()
// //     {
// //         int max = scores[0];
// //         for(int i = 1; i < numParticipants; i++)
// //         {
// //             if(scores[i] > max)
// //                 max = scores[i];
// //         }

// //         cout << "Highest Score in this session: " << max << endl;
// //     }

// //     // Static function to display total sessions
// //     static void showTotalSessions()
// //     {
// //         cout << "\nTotal Quiz Sessions Conducted: " 
// //              << totalSessions << endl;
// //     }

// //     // Destructor
// //     ~QuizSession()
// //     {
// //         delete[] scores;     // Free dynamic memory
// //         cout << "\nMemory Released for this Session.\n";
// //     }
// // };

// // // Initialize static member
// // int QuizSession::totalSessions = 0;


// // /////////////////////////////////////////////////////////

// // int main()
// // {
// //     int n;

// //     cout << "Enter number of participants for Session 1: ";
// //     cin >> n;

// //     QuizSession q1(n);
// //     q1.readScores();
// //     q1.displayScores();
// //     q1.highestScore();

// //     QuizSession::showTotalSessions();


// //     cout << "\nEnter number of participants for Session 2: ";
// //     cin >> n;

// //     QuizSession q2(n);
// //     q2.readScores();
// //     q2.displayScores();
// //     q2.highestScore();

// //     QuizSession::showTotalSessions();

// //     return 0;
// // }

// // class BankAccont{
// //     int accountno;
// //     char* holdername;
// //     float balance;
// //     static int totalAccounts;

// //     public:
// //     BankAccont(){}
// //     BankAccont(int accno,const char* n,float bal){
// //         accountno = accno;
// //         holdername = new char[strlen(n)+1];
// //         strcpy(holdername,n);
// //         balance = bal;
// //         totalAccounts++;
// //     }

// //     friend class Auditor;

// //     int gettotalaccounts(){
// //         return totalAccounts;
// //     }
// //     ~BankAccont(){
// //         delete[]holdername;
// //     }
// // };

// // int BankAccont::totalAccounts=0;

// // class Auditor{
// //     public:
    
// //      void checkLowBalance( void checkLowBalance(BankAccont* accounts, int n) {
// //         int count = 0;

// //         cout << "\nAccounts with Balance below ₹5000:\n";
// //         for (int i = 0; i < n; i++) {
// //             if (accounts[i].balance < 5000) {
// //                 cout << "Account No: " << accounts[i].accountNo << endl;
// //                 cout << "Holder Name: " << accounts[i].holderName << endl;
// //                 cout << "Balance: ₹" << accounts[i].balance << endl;
// //                 cout << "-----------------------\n";
// //                 count++;
// //             }
// //         }

// //         if (count == 0) {
// //             cout << "0\n";
// //         }
// //     }* accounts, int n) {
// //         int count = 0;

// //         cout << "\nAccounts with Balance below ₹5000:\n";
// //         for (int i = 0; i < n; i++) {
// //             if (accounts[i].balance < 5000) {
// //                 cout << "Account No: " << accounts[i].accountNo << endl;
// //                 cout << "Holder Name: " << accounts[i].holderName << endl;
// //                 cout << "Balance: ₹" << accounts[i].balance << endl;
// //                 cout << "-----------------------\n";
// //                 count++;
// //             }
// //         }

// //         if (count == 0) {
// //             cout << "0\n";
// //         }
// //     }

// // };

// // int main(){
// //     int n;
// //     cout<<"enter the number of the accounts."<<endl;
// //     cin>>n;
// //     Auditor displaying;
// //     BankAccont *obj = new BankAccont[n];
// //     int accnum;
// //     char temp[100];
// //     float bala;
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout<<"Enter details for account"<<i+1<<endl;
// //         cout<<"Enter Account number: "<<endl;
// //         cin>>accnum;
// //         cout<<"enter account name: "<<endl;
// //         cin.getline(temp,100);
// //         cin.ignore();
// //         cout<<"enter the balance: "<<endl;
// //         cin>>bala;
// //     }

    

// // }


// // class GYmMember{
// //     char* memebername;
// //     int memberid;
// //     int memebershipDuration;
// //     float membershipfee;
// //     static int registeredmembers;

// //     public:
// //     GYmMember(){
// //         memebername = nullptr;
// //     }
// //     GYmMember(const char* n,int id,int duration,float fee){
// //         memebername = new char[strlen(n)+1];
// //         strcpy(memebername,n);
// //         memberid = id;
// //         memebershipDuration = duration;
// //         membershipfee = fee;
// //         registeredmembers++;
// //     }

// //     friend class TrainerPanel;

// //     static int gettotalmember(){
// //         return registeredmembers;
// //     }
// //     ~GYmMember(){
// //         delete[]memebername;
// //     }
// // };

// // int GYmMember::registeredmembers = 0;
// // class TrainerPanel{
// //     public:
// //     void discount(GYmMember&a,int discount){
// //         float reduction = 0;
// //         reduction = (a.membershipfee*discount)/100;
// //         a.membershipfee-=reduction;
// //         cout<<"Updated Membership details: "<<endl;
// //         cout<<"member name: "<<a.memebername<<endl;
// //         cout<<"updated fees: "<<a.membershipfee<<endl;
// //     }
// //     void showmembers(){
// //         cout<<"total registered members are: "<<GYmMember::gettotalmember()<<endl;
// //     }
// // };

// // int main(){
// //     int n;
// //     cout<<"enter number of students:"<<endl;
// //     cin>>n;
// //     TrainerPanel discounting;
// //     GYmMember **member = new GYmMember*[n];
// //     char name[100];
// //     int memberid;
// //     int duration;
// //     int fees;
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout<<"member "<<i+1<<endl;
// //         cout<<"enter the name of the person"<<endl;
// //         cin>>name;
// //         cout<<"enter memebr id: "<<endl;
// //         cin>>memberid;
// //         cout<<"enter memebrship duration: "<<endl;
// //         cin>>duration;
// //         cout<<"enter member ship fees: "<<endl;
// //         cin>>fees;

// //         member[i]= new GYmMember(name,memberid,duration,fees);
// //     }

// //     for (int i = 0; i < n; i++)
// //     {
// //         discounting.discount(*member[i],10);
// //     }

// //     discounting.showmembers();
// //     for (int i = 0; i < n; i++)
// //     {
// //         delete member[i];
// //     }
    
// //     delete[] member;

// //     return 0;
// // }


// // class Time{
// //     int hours;
// //     int minutes;
// //     int seconds;

// //     public:
// //     void gettime(){
// //         cout<<"enter the time: "<<endl;
// //         cin>>hours>>minutes>>seconds;
// //     }

// //     friend Time operator +(Time &t,Time& t2);

// //     void normally(){
// //         if (seconds>60)
// //         {
// //             minutes += seconds/60;
// //             seconds = seconds%60;
// //         }
// //         if (minutes>60)
// //         {
// //             hours+= minutes/60;
// //             minutes = minutes%60;
// //         }
// //     }

// //     void disaply(){
// //         if (hours<10)
// //         {
// //             cout<<"0";
// //         }
// //         cout<<hours<<":";
// //         if (minutes<10)
// //         {
// //             cout<<"0";
// //         }
// //         cout<<minutes<<":";
// //         if (seconds<10)
// //         {
// //             cout<<"0";
// //         }
// //         cout<<seconds<<endl;
// //     } 
// // };

// // Time operator +(Time &t,Time &t2){
// //     Time temp;
// //     temp.hours = t2.hours+t.hours;
// //     temp.minutes = t2.minutes+t.minutes;
// //     temp.seconds = t2.seconds+t.seconds;
// //     temp.normally();
// //     return temp;
// // }

// // int main(){
// //     Time t1,t2,result;

// //     t1.gettime();
// //     t2.gettime();

// //     result = t1+t2;
// //     result.disaply();
// // }

// // class Item{
// //     int storesItemid;
// //     string name;
// //     int quantity;
// //     float price;

// //     public:
// //     Item(int id=0,string n = "",int qty=0,float pri=0){
// //         storesItemid = id;
// //         name = n;
// //         quantity = qty;
// //         price = pri;
// //     }
// //     int getid()const{
// //         return storesItemid;
// //     }
// //     bool operator <=(const Item&i){
// //         return (quantity<=i.quantity);
// //     }
// //     void operator -(int stockqty){
// //         if (stockqty<=quantity)
// //         {
// //             quantity-=stockqty;
// //             cout<<"the items sold are: "<<stockqty<<endl;
// //         }else{
// //             cout<<"insufficient stock!!"<<endl;
// //         }
// //     }
// //     bool operator !()const{
// //         return (quantity ==0);
// //     }

// //     void updateprice(float newprice){
// //         price = newprice;
// //     }

// //     void updateprice(float discount,bool isdiscount){
// //         if(isdiscount){
// //             price = price - (price*discount)/100;
// //         }
// //     }

// //     void display(){
// //         cout<<"item id: "<<storesItemid<<endl;
// //         cout<<"name: "<<name<<endl;
// //         cout<<"quantity: "<<quantity<<endl;
// //         cout<<"uniteprice: "<<price<<endl;
// //     }
// // };

// // int main(){
// //     int n;
// //     cout<<"enter the number of items: "<<endl;
// //     cin>>n;
// //     Item* items = new Item[n];
// //     int count = 0;
// //     for(int i=0;i<n;i++){
// //         int id,qty;
// //         float pri;
// //         string name;
// //         cout << "\nEnter Item ID: ";
// //         cin >> id;
        
// //         bool duplicate  = false;
// //         for (int j = 0; j < count; j++)
// //         {
// //             if (items[j].getid()==id)
// //             {
// //                 duplicate = true;
// //                 break;
// //             }
// //         }
// //         if (duplicate)
// //         {
// //             cout<<"skipping";
// //             continue;
// //         }
// //         cout<<"enter the name: "<<endl;
// //         cin>>name;
// //         cout << "Enter Quantity: ";
// //         cin >> qty;

// //         cout << "Enter Unit Price: ";
// //         cin >> pri;

// //         items[count++]=Item(id,name,qty,pri);
// //     }

// //     int saleid,soldqty;

// //     cout<<"\nenter item id to sell: "<<endl;
// //     cin>>saleid;

// //     cout<<"enter quantity to sell: "<<endl;
// //     cin>>soldqty;

// //     for (int i = 0; i < count; i++)
// //     {
// //         if (items[i].getid()==saleid)
// //         {
// //             items[i]-soldqty;
// //             if (!items[i])
// //         {
// //             cout<<"item is out f stock";
// //         }
// //         }
        
// //     }
    
// //     cout << "\nApplying 10% discount to all items...\n";
// //     for (int i = 0; i < count; i++) {
// //         items[i].updateprice(10, true);
// //     }

// //     // 🔹 Display Inventory
// //     cout << "\nUpdated Inventory:\n";
// //     for (int i = 0; i < count; i++) {
// //         items[i].display();
// //     }

// //     // 🔥 Deallocate Memory
// //     delete[] items;

// //     return 0;
// // }




// // class Patient{
// //     char* patientname;
// //     char* patientid;
// //     int numberofdaysadmitted;
// //     float treatmentcost;
// //     static int totalpatient;

// //     public:
// //     Patient(const char* n,const char* id,int days,float cost){
// //         patientname = new char[strlen(n)+1];
// //         strcpy(patientname,n);
// //         patientid = new char[strlen(id)+1];
// //         strcpy(patientid,id);
// //         numberofdaysadmitted = days;
// //         treatmentcost = cost;

// //         totalpatient++;
// //     }

// //     ~Patient(){
// //         delete[]patientname;
// //         delete[]patientid;
// //         totalpatient--;
// //     }

// //     friend class BillingDepartment;
// // };

// // int Patient::totalpatient = 0;

// // class BillingDepartment{
// //     public:
// //     void medicalinsurancediscount(Patient& p,float discountper){
// //         float discount = p.treatmentcost*discountper/100;
// //         p.treatmentcost-=discount;
// //     }
// //     void display(Patient& p){
// //         cout<<"patient name: "<<p.patientname<<endl;
// //         cout<<"Patient id: "<<p.patientid<<endl;
// //         cout<<"Days admitted: "<<p.numberofdaysadmitted<<endl;
// //         cout<<"treatment cost: "<<p.treatmentcost<<endl;
// //     }

// //     void totalpatientname(){
// //         cout<<"totaal patient admitted: "<<Patient::totalpatient<<endl;
// //     }

// // };
// // int main(){
// //     int n;
// //     cout<<"Enter number of patients: "<<endl;
// //     cin>>n;

// //     Patient **patient = new Patient*[n];

// //     BillingDepartment billing;

// //     for (int i = 0; i < n; i++)
// //     {
// //         char name[100],id[100];
// //         int days;
// //         float cost;

// //         cout<<"patient"<<i+1<<endl;
// //         cout<<"enter patient name: "<<endl;
// //         cin>>name;
// //         cout<<"enter patient id: "<<endl;
// //         cin>>id;
// //         cout<<"enter days admitted: "<<endl;
// //         cin>>days;
// //         cout<<"enter the treatment cost: "<<endl;
// //         cin>>cost;

// //         patient[i]=new Patient(name,id,days,cost);

// //         billing.medicalinsurancediscount(*patient[i],10);
// //     }

// //     for (int i = 0; i < n; i++)
// //     {
// //         billing.display(*patient[i]);
// //     }

// //     billing.totalpatientname();

// //     for (int i = 0; i < n; i++)
// //     {
// //         delete patient[i];
// //     }
    
// //     delete[]patient;
// //     return 0;
    
// // }


// class Student{
//     int rollnumber;
//     string name;
//     float marks;
//     string academicstatus;

//     void updatestatus(){
//         if (marks>40)
//         {
//             academicstatus = "Pass";
//         }else{
//             academicstatus = "Fail";
//         }
//     }

//     public:
//     Student(int r = 0,string n = " ",float m = 0){
//         rollnumber = r;
//         name = n;
//         marks = m;
//         updatestatus();
//     }

//     int getRollnumber()const{
//         return rollnumber;
//     }

//     bool operator>(const Student&s)const{
//         return (marks>s.marks);
//     }

//     bool operator && (const Student&s)const{
//         return (academicstatus == "Pass" && s.academicstatus == "Pass");
//     }

//     friend ostream& operator <<(ostream& out,const Student& s){
//         out<<"\nRollnumber:"<<s.rollnumber<<endl;
//         out<<"name: "<<s.name<<endl;
//         out<<"marks: "<<s.marks<<endl;
//         out<<"academic status: "<<s.academicstatus<<endl;
//         return out;
//     }

//     void updatemarks(float m){
//         marks = m;
//         updatestatus();
//     }

//     void updatemarks(float m,float grace){
//         marks = m+grace;
//         updatestatus();
//     }
// };

// int main(){
//     int n;
//     cout<<"enter number of students: "<<endl;
//     cin>>n;

//     Student *stu = new Student[n];

//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         string name;
//         int roll;
//         float marks;
//         cout<<"Enter Roll Number:"<<endl;
//         cin>>roll;

//         bool duplicate =  false;
//         for (int j = 0; j < count; j++)
//         {
//             if (stu[j].getRollnumber()==roll)
//             {
//                 duplicate = true;
//                 break;
//             }
//         }
//         if (duplicate)
//         {
//             cout<<"skipping"<<endl;
//             continue;
//         }
//         cout<<"Enter Name: "<<endl;
//         cin>>name;
//         cout<<"Enter Marks:"<<endl;
//         cin>>marks;

//         stu[i]=Student(roll,name,marks);
//     }
    
//     cout<<"\nStudent details"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<stu[i];
//     }
//      if(n >= 2) {
//         cout << "\n--- Comparison ---\n";

//         if(stu[0] > stu[1])
//             cout << "Student 1 has higher marks.\n";
//         else
//             cout << "Student 2 has higher or equal marks.\n";

//         if(stu[0] && stu[1])
//             cout << "Both students have passed.\n";
//         else
//             cout << "At least one student has failed.\n";
//     }

//     delete[]stu;
//     return 0;
// }