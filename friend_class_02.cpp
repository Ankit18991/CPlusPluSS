#include<iostream>
#include<conio.h>

using namespace std;

class B;

class A{
    int a1;
    friend void swap_The_Private_elements_Of_the_Classes(A &, B &);
    public:
        void get_Value()
        {
            int num1;
            cout << "Enter the value of num1: " << endl;
            cin>> num1;
            a1 = num1;
        }

        int return_Val()
        {
            return a1;
        }
};

class B{
    int a2;
    friend void swap_The_Private_elements_Of_the_Classes(A &, B &);
    public:
        void gets_Value()
        {
            int num2;
            cout << "Enter the value of num2: " << endl;
            cin >> num2;
            a2 = num2;
        }

        int return_Value()
        {
            return a2;
        }
};

void swap_The_Private_elements_Of_the_Classes(A &o1, B &o2)
{
    int temp;
    temp = o1.a1;
    o1.a1 = o2.a2;
    o2.a2 = temp;
}

int main()
{
    A first;
    B sec;
    first.get_Value();
    sec.gets_Value();

    cout << "Before Swapping : \n" << endl;
    cout << "a = " << first.return_Val() << endl;
    cout << "b = " << sec.return_Value() << endl;

    cout << endl << "After Swapping " << endl;
    swap_The_Private_elements_Of_the_Classes(first, sec);
    cout << "a = " << first.return_Val()<< endl;
    cout << "b = " << sec.return_Value()<< endl;

    return 0;
}