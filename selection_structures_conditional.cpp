#include<iostream>
using namespace std;

void if_()
{
    int choice;
    cout<< "Type 1 If You are married" << endl << "Type 2 If You are Unmarried" << endl;
    
    if (choice == 1)
    {
        cout<< "Marrietal Status: MARRIED" << endl;
    }

    if (choice == 2)
    {
        cout<< "Marrietal Status: UNMARRIED/SINGLE" << endl;
    }
}

void if_else_Else_if()
{
    int age;
    cout << "Enter Your Age For Driver's License Application: " << endl;
    cin>> age;

    if (age < 18)
    {
        cout << "You're Underage." << endl << "You can't Apply For driver's license." << endl;
    }

    else if (age == 18)
    {
        cout << "Under Your Parents Observation , You can apply" << endl;
    }

    else{
        cout << "You're Eligible TO Apply" << endl;
    }
}

void switch_case()
{
    int ch;
    cout << "Enter Your choicen(Press 1): ";
    cin >> ch;

    switch(ch)
    {
        case 1:
            int a;
            cout << "Enter Your Age: "<< endl;
            cin >> a;

            if (a < 13)
            {
                cout << "You are a child." << endl;
            }

            else if (a >= 13 && a<=19)
            {
                cout << "You are a Teenager." << endl;
            }
            else{
                cout << "You Are An Adult." << endl;
            }
            break;

        default:
            cout << "Wrong Choice" << endl;
            break;
    }
}

int main()
{
    // Function calling

    if_();
    if_else_Else_if();
    switch_case();

    return 0;
}