#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
// float a , b , c;

float greatest_Number(float a, float b, float c)
{
    if ( a > b && a > c )
    {
        return a;
    }

    else if (b > a && b > c)
    {
        return b;
    }

    else{
        return c;
    }
}

float middle_Number(float a, float b, float c)
{
    if (greatest_Number(a, b, c) == a)
    {
        if (b > c )
        {
            cout << "The Mid Number = " << b << endl;
            return b;
        }

        else{
            cout << "The Mid Number = " << c << endl;
            return c;
        }
    }

    else if (greatest_Number(a, b, c) == b)
    {
        if (a > c )
        {
            cout << "The Mid Number = " << a << endl;
            return a;
        }

        else{
            cout << "The Mid Number = " << c << endl;
            return c;
        }
    }

    else
    {
        if (b > a )
        {
            cout << "The Mid Number = " << b << endl;
            return b;
        }

        else{
            cout << "The Mid Number = " << a << endl;
            return a;
        }
    }
}

float lowest_Number(float a, float b, float c)
{
    if ( a > b && c > b)
    {
        cout << "The lowest Number = " << b << endl;
        return b;
    }

    else if (b > a && c > a)
    {
        cout << "The Lowest Number = " << a << endl;
        return a;
    }

    else{
        cout << "The Lowest Number = " << c << endl;
        return c;
    }
}

int main()
{
    float a, b, c;
    cout << "Enter Any three numbers : " << endl;
    cin >> a >> b >> c;

    cout << endl << "The entered three numbers = " << a << "\t" << b << "\t" << c << endl;
    cout << endl << " The greatest Number = " << greatest_Number(a, b, c) << endl;
    middle_Number(a, b, c);
    lowest_Number(a, b, c);

    return 0;
}