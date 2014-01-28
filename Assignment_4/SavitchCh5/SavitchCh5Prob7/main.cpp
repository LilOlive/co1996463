/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 27, 2014, 6:13 PM
 * Savitch Chapter 5 Problem 14
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//global constants

//function prototype
double funct (double ws, double temp, double wci);

int main(int argc, char** argv) {
    //declare variables
    double ws, temp, wci=0;
    //enter wind speed
    cout<<"Input the wind speed in m/sec"<<endl;
    cin>>ws;
    //temperature
    cout<<"Input the temperature in celsius degrees"<<endl;
    cin>>temp;
    wci=funct(ws, temp, wci);
    //output
    cout<<wci;
    //exit stage right
    return 0;
}
//function
double funct (double ws, double temp, double wci){
    return wci=(13.12+0.6215*temp-11.37*pow(ws,0.16)+0.3965*temp*pow(ws,0.016));
}
