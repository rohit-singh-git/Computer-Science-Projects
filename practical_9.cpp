/*
Name : Rohit Singh
Enrolment number : 270115193607
*/
//************************************************//

/*
Practical 9
Write a program using do..while loop to display the Fibonacci series 0, 1, 1, 2, 3,
5… n
*/

#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, i = 0, j = 1, k = 0, count = 1;
    cout << "Enter the number for fibonacci series : ";
    cin >> n;
    cout << "Fibonacci Series : ";
    cout << i << ", " << j << ", ";
    do
    {
        k = i + j;
        i = j;
        j = k;
        cout << k << ", ";
        count += 1;

    } while (count < n - 1);

    cout << "Press any key to exit...";
    getch();

    return 0;
}