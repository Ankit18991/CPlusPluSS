#include<iostream>
using namespace std;

int count =0;

class Overloading
{
    int a;
    public:
        void get_Data();
        int show_Data();
        void operator=(Overloading);
};

void Overloading :: get_Data()
{
    cout << endl << "Enter the Number: " ;
    cin >> a;
}

int Overloading ::show_Data()
{
    return a;
}

void Overloading :: operator=(Overloading bb)
{
    this -> a = bb.a;
}

int main()
{
    Overloading aa,bb;
    aa.get_Data();
    cout << endl << "The number = " <<aa.show_Data();

    cout << endl << "The Number of the Other class Before Assignment(Grabage val if Not entered through 'cin') = " 
         << bb.show_Data();
    bb=aa;
    cout << endl << "The Number of the Other class after Assignment of '='  = " 
         << bb.show_Data();

    return 0;
}