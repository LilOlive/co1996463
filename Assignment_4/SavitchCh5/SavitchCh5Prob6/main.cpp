/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 27, 2014, 6:13 PM
 * Savitch Chapter 5 Problem 10
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//global constants

//function prototypes
void inp(float &lbs, float &ounce);
void calc(float &lbs, float &ounce, float kil, float g);
void disp (float lbs, float ounce, float kil, float g);

int main(int argc, char** argv) {
    //declare variables
    float lbs, ounce, kil, g;
    char again;
    do{
        //function input
        inp(kil, g);
        //function calculate
        calc(lbs, ounce, kil, g);
        //function display
        disp(lbs, ounce, kil, g);
        //to repeat calculation with different variables
        cout<<"To repeat this calculation with different variables Press Y"<<endl;
        cin>>again;
    }while(again=='Y' || again=='y');
    //exit stage right
    return 0;
}
void inp(float &kil, float &g){
    //enter kilograms
    cout<<"Input kilograms"<<endl;
    cin>>kil;
    //enter grams
    cout<<"Input grams"<<endl;
    cin>>g;
}
void calc(float &lbs, float &ounce, float kil, float g){
    //kil and g conversion to pounds
    lbs=(kil*2.2046)+((g/16)*2.2046);
    //kil and g conversion to ounces
    ounce=16*lbs;
}
void disp (float lbs, float ounce, float kil, float g){
    cout<<"There is "<<lbs<<" Pounds, "<<ounce<<" ounces in "<<kil<<" Kilograms, "<<g<<" Grams"<<endl;
}

