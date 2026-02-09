// Name :- Sujal R. Chaudhari
// PRN :- 202401110026
// Title :- Polymorphism

#include <iostream>
using namespace std;

class College {
public:
    virtual void displayInfo() {
        cout << "Displaying general college information" << endl;
    }
};

class Department : public College {
    string deptName;
public:
    Department(string name) {
        deptName = name;
    }
    void displayInfo() override{
        cout << "Department Name: " << deptName << endl;
    }
};

class Student : public College {
    string studentName;
    int rollNo;
public:
    Student(string name, int roll) {
        studentName = name;
        rollNo = roll;
    }
    void displayInfo() override {
        cout << "Student Name: " << studentName << ", Roll No: " << rollNo << endl;
    }
};

int main() {
    College* c;     

    Department d("Computer Engineering(AIML)");
    Student s("Sujal Chaudhari", 45);


    c = &d;        
    c->displayInfo();

    c = &s;         
    c->displayInfo();

    return 0;
}


#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {   // virtual function
        cout << "Display from Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {  // overriding base function
        cout << "Display from Derived class" << endl;
    }
};

int main() {
    Base* b;          // base class pointer
    Derived d;

    b = &d;           // point base pointer to derived object
    b->display();     // calls Derived's version (runtime polymorphism)

    //derived class ka 
    //without virtual base class ka  
    return 0;
}



/*
================== OUTPUT :-   ==================

PS C:\Study\SY\Academics> cd "c:\Study\SY\Academics\OPPS C++\" ; if ($?) { g++ Assignment7.cpp -o Assignment7 } ; if ($?) { .\Assignment7 }
Department Name: Computer Engineering(AIML)
Student Name: Sujal Chaudhari, Roll No: 45
PS C:\Study\SY\Academics\OPPS C++> 

*/