/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 27, 2014, 3:20 PM
 * Savitch Chapter 4 Problem 4
 */

//System libraries
#include <iostream>
#include <cmath>
using namespace std;

//global constants

//function prototypes
double inflat(double oldprice, double presprice);

int main(int argc, char** argv) {
        //declare variables
	double oldprice, presprice, r;
	char again;
	do {
		//previous year price
		cout<<"Input the items previous year price"<<endl;
		cin>> oldprice;
		//current price
		cout<<"Input the items current price"<<endl;
		cin>> presprice;
		//rate of inflation
		r = inflat(oldprice, presprice);
		//output inflation
		cout<<"The rate of inflation is "<<(r * 100)<<" % "<<endl;
		//repeat calculation with different variables if user chooses to
		cout<<"Press Y if you would to repeat this calculation with different variables"<<endl;
		cin>>again;
	}while(again == 'Y' || again == 'y');
	//exit stage right
	return 0;
}
//function definition
double inflat(double oldprice, double presprice){
	return((presprice - oldprice)/presprice);
}