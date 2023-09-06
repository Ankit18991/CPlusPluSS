/* Points to rembers: when We write the line cc = aa + bb (all three Are Objects)
        We are actually using aa as a reference to call the operator '+' and we peass bb as the argument. */

/*
    NOTE: We can also Overload -,/,* using the same technique
    (Calculating mean value of the everage using the operator Overloading)

    2. We can't Give two Parameters to the Function of operator Overlaoding
*/

#include<iostream>
using namespace std;

int count = 0;

class PlusOperator_Overloading
{
    float a, b, c, d, avr;
    public:

        float mean_Of_Average;
        void get_Data();
        void average();
        void show_Average();
        PlusOperator_Overloading operator+(PlusOperator_Overloading);
};

void PlusOperator_Overloading :: get_Data()
{ 
    count++;
    cout << endl << "Enter the Numbers for Object Number " << count << " : ";
    cin >> a>> b >> c >> d;
}

void PlusOperator_Overloading :: average()
{
    avr = (a + b+ c + d)/4;
}

void PlusOperator_Overloading :: show_Average()
{
    cout << endl << "Average for Object number " << count << " = " << avr << endl;
}

PlusOperator_Overloading PlusOperator_Overloading  ::  operator+(PlusOperator_Overloading bb)
{
    PlusOperator_Overloading cc,dd;
    cc.get_Data();
    cc.average();
    
    dd.get_Data();
    dd.average();

    dd.mean_Of_Average = (this->avr + cc.avr + dd.avr + bb.avr) / 4;
    return dd;
}

int main()
{
    PlusOperator_Overloading aa, bb, cc;
    aa.get_Data();
    aa.average();

    bb.get_Data();
    bb.average();

    cc = aa+bb;     // Overloaded '+'
    cout << endl << "The mean of averages of the all the Objects = " << cc.mean_Of_Average;
    return 0;
}