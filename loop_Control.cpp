#include<iostream>
using namespace std;

void while_Loop()
{
    int num = 1, res = 1;
    cout << "Printing the table of a number upto 20" << endl;
    cout << "Enter the number for the table" << endl;
    cin >> num ;
    int i = 1;
    while ( i <= 10)
    {
        res = i * num;
        cout << res << "\t";
        i++;
    }

    cout << endl << "The table of " << num << "is printed using" << endl ;
}

void for_Loop()
{
    cout << "Printing the Sum of first n natural numbers using for loop" << endl;
    int n = 1;
    int res = 0;
    
    cout << "Enter the Number of First natural numbers You wanna add : ";
    cin >> n;

    for (int i = 1 ; i <= n ; i++)
    {
        res = res + i;
    }

    cout << endl << "The sum of first " << n << " Natural numbers using for loop= " << res ;
}

// void infinite_While_Loop()
// {
//     int i = 0;
//     while(true)
//     {
//         cout << i << endl;
//         i++;
//     }
// }

// void infinite_For_Loop()
// {
//     int i = 0;
//     for ( ; ; )
//     {
//         cout << i;
//         i++;
//     }
// }

void do_While_Loop()
{
    int i = 100;
    do {
        cout << endl << "Do this task at first Without checking the condition Specified";
        cout << endl << i << endl;
    } while(i < 10);

}

int main()
{
    // Funtion calls :-
    while_Loop();
    for_Loop();
    do_While_Loop();
    return 0;
}
