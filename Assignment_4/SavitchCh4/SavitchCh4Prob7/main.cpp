/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 27, 2014, 4:08 PM
 * Savitch Chapter 4 Problem 7
 */

//System libraries
#include <iostream>
#include <cmath>
using namespace std;

//global constants
double g = 6.673E-8;

//function prototypes
double gravity(double m_1, double m_2, double dist);

int main(int argc, char** argv) {
//declare variables
	double m_1, m_2, dist, gforce;
	char again;
	do{
		//first mass
		cout<<"Input the mass of the first body"<<endl;
		cin>>m_1;
		//second mass
		cout<<"Input the mass of the second body"<<endl;
		cin>>m_2;
		//distance
		cout<<"Input the distance between the two bodies"<<endl;
		cin>>dist;
		//function calc
		gforce = gravity (m_1, m_2, dist);
		//output
		cout<<"Between the bodies the gravitational force is "<<gforce<<endl;
		//repeat calculation with different variables if user chooses to
		cout<<"Press Y if you would to repeat this calculation with different variables"<<endl;
		cin>>again;
	}while (again == 'Y' || again=='y');
	//exit stage right
	return 0;
}
//function def
double gravity (double m_1, double m_2, double dist){
	return (g * m_1 * m_2)/(dist * dist);
}
