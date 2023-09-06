#include<iostream>
using namespace std;

int main()
{
    long double n;
    cout<< "\n Enter the Number: ";
    cin>> n;

    if (n == 0 || n == 1)
    {
        cout<< "\n The factorial of the number = 1"; 
    }

    else{
        long double res = 1;
        for (long double i = n; i > 0 ; i--)
        {
            res = i * res;
        }

        cout<< "\n The factorial of the number "<< n << "= " << res;
    }

    return 0;
}