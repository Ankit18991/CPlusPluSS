#include<iostream>
using namespace std;

class Employee
{
    private:                    // Private Access Modifier: Only be used inside 
                                //   class. Not permissible to be used by any object or function outside the class.
        int bank_Account;
        double account_Balance;

    public:                     // Public Access Modifier: Accesible to Everyone
                                // Accessed Both inside and Outside of the class
        int a;
        int b;
        void bank_Details()
        {
            bank_Account = 330187465;
            account_Balance = 45678.567;
        }

        void display_Details()
        {
            cout << "Accont Number : " << bank_Account << endl;
            cout << "Bank Balance : Rs." << account_Balance << endl;
        }

        int sum(int a, int b);
};

int Employee :: sum(int a , int b)
{
    int c = a + b;
    return c;
}

int main()
{
    Employee Utkarsh;

    Utkarsh.a = 90;
    Utkarsh.b = 98;

    // Utkarsh.account_Balance = 988888; --> Will throw an error cuz account balance is Private class 

    cout<< "The bank details of Utkarsh Are As Follows: \n" << endl;
    Utkarsh.bank_Details();
    Utkarsh.display_Details();
    cout << " The sum of the last two deposits= Rs." << Utkarsh.sum(45000, 98000);
    return 0;
}