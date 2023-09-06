// 8 : 36
#include<iostream>
#include<conio.h>
using namespace std;

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    else if (n < 0)
    {
        cout << "Not Possible. We can't Find Factorial of negative numbers" << endl;
        exit(0);
    }

    else {
        return (n * factorial(n - 1));
    }
}

int main()
{
    int n;
    float sum = 0.0;
    
    cout << "Enter the Number of terms in the expression : " << endl;
    cin >> n;
    cout << endl << "Factorial = " << factorial(n) << endl;
    for (int i = 1 ; i <= n ; i++)
    {
        sum = sum + float(float(i)/float((factorial(i))));
    }

    for (int j = 1 ; j <= n ; j++)
    {
        cout << j << "/" << j << "!" <<" + ";
        if (j == n)
        {
            cout <<" ...... = " <<endl;
        }
    }
    cout << sum;
    // cout << "The sum of the expression {(1/1!) + (2/2!) + (3/3!) + (4/4!) + .... + n times} = " << sum << endl;
    return 0;
}