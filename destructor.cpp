#include <iostream>
using namespace std;

int count = 0;

class Patient
{
    float hospital_Fee_Per_day;
    int no_Of_Days_Of_Stay;

public:
    Patient()
    {
        count++;
    }
    Patient(Patient &obj, int x, float z)
    {
        count++;
        cout << "Entering the public Domain/Section. Constructor number" << count << endl;
        cout << "Number of days of stay of the patient = " << x;
        cout << endl
             << "Leaving Contructor number" << count << endl;
        cout << "Total Fees The patiend Has to pay = " << float(x) * z;
        cout << "Leaving constructor Number" << count << endl;
    }

    Patient(int x)
    {
        count++;
        cout << "Entering the constructor number" << count << endl;
        no_Of_Days_Of_Stay = x;
        cout << "No of days of stay= " << x;
    }

    ~Patient() // Destructor To free Memory Of the object Not In further use. NO argumenmts ,no return value
    {
        cout << "The destructor is being executed. It's Invoked. :| :| :| :| " << endl;
        cout << "Object num" << count << " has been destroyed" << endl;
        count--;
    }
};

int main()
{
    cout << endl
         << "Entering the main function and Creating out first object" << endl;
    Patient A;
    cout << "Creating Our second object" << endl;

    int days_Of_Stay_Of_Patient;
    float hospital_Fee_Per_day;

    cout << "Enter the days of stay of the patient in the hospital: " << endl;
    cin >> days_Of_Stay_Of_Patient;

    cout << "Enter the Hospital fee per day of the patient: " << endl;
    cin >> hospital_Fee_Per_day;

    Patient B(A, days_Of_Stay_Of_Patient, hospital_Fee_Per_day);

    {
        cout << endl
             << "Creating the Two block objects(Limited only to the block)" << endl;
        Patient C, D;
        cout << endl
             << "As soon as the block end , the compiler will find no use of C and D, so it will Invoke the Destructor To free the memory of the object C and D(which Have no further use)" << endl;
    }

    cout << endl
         << " Making the fourth Object" << endl;
    Patient E(days_Of_Stay_Of_Patient);

    cout << endl
         << "Leaving the main Fuction after the creation of the  object num." << count<< endl;
    cout << endl
         << "Since now there is gonna be no use of any of the two Contructors, the compiler will detect their no fursther use and invoke the destructor" << endl;
    return 0;
}