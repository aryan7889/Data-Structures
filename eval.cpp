#include<iostream>
#include <cstring>
using namespace std;
class Box{
    int capacity;
    public:
    Box(int cap = 50){
        capacity = cap;
    }

    int getcap(){
        return capacity;
    }
};
int main(){
    int n;
    cout<<"enter number of boxes;"<<endl;
    cin>>n;

    Box** boxes = new Box*[n];

    for(int i=0;i<n;i++){
        int choices;
        cout<<"Box: "<<i+1<<endl;
        cout<<"1.Default capacity."<<endl;
        cout<<"2.Custom capacity."<<endl;
        cout<<"enter the choice 1 or 2: "<<endl;
        cin>>choices;

        if (choices = 1)
        {
            boxes[i]= new Box();
        }else if(choices = 2){
            int cap1;
            do
            {
                cout<<"enter the capacity of the boxes."<<endl;
                cin>>cap1;
                if (cap1<=0)
                {
                    cout<<"invalid capacity.\n";
                }
            } while (cap1<=0);
            
            boxes[i]=new Box(cap1);
        }else{
            cout<<"invalid choice using the default capacity."<<endl;
            boxes[i]=new Box();
        }

        int totalcapacity = 0;
        int maximumcapacity = boxes[0]->getcap();
        double averagecapacity;
        int maxindex=0;

        for (int i = 0; i < n; i++)
        {
            int cap = boxes[i]->getcap();
            cout<<"box: "<<i+1<<"capacity: "<<cap<<endl;

            totalcapacity += cap;

            if(cap>maximumcapacity){
                maximumcapacity = cap;
                maxindex = i;
            }
        }

        averagecapacity = static_cast<double>(totalcapacity)/n; 
        
    cout << "\nTotal storage capacity: " << totalcapacity << endl;
    cout << "Average box capacity: " << averagecapacity << endl;
    cout << "Box with maximum capacity: Box " << maxindex + 1
         << " (" << maximumcapacity << ")\n";

    for(int i=0;i<n;i++){
        delete boxes[i];
    }
    delete[] boxes;  

    }
}

class Employee{
    int payrollid;
    char* employeename;

    public:
    Employee(int id,const char* name){
        payrollid = id;
        employeename = new char[strlen(name)+1];
        strcpy(employeename,name);
    }

    int getid(){
        return payrollid;
    }

    char* getname(){
        return employeename;
    }
    void display() {
        cout << "Payroll ID: " << payrollid
             << ", Name: " << employeename << endl;
    }

    
    ~Employee() {
        delete[] employeename;
    }
};
int main(){
    int n;
    cout<<"enter the number of the employee:"<<endl;
    cin>>n;

    Employee** details = new Employee*[n];

    for(int i=0;i<n;i++){
        int id;
        char empName[100];
        bool unique;

        do
        {
            unique = true;
            cout<<"enter the id: "<<i+1<<":";
            cin>>id;

            for (int j = 0; j < i; j++)
            {
                if (details[j]->getid()==id)
                {
                    cout<<"payroll id already exists!";
                    unique = false;
                    break;
                }
            }
        } while (!unique);
        cout<<"enter the employee name: ";
        cin.ignore();
        cin.getline(empName,100);

        details[i] = new Employee(id,empName);

    }

    cout<<"Emloyee registered: "<<endl;
    for(int i=0;i<n;i++){
        details[i]->display();
    }

    int searchid;
    cout<<"enter the id: "<<endl;
    cin>>searchid;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (details[i]->getid()==searchid)
        {
            cout<<"employee found:"<<endl;
            details[i]->display();
            found = true;
            break;
        }
        
    }

    if (!found)
    {
        cout<<"employee not found."<<endl;
    }

    int maxId = details[0]->getid();
    int minId = details[0]->getid();

    for (int i = 0; i < n; i++)
    {
    if (details[i]->getid()>maxId)
    {
        maxId = details[i]->getid();
    }
    if (details[i]->getid()<minId)
    {
        minId = details[i]->getid();
    }
       
}
    
    
    cout << "\nHighest Payroll ID: " << maxId << endl;
    cout << "Lowest Payroll ID: " << minId << endl;

    // Free memory
    for (int i = 0; i < n; i++) {
        delete details[i];
    }
    delete[] details;

    return 0;
}

