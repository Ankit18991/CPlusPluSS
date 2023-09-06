#include <iostream>
using namespace std;

int my_Fibonacci(int n )
{
    if ( n == 1 || n == 2)
    {
        return 1;
    }

    else if (n <= 0)
    {
        cout << endl << "Invalid Postion" ;
    }

    else{
        return my_Fibonacci(n - 2) + my_Fibonacci(n - 1 );
    }

}

int main()
{
    int n;
    cout << "Enter the position of the fibonacci series: " << endl;
    cin >> n;

    cout << "The Element at the positon " << n << " = " << my_Fibonacci(n);
    return 0;
}