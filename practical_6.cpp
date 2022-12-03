/*
Name : Rohit Singh
Enrolment number : 270115193607
*/
//************************************************//

/*
Practical 6
Write a C++ program to accept a character. Print whether the character is an
alphabet, digit, or a special character. Display appropriate messages.
*/

#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    char character;
    cout << "Enter the character : ";
    cin >> character;
    if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z')
    {
        cout << "The entered character is an Alphabet.";
    }
    else if (character >= '0' && character <= '9')
    {
        cout << "The entered character is a Digit.";
    }
    else
    {
        cout << "The entered character is a Special character.";
    }

    cout << "Press any key to exit...";
    getch();

    return 0;
}