class Sensorlog{
    int* readings;
    int count;

    public:
    Sensorlog(int n){
        count = n;
        readings = new int[count];
        cout<<"memeory is allocated for"<<count<<endl;
    }

    void acceptingreading(){
        cout<<"enter the readings:"<<endl;
        for (int i = 0; i < count; i++)
        {
            cout<<"reading of: "<<i+1<<endl;
            cin>>readings[i];
        }
    }

    void display(){
        cout<<"all the stored readings are: "<<endl;
        for(int i=0;i<count;i++){
            cout<<readings[i];
        }
        cout<<endl;
    }


    void calaculate(){
        int maxtemp = readings[0];
        int mintemp = readings[0];
        double averagetemp;
        int sum = 0;
for(int i=0;i<count;i++){
        if (readings[i]>maxtemp)
        {
            maxtemp = readings[i];
        }else if(readings[i]<mintemp){
            mintemp = readings[i];
        }
        sum += readings[i];
    }

    averagetemp = static_cast<double>(sum)/count;

    cout<<"the max temperature is: "<<maxtemp<<endl;
    cout<<"the min temperature is: "<<mintemp<<endl;
    cout<<"the average temp is : "<<averagetemp<<endl;
    }

    ~Sensorlog(){
        delete[] readings;
        cout<<"destructor called."<<endl;
    }
};
int main(){
    int n;
    cout<<"enter number of readings to take: "<<endl;
    cin>>n;

    Sensorlog* log;
    log = new Sensorlog(n);

    log->acceptingreading();
    log->display();
    log->calaculate();
    
delete log;

}


class Student{
    int Rollno;
    char* name;

    public:
    Student(int rno,const char* n){
        Rollno = rno;
        name = new char[strlen(n)+1];
        strcpy(name,n);
    }

    int getroolno(){
        return Rollno;
    }

    void display(){
        cout<<"the rollno is :"<<Rollno<<"name: "<<name<<endl;
    }

    ~Student(){
        delete[] name;
    }
};
int main(){
    int n;
    cout<<"enter the number of students: "<<endl;
    cin>>n;

    Student** students = new Student*[n];

    for(int i=0;i<n;i++){
        int rollno;
        char sname[100];
        bool unique;

        do
        {
            unique = true;
            cout<<"enter the roll number of the student: "<<endl;
            cin>>rollno;

            if (students[i]->getroolno()==rollno)
            {
                cout<<"rollno, already exist entr aa valid one."<<endl;
                unique = false;
                break;
            }
            
        } while (!unique);

        cout<<"enter the student name: "<<endl;
        cin.ignore();
        cin.getline(sname,100);
        

        students[i]= new Student(rollno,sname);
    }

    cout<<"display all students: "<<endl;
    for(int i=0;i<n;i++){
        students[i]->display();
    }

    int newroll;
    cout<<"enter the rollno. to search:"<<endl;
    cin>>newroll;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if(students[i]->getroolno()==newroll){
            cout<<"student found."<<endl;
            students[i]->display();
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout<<"the rollno. was not found."<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete students[i];
    }

    delete[] students;
    
    return 0;
}


 class StudentRecord{
    int rollno;
    char* name;
    int* marks;
    int numsubjects;
    public:
    StudentRecord (int rono,const char*n,int numsub){
        rollno = rono;
        numsubjects = numsub;
        name = new char[strlen(n)+1];
        strcpy(name,n);

        marks = new int[numsubjects];
        for (int i = 0; i < numsubjects; i++)
        {
            marks[i]={0};
        }
        

        cout<<"the records have been maintained"<<endl;
    }

    void readmarks(){

        cout<<"enter the marks for: "<<numsubjects<<"subjects"<<endl;
        for (int i = 0; i < numsubjects; i++)
        {
            cout<<"subject: "<<i+1<<endl;
            cin>>marks[i];
        }
        
    }

    void display() const{
        int total = 0;
        double percentage;
        cout<<"the anme is: "<<name<<endl;
        cout<<"the roll no is: "<<rollno<<endl;
        cout<<"the marks are: "<<endl;

        for(int i=0;i<numsubjects;i++){
            cout<<"the marks of the subject : "<<i+1<<marks[i]<<endl;
            total += marks[i];
        }

        cout<<"the total marks are: "<<total<<endl;
        percentage = static_cast<double>((numsubjects*100)/total)*100;

        cout<<"the percentage is: "<<percentage<<endl;
    }

    int gethighestmarks() const{
        if (numsubjects ==0)
        {
            return -1;
        }
        int highest = marks[0];
        for (int i = 0; i < numsubjects; i++)
        {
            if (marks[i]>highest)
            {
                highest = marks[i];
            }
        }
        return highest;
    }
    ~StudentRecord(){
        delete[] name;
        delete[] marks;

        cout<<"the destructor is called;"<<endl;
    }
};

