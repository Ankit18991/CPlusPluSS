#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

template < class T > 
class Swapping
{
    T * x;
    T * y;
    T a,b;
    T temp;

    public:
        Swapping(){}  // Default constructor
        Swapping(int a)
        {
            cout << endl << "Enter the Value of x : " << endl;
            cin >> this -> a;

            cout << endl << "Enter the vlaue of y : " << endl;
            cin >> b;

            x = &(this -> a); // 'a' Of the object created(as 'this' pointer points to the object of class)
            y = &b;

            cout << endl << "Before Swapping : " << endl
                         << "x = " << *x << endl
                         << "y = " << *y << endl;
            temp = *x;
            *x = *y;
            *y = temp;
        }

        void display()
        {
            cout << endl << "After Swapping : " << endl
                         << "x = " << *x << endl
                         << "y = " << *y << endl;       // Dereferencing the values at x and y
        }
};

int main()
{
    cout << endl << "Press 1 to swap the Values of two integers" << endl;
    cout << endl << "Press 2 to swap the Values of two Floating point numbers" << endl;
    cout << endl << "Press 3 to swap the Values of two double numbers" << endl;
    cout << endl << "Press 0 to quit" << endl;

  
    while(1)
    {
        char ch;
        cout << endl << "Enter Your choice: " << endl;
        ch = getch();

        if (ch == '1')
        {
            Swapping < int > integers_Swap(8);
            integers_Swap.display();
            getch();
        }

        else if (ch == '2')
        {
            Swapping < float > float_Swap(8);
            float_Swap.display();
            getch();
        }

        else if (ch == '3')
        {
            Swapping < double > double_Swap(8);
            double_Swap.display();
            getch();
        }

        else{
            return -1;
        }
    }

    return 0;
}