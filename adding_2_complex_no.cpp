#include<iostream>
using namespace std;

int count = 1;
                                                                
class Complex
{
    int real, imaginary;
    public:
        Complex(){
            real = 0;
            imaginary =0;
        }
        Complex(int a, int b)
        {
            real =a;
            imaginary = b;
        }
        Complex operator+(Complex C);
        void show_number();
};

void Complex :: show_number()
{
    if(count == 1)
    {
        cout << endl
            << "The Number " 
            << count << " Complex Number = "
            << real << " + "
            << imaginary << "i" << endl;

        count++;
    }

    else{
        cout << endl 
             << "Our Final Complex Number = "
             << real << " + "
             << imaginary << "i"
             << endl;
    }

}

Complex Complex :: operator+(Complex C)
{
    int r, i;
    cout << endl << "Enter the Real Part of 2nd Complex Number: ";
    cin >> r;

    cout << endl << "Enter the Imaginary Part of 2nd Complex Number: ";
    cin >> i;

    Complex D(r,i);
    D.show_number();
    Complex E((D.real + C.real),(D.imaginary+C.imaginary));
    return E;
}

int main()
{
    int i,r;
    cout << endl << "Enter the Real Part of the 1st Complex Number: " ;
    cin >> r;

    cout << endl << "Enter the Imaginary Part of the 2nd complex Number: " ;
    cin >> i;

    Complex A(r,i),B,C;
    C = B+A;

    C.show_number();
    return 0;
}