int main(){
    int rollnumber;
    char name[100];
    int subjectsnumber;

    cout<<"roll number: "<<endl;
    cin>>rollnumber;

    cout<<"the name is: "<<name<<endl;
    cin.ignore();
    cin.getline(name,100);

    cout<<"the number of the subjects are: "<<endl;
    cin>>subjectsnumber;


    StudentRecord* details = new StudentRecord(rollnumber,name,subjectsnumber);

    int choice;
    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Enter marks\n";
        cout << "2. Display complete details\n";
        cout << "3. Show highest mark\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            details->readmarks();
            break;

        case 2:
            details->display();
            break;

        case 3: {
            int highest = details->gethighestmarks();
            if (highest == -1)
                cout << "No subjects available.\n";
            else
                cout << "Highest Mark: " << highest << endl;
            break;
        }

        case 4:
            delete details;   // destructor called
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}

class HeartRateLog{
    int* hearthratevalues;
    int values;
    
    public:

    HeartRateLog(int val){
        values = val;
        hearthratevalues = new int[values];
    }
    void setrates(){
        cout<<"enter the valus of the hearth beat"<<endl;
        for (int i = 0; i < values; i++)
        {
            cout<<"hearth beat of: "<<i+1<<"is: ";
            cin>>hearthratevalues[i];
        } 
    }

    void displayrates(){
        cout<<"the rates are : "<<endl;
        for (int i = 0; i < values; i++)
        {
            cout<<"the rates of :"<<i+1<<" is : ";
            cout<<hearthratevalues[i]<<endl;
        }
    }

    void stats(){
        int highest = hearthratevalues[0];
        int lowest = hearthratevalues[0];
        double average;
        int sum = 0;

        for (int i = 0; i < values; i++)
        {
            if(highest<hearthratevalues[i]){
                highest = hearthratevalues[i];
            }else if(lowest>hearthratevalues[i]){
                lowest = hearthratevalues[i];
            }

            sum += hearthratevalues[i];
        }
        
        cout<<"the highest one is: "<<highest<<endl;
        cout<<"the lowest one is: "<<lowest<<endl;

        average = static_cast<double>(sum)/values;

        cout<<"the average is: "<<average<<endl;
    }

    ~HeartRateLog(){
        delete[]hearthratevalues;
        cout<<"memory released successfully."<<endl;
    }
};

int main(){
    int readings;
    cout<<"enter the reading to store: "<<endl;
    cin>>readings;

    HeartRateLog* person;

    person = new HeartRateLog(readings);

    person->setrates();
    person->displayrates();
    person->stats();

    delete person;

    return 0;
}

class MovieCollection{
    struct Movie{
        char* title;
        int year;
        float rating;
    };

    Movie* movies;
    int capacity;
    int count;

