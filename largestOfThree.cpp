#include <iostream>
//largestOfThree.cpp
//BAV 8/20/2025

using namespace std;

int main() {
    cout <<"\n Welcome to my largest of three program\n";

    //Creat variable
    int num1 = 23;
    int num2 = 22;
    int num3 = 33;
    int largest = 0;

    //Output the variables; value
    cout << "\n The value of num1 is " << num1 << "\n\n";
    cout << "\n The value of num2 is " << num2 << "\n\n";

    //Write a selection statement (if statement)
    if (num1 > num2) {
        cout << "num1 has the value of " << num1 << " is greater than num2 which has the value of " << num2;
     }
    else {
        cout << "num2 has the value of " << num2 << " is greater than num2 which has the value of " <<num1;
    }
     cout << "\n\n this is the largest of three program...\n\n";
    //Find the largest of three using nested if statements.
    if (num1 > num2) {
        if (num1 > num3) {
            largest =num1;
           cout << "\n num1 has the value of " << num3 << " is the largest int!\n";
            }
        }
        else {
            if (num2 > num3) {
            largest = num3;
            cout << "\n num3 has the value of " << num3 << " and is the largest int!";
        }
    }


    return 0;
}