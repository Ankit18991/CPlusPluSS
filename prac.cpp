#include<iostream>
using namespace std;

int main()
{
    int n = 5 ; // Number of rows
    int a = 1;
    for (int i = 1 ; i <= 5 ; i++)
    {
        cout << "\n";
        for (int j = 1 ; j <= n ; j++)
        {
            cout << j << "\t" ;
        }
        cout << "\n";
        n--;

      //n--;
      //a--;
    }

    for (int k = 4 ; k > 0 ; k--)
    {
        cout << "4    3    2    1" << endl;
        for (int s = 4 ; s > 0 ; s--)
        {
            cout << s << "\t";
        }
    }
    return 0;
}