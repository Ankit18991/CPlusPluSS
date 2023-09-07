#include<iostream>
using namespace std;

class Overloading
{
    int a;
    public:
        Overloading(){
            a= 0;
        }

        Overloading(int a)
        {
            this->a = a;
        }

        void show_data()
        {
            cout << "\n The value = " << a;
        }

        int operator==(Overloading);
};

int Overloading :: operator==(Overloading aa)
{
    if (this -> a == aa.a)
    {
        return 1;
    }

    else{
        return 0;
    }
}

int main()
{
    int a,b;
    cout << endl
         << "Enter the Number to be assigned to the member variable of 1st Class To be declared: " ;

    cin >> a;

    cout << endl
         << "Enter the Number to be assigned to the member variable of 1st Class To be declared: " ;

    cin >> b;

    Overloading aa(a),bb(b);

    if (aa == bb)
    {
        cout << endl <<"The value of the member Variable of both the objects are equal :)";
    }

    else{
        cout << endl << "The value of the member variable of both the objects are not equal";
    }
    return 0;
}