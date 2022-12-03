/*
Name : Rohit Singh
Enrolment number : 270115193607
*/
//************************************************//

/*
Practical 12
Create three functions by the name CALCULATE() according to the prototypes
given below:
􀁺 void CALCULATE(int) // to check whether the argument being
passed is even or odd
􀁺 int CALCULATE(int, int) // to return the sum of two numbers being
passed as arguments.
􀁺 void CALCULATE() // to display the message “ YOU ARE
DOING GREAT”
*/

#include <iostream>
#include<conio.h>
using namespace std;

void CALCULATE()
{
    cout << "YOU ARE DOING GREAT.\n";
}

void CALCULATE(int a)
{
    if (a % 2 == 0)
    {
        cout << "The number " << a << " is even.\n";
    }
    else
    {
        cout << "The number " << a << " is odd.\n";
    }
}

int CALCULATE(int a, int b)
{
    int result = a + b;
    cout << "The sum of " << a << " and " << b << " is " << result << endl;
    return 0;
}

int main()
{
    CALCULATE(20);
    CALCULATE(25, 5000);
    CALCULATE();

    cout << "Press any key to exit...";
    getch();

    return 0;
}