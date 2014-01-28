/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 27, 2014, 3:07 PM
 * Savitch Chapter 4 Problem 2
 */

//System libraries
#include <iostream>
using namespace std;

//global constants
double const liter = 3.785;

//Function Prototypes
double 	MPG(double m, double l);

int main(int argc, char** argv) {
        //declare variables
	double car1_l, car1_m, car2_l, car2_m, car1_mpg, car2_mpg;
	char again;
	do{
		//car 1 miles
		cout<<"Input the number of miles traveled by the first car"<<endl;
		cin>> car1_m;
		//car1 liters
		cout<<"Input the amount of gasoline used by the first car in liters"<<endl;
		cin>> car1_l;
		//car 2 miles
		cout<<"Input the number of miles traveled by the second car"<<endl;
		cin>> car2_m;
		//car1 liters
		cout<<"Input the amount of gasoline used by the second car in liters"<<endl;
		cin>> car2_l;	
		if (car1_l == 0 || car2_l == 0)
		cout<<"The input is Invalid"<<endl;
		else{
			//cars mpg
			car1_mpg = MPG(car1_m, car1_l);
			car2_mpg = MPG(car2_m, car2_l);
			//output
			cout<<"The MPG for the first car is "<<car1_mpg<<endl;
			cout<<"The MPG for the second car is "<<car2_mpg<<endl;
		       }
		if (car1_mpg == car2_mpg){
			cout<<"Both the first car and second car are good"<<endl;
			}
		else if (car1_mpg > car2_mpg){
			cout<<"The first car is better than the second car"<<endl;
			}
		else
			cout<<"The second car is better than the first car"<<endl;
		//repeat calculation if user chooses to
		cout<<"Press Y if you would to repeat this calculation with different variables"<<endl;
		cin>> again;
	}while (again == 'Y' || again=='y');
	//exit stage right
	return 0;
}
//function def.
double 	MPG(double m, double l){
	return (m * liter/l);
}
