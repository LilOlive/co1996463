/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 27, 2014, 6:13 PM
 * Savitch Chapter 5 Problem 7
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//global constants

//function prototypes
void inp(float &mt, float &cm);
void calc(float &ft, float &in, float mt, float cm);
void disp (float mt, float cm, float ft, float in);

int main(int argc, char** argv) {
    //declare variables
    float ft, in, mt, cm;
    char again;
    do{
        //function input
        inp(mt, cm);
        //function calculate
        calc(ft, in, mt, cm);
        //function display
        disp(mt, cm, ft, in);
        //to repeat calculation with different variables
        cout<<"To repeat this calculation with different variables Press Y"<<endl;
        cin>>again;
    }while(again=='Y' || again=='y');
    //exit stage right
    return 0;
}
void inp(float &mt, float &cm){
    //enter mt
    cout<<"Input meters"<<endl;
    cin>>mt;
    //enter cm
    cout<<"Input centimeters"<<endl;
    cin>>cm;
}
void calc(float &ft, float &in, float mt, float cm){
    //in and ft conversion to meters
    ft=(mt/0.3048)+(cm/0.0254);
    //in and ft conversion to centimeters
    in=(mt/30.48)+(cm/2.54);
}
void disp (float mt, float cm, float ft, float in){
    cout<<"There is "<<ft<<" Feets, "<<in<<" inches in "<<mt<<" meters, "<<cm<<" centimeters"<<endl;
}

