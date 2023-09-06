// Also for --

#include<iostream>
#include<conio.h>
using namespace std;

class Overloading
{
    public:
        int a;
        void get_Data();
        void show_Data();
        void operator++();
        void operator++(int);
};

void Overloading :: get_Data()
{
    cout << endl << "Enter the nUmber: " ;
    cin >> a;
}

void Overloading:: show_Data()
{
    cout << endl << "Your number = " << a;
}

void Overloading :: operator++()
{
    this->a = this->a + 1;
}

void Overloading :: operator++(int a)
{
    this -> a= this->a + 1;
}

int main()
{
    Overloading aa;

    cout << endl << "Press 1 To Overload the Prefix Increament Operator";
    cout << endl << "Press 2 To Overload the Postfix Increament Operator";
    cout << endl << "Press 0 to Quit";

    char ch;
    while(1)
    {
        cout << endl << "Enter YOur choice: " ;
        ch = getch();

        if (ch == '1')
        {
            int view;
            aa.get_Data();
            ++aa;
            cout << endl << "PresS 1 To view the data after Prefix Increament: ";
            cin >>view;

            if (view == 1)
            {
                aa.show_Data();
            }
        }

        else if (ch == '2')
        {
            int view;
            aa.get_Data();
            aa++;
            cout << endl << "Press 1 To View the data after the post fix increament: ";
            cin >> view;

            if (view == 1)
            {
                aa.show_Data();
            }
        }

        else{
            exit(0);
        }
    }
        return 0;
}