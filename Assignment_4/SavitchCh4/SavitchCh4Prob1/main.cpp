/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 27, 2014, 2:56 PM
 * Savitch Chapter 4 Problem 1
 */

//System Libraries
#include <iostream>
using namespace std;

//Global constants
double const liter = 0.264172;

//Function Prototypes
double mpg(int m , int l );

int main(int argc, char** argv) {
//declare variables
	int l, m;
	char again;
	do{
		//miles
		cout<<"Input the number of miles traveled"<<endl;
		cin>> m;
		//liters
		cout<<"Input the amount of Gasoline in Liters"<<endl;
		cin>>l;
		//mpg
		cout<<"The MPG is "<<mpg(m, l)<<endl;
		//repeat calculation if user chooses to
		cout<<"Press Y if you would to repeat this calculation with different variables"<<endl;
		cin>>again;
	}while (again == 'Y' || again=='y');
	//exit stage right
	return 0;
}
//functions definition
double mpg(int m, int l){
	//gallons
	double g;
	g = liter * l;
	return (m/g);
	}
