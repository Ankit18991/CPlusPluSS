#include<iostream>
#include<string>
using namespace std;

class Student
{
    float yearly_hostel_charge;
    float monthly_charge;
    float mess_Charge;
    float extras;

    public:
        Student(float a, float c, float d) : yearly_hostel_charge(a), mess_Charge(c), extras(d)
        {
            monthly_charge = yearly_hostel_charge / 12;
            cout << " Yearly Hostel charge of the student = " << yearly_hostel_charge << endl;
            cout << " Monthly Hostel charge Of The student= " << monthly_charge << endl;
            cout << "Monthyl Mess Charge of the student = " << mess_Charge << endl;
            cout << "The extra charges in the hostel over the year = "  << extras << endl;
        }

        ~Student(){
            cout << endl << "Time for Destruction" << endl;
        }
};

int main()
{
    Student Utkarsh(24650, 3499, 2342);
    return 0;
}