#include<iostream>
using namespace std;

class tenant
{
    float money;
    string s;
    float interest;
    static int counter;     // Initializes itself with a 0

    public:
        void monthly_money()
        {
            cout << "How much is the monthly money to be collected from the tenant no. ?: " << counter + 1 << endl;
            cin >> money;

            cout << "Has the tenant given the money?(yes/no) : " << endl;
            cin >> s;

            if (s == "yes")
            {
                cout << "The money is given  :)" << endl;
                counter++;
                cout << "Teenant number " << counter << " is clear" << endl;
            }

            else{
                float principal = money;
                float rate  = 5;
                float month_Of_Delay;

                cout << "\n Enter the number of months of delay in the payment by the tentant: ";
                cin >> month_Of_Delay;

                float yr_money = (month_Of_Delay)/12;

                float si = (yr_money * rate * principal)/100;
                cout << "\n The total money to be given by the Tenant = " << (principal + si);
                counter++;
            }
        }
        static void val()       // Static  function
        {
            cout << "\n THe value of the counter = " << counter;
            // Can only access static variables
        }
};



int tenant :: counter;

int main()
{
    tenant utkarsh;
    utkarsh.monthly_money();

    tenant suraj;
    suraj.monthly_money();

    return 0;
}