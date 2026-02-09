// Name :- Sujal R. Chaudhari
// PRN :- 202401110026
// Title :- STL : Vector and Stack (College Scenario)

#include <iostream>
#include <vector>
#include <stack>
using namespace std;


void vectorDemo() {
    vector<int> rollNo = {11, 12, 13};
    cout << "\n****   College Roll Numbers (Vector Example) ****" << endl;

    rollNo.push_back(14); 
    rollNo.pop_back();     

    cout << "Current Roll Numbers: ";
    for (int r : rollNo)
        cout << r << " ";
    cout << "\nTotal Students: " << rollNo.size() << endl;
}


void stackDemo() {
    stack<string> submitted;
    cout << "\n****  Assignment Submission (Stack Example) ****" << endl;

    submitted.push("Sujal");
    submitted.push("Ishika");
    submitted.push("Aman");

    cout << "Last student submitted: " << submitted.top() << endl;
    submitted.pop(); 

    cout << "Remaining Submissions:" << endl;
    while (!submitted.empty()) {
        cout << submitted.top() << endl;
        submitted.pop();
    }
}

int main() {
    vectorDemo();
    stackDemo();
    return 0;
}

/*
==============================          OUTPUT :-      ================================

Microsoft Windows [Version 10.0.26200.7019]
(c) Microsoft Corporation. All rights reserved.

C:\Users\Study\SY\Academics>cd "c:\Users\Study\SY\Academics\OPPS C++\" && g++ Assignment11.cpp -o Assignment11 && "c:\Users\Study\SY\Academics\OPPS C++\"Assignment11

****   College Roll Numbers (Vector Example) ****
Current Roll Numbers: 11 12 13 
Total Students: 3

****  Assignment Submission (Stack Example) ****
Last student submitted: Aman
Remaining Submissions:
Ishika
Sujal

c:\Users\Study\SY\Academics\OPPS C++>


*/