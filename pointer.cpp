#include<iostream>
using namespace std;

int main()
{
    int a = 45;
    int *b = &a;

    // Pointer: A data type pointing to the other pointer
    cout << "a = " << a << endl;
    cout << "Address Of a = " << &a << endl;
    cout << "b = " << b << endl;

    // * = 'Value at'Operator i.e., Dereference Operator
    cout << "Value At b = " << *b << endl;
    
    // Pointer to pointer :-
    int **pptr = &b;

    cout << "Address of b = " << &b << endl;
    cout << "Address stored by pptr = " << pptr << endl;
    cout << "Value of at pptr = " << **pptr << endl;

    return 0;
}