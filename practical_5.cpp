/*
Name : Rohit Singh
Enrolment number : 270115193607
*/
//************************************************//

/*
Practical 5
Write a C++ program to accept a number. Using conditional operator print
whether the number is even or odd.
*/

#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number you want to check whether it is odd or even : ";
    cin >> number;
    (number % 2 == 0) ? cout << "The number is Even." : cout << "The number is Odd.";

    cout << "Press any key to exit...";
    getch();

    return 0;
}