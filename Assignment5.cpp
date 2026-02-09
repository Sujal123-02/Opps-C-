// Name :- Sujal R. Chaudhari
// PRN :- 202401110026
// Title :- Class, Objects, This Pointer, Inline Function, Static Member Function & Friend Class

#include <iostream>
using namespace std;


class FriendClass;

class Clg {
    int Clg_ID;
    int ranking;
    static int totalColleges;   

public:
    
    Clg() {
        this->Clg_ID = 61703;  
        this->ranking = 21;
        totalColleges++;
        cout << "Default College Created with ID: " << this->Clg_ID << endl;
    }

    
    Clg(int id, int rank) {
        this->Clg_ID = id;
        this->ranking = rank;
        totalColleges++;
        cout << "Parameterized College Created with ID: " << this->Clg_ID
             << " and Rank: " << this->ranking << endl;
    }

    
    inline void display() {
        cout << "College ID: " << Clg_ID << ", Rank: " << ranking << endl;
    }

    
    static void showCount() {
        cout << "Total Colleges Created: " << totalColleges << endl;
    }

    friend class FriendClass;

   
    ~Clg() {
        cout << "College with ID " << Clg_ID << " is deleted." << endl;
    }
};


int Clg::totalColleges = 0;


class FriendClass {
public:
    void showSecret(const Clg &c) {
        cout << "FriendClass Access -> College ID: " << c.Clg_ID
             << " and Rank: " << c.ranking << endl;
    }
};

int main() {
    
    Clg ob1;
    Clg ob2(41518, 13);

    ob1.display();
    ob2.display();
   
    Clg::showCount();

    FriendClass f;
    f.showSecret(ob1);
    f.showSecret(ob2);

    return 0;
}


/*

###########  Output :-

PS C:\Users\Sujal\OneDrive\Desktop\Programs\Academics> cd "c:\Users\Sujal\OneDrive\Desktop\Programs\Academics\OPPS C++\" ; if ($?) { g++ Assignment5.cpp -o Assignment5 } ; if ($?) { .\Assignment5 }
Default College Created with ID: 61703
Parameterized College Created with ID: 41518 and Rank: 13
College ID: 61703, Rank: 21
College ID: 41518, Rank: 13
Total Colleges Created: 2
FriendClass Access -> College ID: 61703 and Rank: 21
FriendClass Access -> College ID: 41518 and Rank: 13
College with ID 41518 is deleted.
College with ID 61703 is deleted.
PS C:\Users\Sujal\OneDrive\Desktop\Programs\Academics\OPPS C++> 

*/