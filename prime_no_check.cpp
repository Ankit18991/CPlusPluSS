#include<stdio.h>
#include<iostream>
using namespace std;

int num = 0;

void check(int n)
{
    if (n < 2){
        cout << "Not Valid " << endl;
    }

    for (int i = 1 ; i <= n ; i++)
    {
        if ((n % i) == 0)
        {
            num++;
        }
    }

    if (num == 2)
    {
        cout << "The number is A Prime Number :) " << endl;
    }

    else{
        cout << "The number is Not a Prime Number :( " << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the Number to be checked: " << endl;
    cin >> n;

    check(n);
    return 0;
}