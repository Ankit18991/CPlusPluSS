#include<iostream>
using namespace std;

int num = 45;

void changing_Literals()
{
    float b = 3.14;
    cout<< endl << "The size of 3.14 is "<< sizeof(3.14);
    cout<< endl << "The size of double is " << sizeof(double) << endl;
    cout<< "The size of long is " << sizeof(long) << endl;

    float a = 3.14f;
    long c = 56.78l;
    cout<<"The size of 3.14f = "<< sizeof(3.14f) << endl;
    cout<<"The size of 56.78l = "<< sizeof(56.78l) << endl;
}

void reference_Variables()
{
    int x = 78;
    int &y = x;

    cout << endl << "x = " << x;
    cout << endl << "y = " << y;
}

void typecasting()
{
    float c;
    cout << endl << "Enter the vallue in float to convert it into int: " << endl;
    cin >> c;

    int v = int(c);
    cout << "v = int(c)= " << v << endl;

    float a = 56.08f;
    cout << "a(float) + v(int)= " << a + v << endl;
    cout<< "int(a) + int(v)= " << int(a) + int(v) << endl;
    cout << "int(a + v) = " << int(a + v) << endl;
}

int main()
{
    int num;
    cout<< "Enter the Number: ";
    cin>> num;
    cout<< endl << "The value of the number = " << num << endl;
    cout<< " The value of the Global Variable = " <<::num;          // Using Scope resolution Operator (::)

    // Function callings
    changing_Literals();
    reference_Variables();
    typecasting();

    return 0;
}