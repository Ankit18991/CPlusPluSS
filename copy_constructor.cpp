#include<iostream>
using namespace std;

class calculator
{
    int a;
    float b;
    public:
        calculator()
        {
            a = 0 ; 
            b = 0 ;
            // cout << "a = " << endl;
            // cout << "b = " << endl;
        }

        calculator(int x, int y)
        {
            a = x;
            b = y;
            int z = (a + b);
            cout <<endl << "The sum = " << z << endl;
        }

        calculator(int x, float y)
        {
            a = x;
            b = y;
            // float z = float(x) * y;     ---> This is also possible
            float z = float(a) * b;
            cout << "The multiplication = " << z << endl;
        }

        calculator(calculator &obj) // While passing class parame. to constructor ,pass reference of the class
        {
            a = obj.a;
            b = obj.b;          // Because we want to create an object's copy 
        }

        void view_Data(){
            cout << "a = " << a << endl;
            cout << " b = " << b << endl << endl;
        }
        
};

int main()
{
    calculator sum1, sum2 ,multiply1, multiply2;
    int a, b;
    float z;

    cout << "Enter the value of x : " << endl;
    cin >> a;

    cout << "Enter the value of y : " << endl;
    cin >> b;

    cout << "Enter the value of z(in floating point): " << endl;
    cin >> z;

    sum1 = calculator(a,b);     //After declaring sum1 above u cant just write 'sum1(x,y)-->error
    multiply1 = calculator(a,z);

    // copying sum2 to sum1;
    sum2 = calculator(sum1);
    sum2.view_Data();

    // copying multiply2 to multiply1
    multiply2 = calculator(multiply1);
    multiply2.view_Data();

    return 0;
}
