//                                       Assignment 4 :
//Name :- Sujal R Chaudhari
//PRN:- 202401110026
//Title :-Refference & pointers and Dynamic memory(new and delete) in College system


#include <iostream>
using namespace std;


void swapByValue(int roll1, int roll2) {
    int temp = roll1;
    roll1 = roll2;
    roll2 = temp;
    cout << "Inside swapByValue: Roll1 = " << roll1 << ", Roll2 = " << roll2 << endl;
}

void swapByReference(int &marks1, int &marks2) {
    int temp = marks1;
    marks1 = marks2;
    marks2 = temp;
}

int main() {
    int studentID = 101;
    int &refID = studentID;
    cout << "Reference Example:" << endl;
    cout << "Original Student ID = " << studentID << ", Reference ID = " << refID << endl;
    refID = 202;
    cout << "After updating reference ID, Student ID = " << studentID << endl << endl;

    int attendance = 75;
    int *ptrAttendance = &attendance;
    cout << "Pointer Example:" << endl;
    cout << "Attendance = " << attendance << "%, *ptrAttendance = " << *ptrAttendance << "%" << endl;
    *ptrAttendance = 85;
    cout << "After updating through pointer, Attendance = " << attendance << "%\n" << endl;

    cout << "Dynamic Memory Allocation (Student Marks):" << endl;
    int *marks = new int[3];
    marks[0] = 78;
    marks[1] = 82;
    marks[2] = 91;

    cout << "Marks of 3 Students: ";
    for (int i = 0; i < 3; i++)
        cout << marks[i] << " ";
    cout << endl;

    delete[] marks;
    cout << "Memory for student marks released.\n" << endl;

    int rollNo1 = 11, rollNo2 = 22;
    cout << "Call by Value vs Call by Reference Example:" << endl;
    cout << "Before swapping (Call by Value): Roll1 = " << rollNo1 << ", Roll2 = " << rollNo2 << endl;

    swapByValue(rollNo1, rollNo2);
    cout << "After swapByValue: Roll1 = " << rollNo1 << ", Roll2 = " << rollNo2 << " (no change)\n" << endl;

    int marks1 = 88, marks2 = 92;
    cout << "Before swapping (Call by Reference): Marks1 = " << marks1 << ", Marks2 = " << marks2 << endl;

    swapByReference(marks1, marks2);
    cout << "After swapByReference: Marks1 = " << marks1 << ", Marks2 = " << marks2 << " (swapped)\n";

    cout << "\nEnd of Program - College Data Case Demonstration\n";

    return 0;
}

/*
==================Output:-========================

PS C:\Study\SY\Academics> cd "c:\Study\SY\Academics\OPPS C++\" ; if ($?) { g++ Assignment4.cpp -o Assignment4 } ; if ($?) { .\Assignment4 }
Reference Example:
Original Student ID = 101, Reference ID = 101
After updating reference ID, Student ID = 202

Pointer Example:
Attendance = 75%, *ptrAttendance = 75%
After updating through pointer, Attendance = 85%

Dynamic Memory Allocation (Student Marks):
Marks of 3 Students: 78 82 91 
Memory for student marks released.

Call by Value vs Call by Reference Example:
Before swapping (Call by Value): Roll1 = 11, Roll2 = 22
Inside swapByValue: Roll1 = 22, Roll2 = 11
After swapByValue: Roll1 = 11, Roll2 = 22 (no change)

Before swapping (Call by Reference): Marks1 = 88, Marks2 = 92
After swapByReference: Marks1 = 92, Marks2 = 88 (swapped)

End of Program - College Data Case Demonstration
PS C:\Study\SY\Academics\OPPS C++>

*/