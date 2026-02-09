// Name: Sujal Chaudhari
// PRN: 202401110026



/*
********Type Casting :-

Type casting is also called type conversion and is a fundamental concept in programming. It allows a variable of
 one data type to be transformed into another data type and is particularly important when performing operations 
 across different data types (like converting an int to a double or vice versa).​




==================================================================================================================================


********Types of Type Casting :-

  1] Implicit (Automatic) Type Casting:
    This happens automatically when the compiler determines a conversion is safe (for example, converting an integer to 
     a double). There is no risk of data loss in this type, which is also referred to as 'widening conversion' or 
     'type promotion.' Example:

        #include <iostream>
        using namespace std;

        int main() {
            int num = 10;
            double value = num; // Implicit conversion from int to double
            cout << "Implicit cast int to double: " << value << endl;
            return 0;
        }



  2] Explicit Type Casting:
    This requires the programmer to manually specify the conversion, especially when converting a data type to one with
     less precision or a smaller range (known as 'narrowing conversion'). This type can risk data loss or runtime errors
      if not handled carefully. Example:


        #include <iostream>
        using namespace std;

        int main() {
            double value = 9.7;
            int num = (int)value; // Explicit conversion from double to int
            cout << "Explicit cast double to int: " << num << endl;
            return 0;
        }

==================================================================================================================================

********Uses of Type Casting :-
    1]It enables operations between different data types.
    2]Prevents errors when working across numeric, character, or object types.
    3]Helps in managing memory efficiently and handling user input in different formats.
*/


//Sample Example :-

// Topic: Type Casting in C++ (College Scenario)




#include <iostream>
using namespace std;

class Person {
public:
    virtual void showRole() { cout << "Person (Generic)\n"; }
};

class Student : public Person {
public:
    void showRole() override { cout << "Student: Attending lectures\n"; }
};

class Teacher : public Person {
public:
    void showRole() override { cout << "Teacher: Conducting class\n"; }
};

int main() {
    // 1️⃣ static_cast example
    double marks = 89.75;
    int intMarks = static_cast<int>(marks);
    cout << "Marks (double): " << marks << " After static_cast to int: " << intMarks << endl;

    // 2️⃣ dynamic_cast example
    Person* p1 = new Student();
    Student* s1 = dynamic_cast<Student*>(p1);
    if (s1) s1->showRole();  // Works correctly

    Person* p2 = new Teacher();
    Student* s2 = dynamic_cast<Student*>(p2);
    if (!s2) cout << "dynamic_cast failed: Teacher cannot be cast to Student\n";

    // 3️⃣ const_cast example
    const int collegeID = 101;
    int* modID = const_cast<int*>(&collegeID);
    *modID = 202; // Not recommended — undefined behavior in real code
    cout << "Modified College ID using const_cast: " << *modID << endl;

    // 4️⃣ reinterpret_cast example
    int rollNumber = 65;
    char* charPtr = reinterpret_cast<char*>(&rollNumber);
    cout << "Roll Number: " << rollNumber << " Reinterpreted as char: " << *charPtr << endl;

    delete p1;
    delete p2;
    return 0;
}

/*
=================    OUTPUT :-       =====================
Microsoft Windows [Version 10.0.26200.7171]
(c) Microsoft Corporation. All rights reserved.

C:\Users\Study\SY\Academics>cd "c:\Users\Study\SY\Academics\OPPS C++\" && g++ Assignment12.cpp -o Assignment12 && "c:\Users\Study\SY\Academics\OPPS C++\"Assignment12
Marks (double): 89.75 After static_cast to int: 89
Student: Attending lectures
dynamic_cast failed: Teacher cannot be cast to Student
Modified College ID using const_cast: 202
Roll Number: 65 Reinterpreted as char: A
    
c:\Users\Study\SY\Academics\OPPS C++>


*/
