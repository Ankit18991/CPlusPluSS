#include<iostream>
#include<string>
using namespace std;

class Bank_Details
{
    string Bank_Name; /* Because we don't want to inherit it. We want the Bank of the every object(individual) To be the same    */
    string CIF_no;

    protected:
        string account_No;
        string account_Holder_Name;
        string DOB;
        string address;
        string phone_No;
        string email;

    public:
        string get_Bank_Name();
        string CIF_No();
        void get_Account_Details();
        void display_Account_Details();
};

string Bank_Details :: get_Bank_Name()
{
    cout << "Enter Bank's Name: " << endl;
    getline(cin,Bank_Name);
    return Bank_Name;
}

string Bank_Details:: CIF_No()
{
    cout << endl << "Enter CIF No. : " << endl;
    getline(cin,CIF_no);
    return CIF_no;
}

void Bank_Details:: get_Account_Details()
{
    cout <<endl << "Account No: " << endl;
    getline(cin,account_No);

    cout << "Customer Name: " << endl;   
    getline(cin,account_Holder_Name);

    cout << "Address: " << endl;
    getline(cin,address);

    cout << "Phone: " << endl;
    getline(cin,phone_No);

    cout << "Email: " << endl;
    getline(cin,email);

    cout << "D.O.B (If minor): " << endl;
    getline(cin,DOB);
}

void Bank_Details:: display_Account_Details()
{
    cout << endl << endl<< "\t\t\t\t Account No : " << account_No << endl;
    cout << endl << "\t\t\t\t Customer Name: " << account_Holder_Name << endl;
    cout << endl << "\t\t\t\t Address: # " << address << endl;
    cout << endl << "\t\t\t\t Phone: " << phone_No << endl;
    cout << endl << "\t\t\t\t Email: " << email << endl;
    cout << endl << "\t\t\t\t D.O.B: " << DOB << endl;
}

class Bank_Details_2 : public Bank_Details
{
    // When a class is being derived Publically, The public Member of the Base class becomes The public memeber of the derived class. And protected members of the base class remains the protected members of the derived class.  

};

int main()
{
    Bank_Details Ujjwal;    // Creating an Object to create the memory of the base class
                            // We will now use the public members of the base class(with protected members of the base class) as public members of the derived class with the (protected memebers of the derived class)
    Bank_Details_2 Utkarsh;
    string bank_Name = Utkarsh.get_Bank_Name();
    cout << endl << "\t\t\t\t Bank Name: " << bank_Name << endl;

    string CIF = Utkarsh.CIF_No();
    cout << endl << "\t\t\t\t CIF: " << CIF;
                    
    Utkarsh.get_Account_Details();
    Utkarsh.display_Account_Details();

    return 0;
}