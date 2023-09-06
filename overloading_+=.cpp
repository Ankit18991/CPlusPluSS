/* 
     For Overloading +=,-=,*=,/=, we had to use it as:-
        Overloading aa;
        aa+=5;

    So , for this we took object 'aa' as reference to call += overloading function. And Pass the Argument 5 to assign.
*/

#include<iostream>
#include<conio.h>
using namespace std;

int count = 0;

class Overloading
{
   public:
    int a;
    void get_Data();
    void show_Data();
    void operator+=(int); 
    void operator-=(int); 
    void operator*=(int); 
    void operator/=(int); 
};

void Overloading :: get_Data()
{
    cout << endl << "Enter A Number: ";
    cin >> a;
}

void Overloading :: show_Data()
{
    if (count == 0)
    {
        cout << endl << "The entered Number before The assignment = " << a;
    }

    else{
        cout << endl << "The entered Number after the assignment = " << a;
    }
}

void Overloading :: operator+=(int pass)
{
    this -> a = this -> a + pass;
}

void Overloading :: operator-=(int pass)
{
    this -> a = this -> a - pass;
}

void Overloading :: operator*=(int pass)
{
    this -> a = this -> a * pass;
}

void Overloading :: operator/=(int pass)
{
    this -> a = this -> a / pass;
}

int main()
{
    Overloading aa;
    cout << endl << "Press 1 to Overload +=";
    cout << endl << "Press 2 to Overlaod -=";
    cout << endl << "Press 3 to Overload *=";
    cout << endl << "Press 4 To Overlaod /=";
    cout << endl << "Press 0 To Exit Everything";

    char ch;
    while (1)
    {
        cout << endl << "Enter YOUr choice: " ;
        ch = getch();

        if (ch == '1')
        {
            count = 0;
            int assigned,view;
            cout << endl << "Enter the Number To be assigned with: ";
            cin >> assigned;

            aa.get_Data();
            aa.show_Data();

            aa+=assigned;
            count++;
            cout << endl << "Press 1 To View the Entered Number in the beginning after Assignment: ";
            cin >> view;

            if (view == 1)
            {
                aa.show_Data();
            }
        }

        else if(ch == '2')
        {
            count = 0;
            int assigned,view;
            cout << endl << "Enter the Number To be assigned with: ";
            cin >> assigned;

            aa.get_Data();
            aa.show_Data();

            aa-=assigned;
            count++;
            cout << endl << "Press 1 To View the Entered Number in the beginning after Assignment: ";
            cin >> view;

            if (view == 1)
            {
                aa.show_Data();
            }
        }

        else if (ch == '3')
        {
            count = 0;
            int assigned,view;
            cout << endl << "Enter the Number To be assigned with: ";
            cin >> assigned;

            aa.get_Data();
            aa.show_Data();

            aa*=assigned;
            count++;
            cout << endl << "Press 1 To View the Entered Number in the beginning after Assignment: ";
            cin >> view;

            if (view == 1)
            {
                aa.show_Data();
            }
        }

        else if (ch =='4')
        {
            count = 0;
            int assigned,view;
            cout << endl << "Enter the Number To be assigned with: ";
            cin >> assigned;

            aa.get_Data();
            aa.show_Data();

            aa/=assigned;
            count++;
            cout << endl << "Press 1 To View the Entered Number in the beginning after Assignment: ";
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