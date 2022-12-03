/*
Name : Rohit Singh
Enrolment number : 270115193607
*/
//************************************************//

/*
Practical 10
Write a C++ program using for loop to find whether the number is an Armstrong
number or not.
*/

#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number, original_number, remainder, result = 0;
    cout << "Enter the number you want to check if it is an Armstrong number or not : ";
    cin >> number;
    original_number = number;
    for (; original_number != 0;)
    {
        remainder = original_number % 10;
        result = result + remainder * remainder * remainder;
        original_number = original_number / 10;
    }
    if (result == number)
    {
        cout << number << " is an Armstrong number.";
    }
    else
    {
        cout << number << " is not an Armstrong number.";
    }

    cout << "Press any key to exit...";
    getch();
    return 0;
}