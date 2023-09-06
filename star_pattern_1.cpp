#include<iostream>
using namespace std;

int main()
{
    /*   *
         * *
         * * *
         * * * *
         * * * * *  */
    
    int b = 5;
    for (int i = 1 ; i <= 5 ; i++)
    {
        
        for (int j = b ; j <= 5 ; j++)
        {
            cout << "* \t";
        }
        b--;
        cout << "\n";
    }
    return 0;
}