#include<iostream>
#include<string>
using namespace std;

class A{
    int a;

    public:
        A & set_Data(int a);
        void get_Data();
};

/* void A :: set_Data(int a)
 {
     this -> a = a;
 }    ----> Also correct, does the same job of storing the value of 'a'  */ 

A & A:: set_Data(int a)     // --> USe of Reference Variable
{
    this -> a = a;
    // Since 'this' pointer points to the object which calls the member function.
    // in a way , it means b -> a = a :) . 'this' pointer tells us ki 'b' object ka private data is 'a' (if b is invoking the member function)
    return *this;
}

void A :: get_Data()
{
    cout << "The value of a = " << a << endl;
}

int main()
{
    A b,c;
    b.set_Data(5);
    b.get_Data();
    c.set_Data(6).get_Data();       // Since 'set_data(int a)' returns a function
    return 0;
}