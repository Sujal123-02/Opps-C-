//Tittle :- Assignment 1
//I am taking College Data and Checking whether Students are eligible for College or not.
//Name: Sujal R. Chaudhari
//PRN: 202401110026


#include<iostream>
using namespace std;

class College{
	int IFSC_Code;
	string Clg_Name;
	int rank;
	
	public:
		void get();
		void display();	
			
};

void College::get(){
	cout<<"Enter the IFSC Code of your College:"<<endl;
	cin>>IFSC_Code;
	cout<<"Enter the Name of College:"<<endl;
	cin>>Clg_Name;
	cout<<"Enter the rank:"<<endl;
	cin>>rank;
}

void College::display(){
	cout<<"IFSC Code :"<<IFSC_Code<<endl;
	cout<<"College Name:"<<Clg_Name<<endl;
	cout<<"Rank:"<<rank<<endl;
	if (rank<=12000){
		cout<<"You are Welcome to College."<<endl;
	}
	else{
		cout<<"You are Not Qualified . Try later"<<endl;
	}
	
}
int main(){
	College obj;
	obj.get();
	obj.display();
	
	return 0;
}




//********************  Output 1:*************************
/*
Enter the IFSC Code of your College:
51637
Enter the Name of College:
PICT
Enter the rank:
9010
IFSC Code :51637
College Name:PICT
Rank:9010
You are Welcome to College.

--------------------------------
Process exited after 32.4 seconds with return value 0
Press any key to continue . . .

*/

//*********************  Output 2: ************************
/*   
Enter the IFSC Code of your College:
61517
Enter the Name of College:
MIT AOE
Enter the rank:
IFSC Code :61517
College Name:MIT
Rank:0You are Welcome to College.

--------------------------------
Process exited after 16.97 seconds with return value 0
Press any key to continue . . .

*/
