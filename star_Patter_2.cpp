#include<iostream>
using namespace std;

int main()
{
    /*
                    1
                2   3   2
            3   4   5   4   3
        4   5   6   7   6   5   4
    
    */
   int i = 1, a = 0;
   while ( a < i)
   {
        cout << i << "\t";
        a++;
        if (a == i )
        {
            cout << endl << i++;
            cout << i;
        }
   }
}