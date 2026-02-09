// Name :- Sujal R. Chaudhari
// PRN :- 202401110026
// Title :- Exception Handling

#include <iostream>
using namespace std;

class College {
public:
    void displayCollege() {
        cout << "Welcome to XYZ College of Engineering" << endl;
    }

    void registerStudent(char name[], int age) {
        try {
            if (age < 17)
                throw age;  // Throw integer exception
            cout << "Student Registered Successfully: " << name << " (Age " << age << ")" << endl;
        }
        catch (int invalidAge) {
            cout << "Error: Student age " << invalidAge
                 << " is below minimum admission age (17 years)." << endl;
        }
    }

    void calculateResult(int totalMarks, int subjects) {
        try {
            if (subjects == 0)
                throw 'Z';  // Throw char exception
            if (totalMarks < 0)
                throw totalMarks;  // Throw int exception

            float average = (float)totalMarks / subjects;
            cout << "Average Marks: " << average << endl;

            if (average < 40)
                throw false;  // Throw boolean for fail case

            cout << "Result: Pass " << endl;
        }
        catch (char code) {
            cout << "Error: Number of subjects cannot be zero!" << endl;
        }
        catch (int marks) {
            cout << "Error: Invalid total marks (" << marks << ")" << endl;
        }
        catch (bool fail) {
            cout << "Result: Fail " << endl;
        }
    }
};

int main() {
    College c;
    c.displayCollege();

    cout << "\n--- Student Registration ---" << endl;
    c.registerStudent((char*)"Sujal", 18);
    c.registerStudent((char*)"Ravi", 15);  // Will throw exception

    cout << "\n--- Result Calculation ---" << endl;
    c.calculateResult(350, 5);   // Pass
    c.calculateResult(-50, 5);   // Invalid marks
    c.calculateResult(150, 0);   // Divide by zero subjects
    c.calculateResult(150, 5);   // Fail

    return 0;
}


/*
=================== OUTPUT :-  ===================

PS C:\Study\SY\Academics> cd "c:\Study\SY\Academics\OPPS C++\" ; if ($?) { g++ Assignment8.cpp -o Assignment8 } ; if ($?) { .\Assignment8 }
Welcome to XYZ College of Engineering

--- Student Registration ---
Student Registered Successfully: Sujal (Age 18)
Error: Student age 15 is below minimum admission age (17 years).

--- Result Calculation ---
Average Marks: 70
Result: Pass 
Error: Invalid total marks (-50)
Error: Number of subjects cannot be zero!
Average Marks: 30
Result: Fail 
PS C:\Study\SY\Academics\OPPS C++> 


*/