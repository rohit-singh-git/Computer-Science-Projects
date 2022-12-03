/*
Name : Rohit Singh
Enrolment number : 270115193607
*/
//************************************************//

/*
Practical 11
Write a menu driven program to swap two numbers using call by value and call by
reference.
*/

#include <iostream>
#include<conio.h>
using namespace std;

void menu()
{
    cout << "Press 1 to swap two number with call by value strategy.\n";
    cout << "Press 2 to swap two number with call by reference strategy.\n";
    cout << "Press 3 to exit.\n\n";
}

void call_by_value(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Inside function after swapping the value of a is " << a << " and the value of b is " << b << endl;
}

void call_by_reference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Inside function after swapping the value of a is " << a << " and the value of b is " << b << endl;
}

int main()
{
    int a, b;
    int choice;

    do
    {
        menu();
        cout << "Enter your choice : ";
        cin >> choice;
        cout << "Enter the values for swapping : ";
        cin >> a >> b;
        cout << "\n";
        switch (choice)
        {
        case 1:
            cout << "Before swapping the value of a is " << a << " and the value of b is " << b << endl << endl;
            cout << "*******************************************************************" << endl;
            call_by_value(a, b);
            cout << "Outside function after swapping the value of a is " << a << " and the value of b is " << b << endl << endl;
            break;
        case 2:
            cout << "Before swapping the value of a is " << a << " and the value of b is " << b << endl << endl;
            cout << "*******************************************************************" << endl;
            call_by_reference(a, b);
            cout << "Outside function after swapping the value of a is " << a << " and the value of b is " << b << endl << endl;
            break;
        case 3:
            exit(0);
        default:
            cout << "Wrong input entered.\n\n";
            break;
        }
    } while (choice != 3);

    cout << "Press any key to exit...";
    getch();

    return 0;
}