/* 
 * File:   main.cpp
 * Author: Cynthia R. Olivas
 * Created on January 27, 2014, 6:13 PM
 * Savitch Chapter 5 Problem 17
 */

//System Libraries
#include <iostream>
using namespace std;

//global constants

//function prototype
int dow(int mon, int day, int yr);

int main(int argc, char** argv) {
    //declare variables
    int day, mon, yr, wd;
    //data
    cout<<"Input the day"<<endl;
    cin>>day;
    cout<<"Input the month"<<endl;
    cin>>mon;
    cout<<"Input the year"<<endl;
    cin>>yr;
    //function
    wd=dow(1,27,2014)-1;
    switch(wd){
        case 0: cout<<"Sun"<<endl;
        break;
        case 1: cout<<"Mon"<<endl;
        break;
        case 2: cout<<"Tue"<<endl;
        break;
        case 3: cout<<"Wed"<<endl;
        break;
        case 4: cout<<"Thu"<<endl;
        break;
        case 5: cout<<"Fri"<<endl;
        break;
        case 6: cout<<"Sat"<<endl;
        break;
    }
    //exit stage right
    return 0;
}
//function
int dow(int mon, int day, int yr){
    int week_day;
    //input value
    if (mon>12||mon<0||day>31||day<0){
        cout<<"Parameters invalid"<<endl;
        return -1;
    }
    else{
        //to find what day
        week_day=day;
        week_day+=2*mon;
        week_day+=(3*(mon+1)/5);
        week_day+=yr;
        week_day+=yr/4;
        week_day-=yr/100;
        week_day+=yr/400;
        week_day+=2;
        return week_day%7;
    }
}


