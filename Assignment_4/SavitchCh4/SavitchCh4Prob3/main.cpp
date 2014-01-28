/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 27, 2014, 3:16 PM
 * Savitch Chapter 4 Problem 3
 */

//System libraries
#include <iostream>
using namespace std;

//Global constants

//function prototypes
double sp (int w, int num, int den, int s);

int main(int argc, char** argv) {
        //declare variables
	int w, num, den, s;
	double sv = 0;
	char again;
	do {
		//whole
		cout<<"Input the whole of the stock"<<endl;
		cin>>w;
		//numerator
		cout<<"Input the fractional parts numerator"<<endl;
		cin>>num;
		//denominator
		cout<<"Input the fractional parts denominator"<<endl;
		cin>>den;
		//stocks
		cout<<"Input the number of stocks"<<endl;
		cin>>s;
		//function calculations
		sv = sp (w, num, den, s);
		cout<<"The price for a single stock is "<<sv<<endl;
		//repeat calculation with different variables if user chooses to
		cout<<"Press Y if you would to repeat this calculation with different variables"<<endl;
		cin>>again;
	}while (again == 'Y' || again=='y');
	//exit stage right
	return 0;
}
//function def
double sp(int w, int num, int den, int s) {
	double p;
	p = static_cast<double>(w  * den + num)/(den * s);
	return p;
}

