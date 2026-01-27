#include<iostream>
#include<string>
using namespace std;
// class Student;
// class Report{
//     public:
//     void printreport(Student&obj1);
// };
// class Student{
//     private:
//     string name;
//     protected:
//     int marks;

//     public:
//     Student(string n,int m){
//         name = n;
//         marks = m;
//     }

//     friend void Report::printreport(Student&obj1);
// };

// void Report::printreport(Student &obj1){
//     cout<<"name"<<obj1.name<<endl;
//     cout<<"marks"<<obj1.marks<<endl;
// }
// class Car;
// class Mechanic{
//     public:
//     void service(Car&c1);
// };
// class Car{
//     int engineHealth;
//     protected:
//     int fuellevel;
//     public:
//     Car(int enghea,int fuellvl){
//         engineHealth = enghea;
//         fuellevel = fuellvl;
//     }

//     friend void Mechanic::service(Car&c1);
// };
// void Mechanic :: service(Car&c1){
//     cout << "Engine Health: " <<c1.engineHealth << endl;
//     cout << "Fuel Level   : " <<c1.fuellevel<< endl;
// }
// class Sports;
// class Result;
// class Student{
//     private: 
//     int academicsMarks;
//     public:
//     Student(int a){
//         academicsMarks = a;
//     }
//     friend void displayfunction(Sports &s1,Result &r,Student&st1);
// };

// class Sports{
//     private:
//     int sportsmraks;
//     public:
//     Sports(int s){
//         sportsmraks = s;
//     }

//     friend void displayfunction(Sports &s1,Result &r,Student&st1);
// };

// class Result{
//     private:
//     int extramarks;
//     public:
//     Result(int r){
//         extramarks =r;
//     }

//     friend void displayfunction(Sports &s1,Result &r,Student&st1);
// };

// void displayfunction(Sports &s1,Result &r,Student&st1){
//      cout << "Total Score = "
//          << s1.sportsmraks + r.extramarks + st1.academicsMarks << endl;
// }

// class Triangle;
// class Circle;

// class Recatngle{
//     int length,breadth;

//     public:
//     Recatngle(int l,int b){
//         length = l;
//         breadth = b;
//     }

//     friend void largestArea(Triangle& t,Circle& c,Recatngle& r);    
// };

// class Triangle{
//     int base,heigth;

//     public:
//     Triangle(int b,int h){
//         base = b;
//         heigth = h;
//     }

//     friend void largestArea(Triangle& t,Circle& c,Recatngle& r);
// };

// class Circle{
//     private:
//     int radius;
//     public:
//     Circle(int r){
//         radius = r;
//     }
//     friend void largestArea(Triangle& t,Circle& c,Recatngle& r);
// };

// void largestArea(Triangle& t,Circle& c,Recatngle& r){
//     float areat = 1/2*t.base*t.heigth;
//     float areac = 3.14*c.radius*c.radius;
//     float arear = r.breadth*r.length;

//     cout << "Rectangle Area = " << areat << endl;
//     cout << "Triangle Area  = " << areac << endl;
//     cout << "Circle Area    = " << arear << endl;

//     if(arear > areac && arear > areat)
//         cout << "Largest = Rectangle\n";
//     else if(areat > areac)
//         cout << "Largest = Triangle\n";
//     else
//         cout << "Largest = Circle\n";

// }
// class B;
// class A{
//     int a;
//     public:
//     A(int a1):a(a1){}
//     friend void swap(A&no1,B&no2);

// };
// class B{
//     int b;
//     public:
//     B(int b1):b(b1){}
//     friend void swap(A&no1,B&no2);
// };

// void swap(A&no1,B&no2){
//     int temp = no1.a;
//     no1.a = no2.b;
//     no2.b = temp;
//     cout<<"A: "<<no1.a<<endl;
//     cout<<"B: "<<no2.b<<endl;
// }

// class Complex{
//     int real;
//     int imaginary;

//     public:
//     Complex(int re,int img):real(re),imaginary(img){}
//     friend void addcomplex(Complex&C1, Complex&C2);
// };

// void addcomplex(Complex&C1, Complex&C2){
//     int addreal = C1.real+C2.real;
//     int addimg = C1.imaginary+C2.imaginary;
// }
// class Product2;
// class Product1{
//     int price1;
//     public:
//     Product1(int pro1):price1(pro1){}
//     friend void discount(Product1&P1, Product2&P2);
// };
// class Product2{
//     int price2;
//     public:
//     Product2(int pro2):price2(pro2){}
//     friend void discount(Product1&P1, Product2&P2);
// };
// void discount(Product1&P1, Product2&P2){
//     int totalprice = (10/100)*P1.price1+(10/100)*P2.price2;
//     cout<<totalprice;
// }

class Doctor;
class Patient{
    private: string disease;
    int age;

    public:
        Patient(string d,int a):disease(d),age(a){}

        friend class Doctor;
};

class Doctor{
    public:
    void show(Patient p){
        cout<<p.disease<<" age "<<p.age;
    }
};
int main(){
    // Student S1{"Ary",20};
    // Report R1;
    // R1.printreport(S1);
    // Student S1(80);
    // Sports s2(15);
    // Result s3(5);
    // displayfunction(s2,s3,S1);

    // Recatngle r(10,5);
    // Triangle t(6,4);
    // Circle c(3);

    // largestArea(t,c,r);
    // A no1(10);
    // B no2(20);
    // swap(no1,no2);
    // return 0;
}
