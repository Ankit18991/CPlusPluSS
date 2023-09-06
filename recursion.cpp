#include<iostream>
using namespace std;

int myFact(int n)
{
    if ( n <= 1)
    {
        return 1;
    }

    else{
        return n * myFact(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    cout << "\n The Factorial of " << n << " = " << myFact(n) << endl;

    return 0;
}