/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 27, 2014, 3:57 PM
 * SAvitch Chapter 4 Problem 5
 */

//System libraries
#include <iostream>
#include <cmath>
using namespace std;

//global constants

//function prototypes
double infl(double old_price, double pres_price);
double est (double pres_price, double r);

int main(int argc, char** argv) {
//declare variables
	double old_price, pres_price, r, tot;
	char again;
	do {
		//previous year price
		cout<<"Input the items previous year price"<<endl;
		cin>>old_price;
		//current price
		cout<<"Input the items current price"<<endl;
		cin>>pres_price;
		//rate of inflation
		r = infl (old_price, pres_price);
		tot = est (pres_price, r);
		//output inflation
		cout<<"The rate of inflation is "<<r * 100<<" % "<<endl;
		cout<<"The estimated total is "<<tot<<endl;
		//repeat calculation with different variables if user chooses to
		cout<<"Press Y if you would to repeat this calculation with different variables"<<endl;
		cin>>again;
	}while (again == 'Y' || again=='y');
	//exit stage right
	return 0;
}
//function def
double infl (double old_price, double pres_price){
	return((pres_price - old_price)/pres_price);
}
double est (double pres_price, double r) {
	return (pres_price * r);
}
