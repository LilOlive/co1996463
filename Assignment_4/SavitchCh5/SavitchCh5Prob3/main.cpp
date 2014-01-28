/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 27, 2014, 4:30 PM
 * Savitch Chapter 5 Problem 4
 */

//System libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global constants

//Function Prototypes
double ave(double s1, double s2, double s3, double s4);
double stand_dev(double s1, double s2, double s3, double s4, double average, int n);

int main(int argc, char** argv) {
    //declare variables
    double s1,s2,s3,s4, avg, sdev;
    char again;
    do{
        //s1
        cout<<"Input the value of s1"<<endl;
        cin>>s1;
        //s2
        cout<<"Input the value of s2"<<endl;
        cin>>s2;
        //s3
        cout<<"Input the value of s3"<<endl;
        cin>>s3;
        //s4
        cout<<"Input the value of s4"<<endl;
        cin>>s4;
        avg=ave(s1,s2,s3,s4);
        sdev=stand_dev(s1,s2,s3,s4,avg,4);
        //output
        cout<<"The standard deviation is "<<sdev<<endl;
        //repeat calculation with different variables if user chooses to
	cout<<"Press Y if you would to repeat this calculation with different variables"<<endl;
	cin>>again;
	}while (again == 'Y' || again=='y');
	//exit stage right
       return 0;
}
//function def
double ave(double s1, double s2, double s3, double s4){
    return (s1+s2+s3+s4)/4;
}
double stand_dev(double s1, double s2, double s3, double s4, double mean, int n){
    double sd;
    sd=(pow((s1-mean),2)+pow((s2-mean),2)+pow((s3-mean),2)+pow((s4-mean),2))/n;
    sd=sqrt (sd);
    return sd;
}
