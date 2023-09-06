#include<iostream>

using namespace std;
int global = 7;

void sum()
{
    int a,b,c;
    a = 30;
    b = 57;
    c = a + b;
    cout<< "The sum of "<< a << " and " << b << " is :  " << c ;
}

int main()
{
    int a = 9;
    int b = 5;
    float pi = 3.14;
    char first = 'u';       // Only One Character Allowed
    cout<< "This is Tutorial 4. Here the value of a is " << a << "\n And the value of b = " << b;
    cout<< "\n The value of pi is "<< pi;
    cout<< "\n The first letter Of my name = " << first << "\n" ;
    bool g = true;
    cout<<  g ;
    sum();
    cout<< "\n\n The value of the global variable(Here accessed from the main function) =  "<<global;
    
    // The precendence is given to the local variable

    return 0;
}