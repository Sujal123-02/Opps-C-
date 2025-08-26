// Name :- Sujal R. Chaudhari
// PRN :- 202401110026
// Tittle:- Constructor



#include<iostream>
using namespace std;

class Clg{
	int Clg_ID;
	int ranking;
	int clg_rank=21;
	public:
		Clg(){
			Clg_ID = 61703;
			cout<<"The College ID / Institue Code is "<< Clg_ID <<"."<< endl;     //Default Constructor
			cout<<"Thanks For Visiting. "<<endl ;
			
		}
		Clg(Clg & new_obj){
			Clg_ID = 41518;
			cout<<"The College ID / Institue Code is "<<Clg_ID<<endl;          //Copy Constructor
			
		}
		
		Clg(int rank){
			ranking = rank ;
			cout<<"Rank Of the College is "<<ranking<<endl;                //Parameterize Constructor
			
		}

		~Clg(){
			cout<<"The rank of your college is "<<clg_rank<<endl;
		}
};
int main(){
	Clg ob1,ob2,ob3;
	Clg ob4(13);
	Clg obj_new(ob2);
	

// **************************  Output   *************************************
/*
The College ID / Institue Code is 61703.
Thanks For Visiting.
The College ID / Institue Code is 61703.
Thanks For Visiting.
The College ID / Institue Code is 61703.
Thanks For Visiting.
Rank Of the College is 13
The College ID / Institue Code is 41518
The rank of your college is 21
The rank of your college is 21
The rank of your college is 21
The rank of your college is 21
The rank of your college is 21
*/  