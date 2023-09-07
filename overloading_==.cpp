// IF the Number belongs to fibonacci series , the operator Gets Overloaded

#include<iostream>
using namespace std;

int count = 0,counter=0;

class Overloading
{
    int num;
    public:
        void get_Data();
        void show_Data();
        int operator==(Overloading &);
};

void Overloading :: get_Data()
{
    cout << endl << "Enter The Number to Check: " ;
    cin >> num;
}

void Overloading :: show_Data()
{
    if (count == 0 )
    {
        counter++;
        cout << endl << "The Initial value of object number" << counter 
             << "(Garbage Value if no data is entered)"
             << " = " << num;
    }

    else{
        cout << endl << "Yay! Your number is in the Fibonacci series.";
        cout << endl << "The New Value of Number after overloading object no" << counter
             << " = " << num;
    }
}

int Overloading :: operator==(Overloading &cc)
{
    int n;
    cout << endl << "Enter the Number of terms You want in fibonacci series: ";
    cin >> n;

    cout << endl << 0;
    cout << "\t\t ";
    cout << 1;
    cout << "\t\t";

    int *fibonacci_Storer = new int[n+2];
    fibonacci_Storer[0] = 0;
    fibonacci_Storer[1] = 1;

    int a=0,b=1,c;
    for (int i = 2; i < n  ; i++)
    {
        c = a +b;
        cout << c << "\t\t";
        fibonacci_Storer[i] = c;

        a = b;
        b = c;
    }

    for (int j = 0 ; j < n ; j++)
    {
        if (this -> num ==  fibonacci_Storer[j])
        {
            cc.num = this -> num;
            count++;
            return 1;
            break;
        }

        if (j == n - 1 && this -> num != fibonacci_Storer[j])
        {
            return 0;
        }
    }
}

int main()
{
    Overloading aa,bb;
    aa.get_Data();
    aa.show_Data();

    bb.show_Data();

    if (aa == bb)       // It means if the overloading function returns 1
    {
        bb.show_Data();
        cout << endl << "Ha ha Got ya@ !" ;
        
    }       // The Actual overloading happen if The entered Number belongs to Fibonacci series :)

    else{
        cout << endl << "I am Not interested in the inputs You just entered :(";
    }
    return 0;
}