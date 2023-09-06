/* Can we implement Bisection method using c++ ?*/

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    char c = '5';
    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << "sizeof(ch) = " << sizeof(ch) << endl;

    int l = ch - '0'; // Subtracts the value of ch from ascii value of '0' --> 48
    cout << "sizeof(ch) = " << sizeof(l) << endl;
    cout << l;      // Prints its ascii value
    return 0;
}