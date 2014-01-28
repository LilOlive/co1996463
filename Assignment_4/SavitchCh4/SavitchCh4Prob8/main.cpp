/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 27, 2014, 4:13 PM
 * Savitch Chapter 4 Problem 8
 */

//System libraries
#include <iostream>
#include<cstdlib>
using namespace std;

//global constants

//function prototypes
float amc (float);
float tsa (float);

int main(int argc, char** argv) {
        //declare variables
	float hp, dp, ib;
	char again;
	do{
		//house and down payment
		cout<<"Input the cost of the house"<<endl;
		cin>>hp;
		cout<<"Input the down payment needed for the house"<<endl;
		cin>>dp;
		//balance
		ib = hp - dp;
                //output
                cout<<" The annual after tax cost of the home is $"<<amc(ib) - tsa(ib)<<endl;
                cout<<"The initial loan balance is $"<<ib<<endl;
                cout<<"The annual mortgage cost is $"<<amc(ib)<<endl;
                cout<<"With a $"<<tsa (ib)<<" tax savings each year"<<endl;
              //repeat calculation with different variables if user chooses to
		cout<<"Press Y if you would to repeat this calculation with different variables"<<endl;
		cin>>again;
	}while (again == 'Y' || again=='y');
	//exit stage right
	return 0;
}
//function def
float amc(float ib){
    float cost;
    //3% credit and 6% interest
    cost=ib*(.09);
    return cost;
}
float tsa (float ib){
    float ts;
    ts=ib*0.021;
    return ts;
}
