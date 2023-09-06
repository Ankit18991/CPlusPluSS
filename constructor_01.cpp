#include<iostream>
using namespace std;

class A
{
    float expanditure;
    float pocket_Money;
    float money_Saved_Every_Month;

    public:
        A(); // Constructor Declaration and Has the same name as that of class;
        void get_Details()
        {
            cout << "Enter Your Monthly Pocket-Money: " << endl;
            cin >> pocket_Money;

            cout << "Enter Your Monthly Expenditure: " << endl;
            cin >> expanditure;

            money_Saved_Every_Month = (pocket_Money - expanditure);
            cout << "Money Saved By You = " << money_Saved_Every_Month;
        }
        
};

A :: A()        // No need to give the return type of the fucntion if it is a constructor
{               // Intializes and invokes as soon as the object is created
    pocket_Money = 0;
    cout << "Pocket Money In contructor ,initialized with " << pocket_Money << endl;

    expanditure = 0;
    cout << "Expanditure in constructor ,initialized with " << expanditure << endl;

    money_Saved_Every_Month = 0;
    cout << "Money saved by you per month ,initialized with " << money_Saved_Every_Month << endl;
}

int main()
{
    A utkarsh;
    // If we just Create 'Utkarsh' object , It invoked and called the conturctor Function
    utkarsh.get_Details();
    return 0;
}