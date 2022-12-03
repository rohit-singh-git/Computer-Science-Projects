/*
Name : Rohit Singh
Enrolment number : 270115193607
*/
//************************************************//

/*
Practical 3
Write a C++ program to accept two numbers, a float and an integer and display the
following :-
a) Sum of two numbers in integer form.
b) Sum of two numbers in float form.
*/

#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1;
    float num2;

    cout << "Enter integer value : ";
    cin >> num1;
    cout << "Enter float value : ";
    cin >> num2;

    cout << "Sum of numbers in integer form : " << int(num1 + num2) << endl;
    cout << "Sum of numbers in float form : " << float(num1 + num2) << endl;
    cout << "Press any key to exit...";
    getch();

    return 0;
}