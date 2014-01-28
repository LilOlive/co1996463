/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 27, 2014, 4:30 PM
 * Savitch Chapter 5 Problem 2
 */

//System libraries
#include <iostream>
using namespace std;

//Global constants

//Function Prototypes

int main(int argc, char** argv) {
    //declare variables
    int chours, cmins, whours, wmins, hrs, mins;
    char again;
    do{
        //current time
        cout<<"Input the current hour"<<endl;
        cin>>chours;
        cout<<"Input the current minute for the hour"<<endl;
        cin>>cmins;
        //wait-time
        cout<<"Input the amount of hours to wait"<<endl;
        cin>>whours;
        cout<<"Input the waiting time minutes"<<endl;
        cin>>wmins;
        //calculations
        hrs=chours+whours;
        mins=cmins+wmins;
        if(mins>=60){
            hrs++;
            mins=mins-60;
        }
        cout<<"The time is: "<<hrs<<":"<<mins<<endl;
        //repeat calculation with different variables if user chooses to
	cout<<"Press Y if you would to repeat this calculation with different variables"<<endl;
	cin>>again;
	}while (again == 'Y' || again=='y');
	//exit stage right
       return 0;
}

