#include<iostream>
#include<string>
#include<conio.h>
#include<math.h>
using namespace std;

class SimpleCalculator
{
    protected:
        float a,b;
        char ch;

    public:
        void input_Operations();
        void display();
};

void SimpleCalculator :: input_Operations()
{
    cin >> a;
    cin >> ch;
    cin >> b;
}

void SimpleCalculator :: display()
{
     if (ch == '+')
    {
        cout << " = " << (a + b) << endl;
    }

    else if (ch == '-')
    {
        cout << " = " << (a-b) << endl;
    }

    else if (ch == '*')
    {
        cout << " = " << (a*b) << endl;
    }

    else if (ch == '/')
    {
        cout << " = " << (a/b) << endl;
    }

    else 
    {
        cout << endl << " .......!!! WRONG OPERATION !!!........." << endl;
    }
}

class ScientificCalculator
{
    protected:
        float x,y,z,p,q,r;
        char c;

    public:
        int operations_Display();
};

int ScientificCalculator :: operations_Display()
{
    cout <<endl <<  "Press 1 for sin(x)" << endl;
    cout << "Press 2 for cos(x)" << endl;
    cout << "Press 3 for tan(x)" << endl;
    cout << "Press 4 for x^y " << endl;
    cout << "Press 5 for the log()" << endl;
    cout << "Press 0 To exit out of the calculator" << endl;

    while (1)
    {
        char ch2;
        cout << endl << "YOur Choice: " << endl;
        ch2 = getch();

        if (ch2 == '1')
        {
            cin >> x;
            cout << "sin(" <<x << ") = " << sin(x) << endl;
        }

        else if (ch2 == '2')
        {
            cin >> y;
            cout << "cos(" <<y << ") = " << cos(y)<< endl;
        }

        else if (ch2 == '3')
        {
            cin >> z;
            cout << "tan(" << z << ") = " << tan(z) << endl;
        }

        else if (ch2 == '4')
        {
            cout << endl << "INPUT FORMAT: (x^y)" << endl;
            cin >> p;
            cin >> c;
            cin >> q;
            
            if (c == '^')
            {
                cout << x << " ^ " << y << "= " << pow(p,q) << endl;
            }

            else{
                cout << ".................WRONG INPUT FORMAT............." << endl;
            }
        }

        else if (ch2 == '5')
        {
            cin >> r;
            cout << "log(" << r << ") = " << log(r) << endl;
        }

        else if (ch2 == '0')
        {
            return -1;
        }
    }
}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{

};

int main()
{
    HybridCalculator c1;
    c1.input_Operations();
    c1.display();
    c1.operations_Display();            // For the Scintific Calculator

    return 0;
}