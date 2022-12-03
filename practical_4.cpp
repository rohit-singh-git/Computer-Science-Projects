/*
Name : Rohit Singh
Enrolment number : 270115193607
*/
//************************************************//

/*
Practical 4
Write a C++ program that accepts radius and then displays the area and perimeter
of a circle. Consider “Pi” as a constant with value 3.14.
*/

#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    const float pi = 3.14;
    float radius;

    cout << "Enter the radius of circle : ";
    cin >> radius;

    cout << "perimeter of circle is : " << pi * radius * radius << endl;
    cout << "Area of circle is : " << 2 * pi * radius << endl;

    cout << "Press any key to exit...";
    getch();

    return 0;
}