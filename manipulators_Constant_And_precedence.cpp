#include<iostream>
#include<iomanip>

using namespace std;

void constants()
{
    // const int a;
    // a = 6;
    cout << "Say a = 6" << endl;
    cout<< "Changin the value of the variable" << endl << "It shows an error" << endl;
    //a = 12;
}

void manipulators()
{
    int a = 3, b = 876 , c = 1098;
    cout << "The value of a (without setw) = " << a << endl;
    cout << "The value of a (without setw) = " << a << endl;
    cout << "The value of a (without setw) = " << a << endl;

    cout << "The value of a (with setw) = " << setw(8) << a << endl;
    cout << "The value of a (with setw) = " << setw(8) << a << endl;
    cout << "The value of a (with setw) = " << setw(8) << a << endl;
}

void precedence()
{
    int a = 4 + 5 * 8 - (8 + 4);

    // At first, Brackets()
    // '/'
    // '*'
    // '+'
    // '-'

    cout << "The value of a = " << a << endl;
}

int main()
{
    cout << "Calling the functions" << endl;

    precedence();
    manipulators();
    constants();

    return 0;
}