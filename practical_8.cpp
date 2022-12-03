/*
Name : Rohit Singh
Enrolment number : 270115193607
*/
//************************************************//

/*
Practical 8
Write a C++ program (using while loop ) to display all the multiples of 5 from 100
to 50.
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int multiple = 5, count = 10;

    while (count >= 10 && count <= 20)
    {
        cout << multiple * count << endl;
        count += 1;
    }
    cout << "Press any key to exit...";
    getch();

    return 0;
}