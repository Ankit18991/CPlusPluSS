#include<iostream>
using namespace std;

void swap(int a , int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a = " <<a << " b = " << b << endl;
}

void swap_Pointer(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    // cout << "After swap a = " << a << " and b = " << b << endl;
}

void swap_Address(int &a , int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 87, b = 56;
    cout << "Before swap a = " << a << " and b = " << b << endl;

    // swap_Pointer(&a , &b);
    swap_Address(a , b);
    cout << "After swap a = " << a << " and b = " << b << endl;
    return 0;
}