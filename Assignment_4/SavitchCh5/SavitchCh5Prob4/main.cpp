/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 27, 2014, 6:13 PM
 * Savitch Chapter 5 Problem 6
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//global constants

//function prototypes
void inp(float &ft, float &in);
void calc(float ft, float in, float &mt, float &cm);
void disp (float mt, float cm, float ft, float in);

int main(int argc, char** argv) {
    //declare variables
    float ft, in, mt, cm;
    char again;
    do{
        //function input
        inp(ft, in);
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
void inp(float &ft, float &in){
    //enter ft
    cout<<"Input feet"<<endl;
    cin>>ft;
    //enter in
    cout<<"Input inches"<<endl;
    cin>>in;
}
void calc(float ft, float in, float &mt, float &cm){
    //in and ft conversion to meters
    mt=ft*0.3048+(in*0.0254);
    //in and ft conversion to centimeters
    cm=(ft*30.48+in*2.54);
}
void disp (float mt, float cm, float ft, float in){
    cout<<"There is "<<mt<<" Meters, "<<cm<<" Centimeters in "<<ft<<" feet, "<<in<<" inches"<<endl;
}
