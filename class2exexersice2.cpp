/*
File name: Class2exersice2.cpp
Programmer: Blake Jewell
Date: 01/24/2015
Requirements: take the employees hours worked for the week and his payrate and compute his grosspay and display it on the monitor.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
    double payrate = 15.00;
    double hours = 41;
    double grosspay = payrate * hours;
    cout << fixed << setprecision(2) << "your gross pay will be $" << grosspay << "\n";
    cout << fixed << setprecision(2) << "you worked" << hours << "\nat a payrate of" << payrate;



}

