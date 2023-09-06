#include<iostream>
using namespace std;

class inteGer
{
    int a, b, c, d, e;

    public:
        void input_v()
        {
            cout << "Enter First : " << endl;
            cin >> a;

            cout << "Enter 2nd: " << endl;
            cin>> b;

            cout << "Enter 3rd: " << endl;
            cin >> c;

            cout << "Enter 4th: " << endl;
            cin >> d;

            cout << "Enter 5th: " << endl;
            cin >> e;
        }

        void average()
        {
            float total = a + b + c + d + e;
            cout << total << endl;

            float avg = total / 5;
            cout << "Average = " << avg << endl;
        }
};

int main()
{
    inteGer obj;
    obj.input_v();
    obj.average();
    return 0;
}