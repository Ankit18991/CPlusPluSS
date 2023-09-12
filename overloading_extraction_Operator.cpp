#include<iostream>
#include<string>
using namespace std;

class Overloading;
istream& operator>>(istream &is, Overloading&);

class Overloading
{
    string str,str1;
    friend istream& operator>>(istream &is, Overloading&);
    public:
        void display(Overloading &obj);
};

istream& operator>>(istream &is, Overloading &aa)
{
    cout << endl << "Enter the string 1: ";
    is >> aa.str;

    cout << endl << "Enter the string 2: ";
    is >> aa.str1;
    return is;
}
void Overloading :: display(Overloading &obj)
{
    cout << endl <<"Our entered string 1= " << obj.str;
    cout << endl << "Our Entered string 2 = " << obj.str1;
}

int main()
{
    Overloading aa,bb;
    cin >> bb;                  // Being Overloaded Here :)
    bb.display(bb);
    
    return 0;
}