    public:
    MovieCollection(int cap){
        capacity = cap;
        count = 0;
        movies = new Movie[capacity];
    }

    bool addMovie(const char* t,int y,float r){
        if(count = capacity){
            cout<<"no space found"<<endl;
            return false;
        }

        movies[count].title = new char[strlen(t)+1];
        cin.ignore();
        strcpy(movies[count].title,t);
        movies[count].year = y;
        movies[count].rating = r;

        count++;
        cout<<"movie added successfully";
        return true;
    }

    void dispplay() const{
        if(count == 0){
            cout<<"no movies."<<endl;
            return;
        }


        for (int i = 0; i < count; i++)
        {
            cout<<i+1<<"."<<movies[i].title<<"("<<movies[i].year<<")"<<movies[i].rating<<endl;
        }
    }

    void showbest() const{
        if (count == 0)
        {
            cout<<"no movies to display."<<endl;
            return;
        }

        int bestindex = 0;
        for (int i = 0; i < count; i++)
        {
            if (movies[i].rating>movies[bestindex].rating)
            {
                bestindex = i;
            }
        }
        
        cout<<movies[bestindex].title<<" ("
            <<movies[bestindex].year<<") -Rating: "
            <<movies[bestindex].rating<<endl;
    }
};

int main(){
int maxmovie;
cout<<"enter maximum number movies: ";
cin>>maxmovie;

MovieCollection* mc = new MovieCollection(maxmovie);

int choice;
do
{
    cout << "\n--- MENU ---\n";
        cout << "1. Add a movie\n";
        cout << "2. Show all movies\n";
        cout << "3. Show best rated movie\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            char title[100];
            int year;
            float rating;

            cout<<"enter movie title: ";
            cin.ignore();
            cin.getline(title,100);

            cout<<"enter the year";
            cin>>year;

            cout<<"enter the rating: ";
            cin>>rating;

            mc->addMovie(title,year,rating);
        }else if (choice = 2)
        {
            mc->dispplay();
        }else if (choice = 3)
        {
            mc->showbest();
        }    
} while (choice != 4);

    delete mc;

    return 0;
}

class MovieCollection{
    struct Movie
    {
        char* title;
        int year;
        float rating;
    };

    Movie* movies;
    int capacity;
    int count;

    public:
    MovieCollection(int cap){
        capacity = cap;
        count = 0;
        movies - new Movie[capacity];
    }

    MovieCollection(const MovieCollection& obj){
        capacity = obj.capacity;
        count = obj.count;
        movies = new Movie[capacity];

        for (int i = 0; i < count; i++)
        {
            movies[i].year = obj.movies[i].year;
            movies[i].rating = obj.movies[i].rating;

            movies[i].title = new char[strlen(obj.movies[i].title)+1];
            strcpy(movies[i].title,obj.movies[i].title);
        } 
    }
    
    bool addmovie(const char* title,int year,float rating){
        if(count == capacity){
            return false;
        }

        movies[count].year = year;
        movies[count].rating = rating;

        movies[count].title = new char[strlen(title)+1];
        strcpy(movies[count].title,title);
        count++;
        return true;
    }

    void showall() const{
        if(count == 0){
            cout<<"no movies added.";
            return;
        }

        for (int i = 0; i < count; i++)
        {
            cout<<i+1<<"."<<movies[i].title<<"  "<<movies[i].year<<"  "<<movies[i].rating<<endl;
        }
    }

    void showbest() const{
        if (count == 0)
        {
            cout<<"no movies to show.";
            return;
        }

        int index = 0;
        for(int i=0;i<count;i++){
            if (movies[i].rating>movies[index].rating)
            {
                index = i;
            }

        cout<<"the best movie is: "<<movies[i].title<<" "<<movies[i].year<<" "<<movies[i].rating<<endl;
        }
    }

    ~MovieCollection(){
        for(int i = 0;i<count;i++){
        delete[]movies[i].title;
        }
        delete[]movies;
    }
};


