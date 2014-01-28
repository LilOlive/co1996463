/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 27, 2014, 4:02 PM
 * Savitch Chapter 4 Problem 6
 */

//System libraries
#include <iostream>
using namespace std;

//global constants

//function prototypes
double interest (double, double, int);

int main(int argc, char** argv) {
        //declare variables
	double bal, ir, tot;
	int mon;
	char again;
	do{
		//interest rate
		cout<<"Input the interest rate"<<endl;
		cin>>ir;
		//balance
		cout<<"Input the balance"<<endl;
		cin>>bal;
		//months
		cout<<"Input the number of months"<<endl;
		cin>>mon;
		//function
		tot = interest (bal, ir, mon);
		//output
		cout<<"The interest that is due is "<<tot<<endl;
 		//repeat calculation with different variables if user chooses to
		cout<<"Press Y if you would to repeat this calculation with different variables"<<endl;
		cin>>again;
	}while (again == 'Y' || again=='y');
	//exit stage right
	return 0;
}
//function def
double interest (double bal, double ir, int mon){
	double tot = 0;
	for  (int i=mon; i>0; i--){
			tot += ((bal * ir)/(100 * 12));
			bal +=((bal * (100 + ir))/(100 * 12));
		}
	return tot;
}

