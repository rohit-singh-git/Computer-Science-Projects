/*
Name : Rohit Singh
Enrolment number : 270115193607
*/
//************************************************//

/*
Practical 7
Write a C++ program to accept a number and display the corresponding number
of week day
E.g., If the user enters “1” display “ Monday”, if the user enters “2” display “
Tuesday”…… and so on.
*/

#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;

    switch (number)
    {
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Please enter a valid number.";
        break;
    }

    cout << "Press any key to exit...";
    getch();

    return 0;
}