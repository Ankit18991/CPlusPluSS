#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

// int count = 0;
int no_Of_Iterations = 0;
int counter = 0;
int k = -1;
string str;
string repitition_Storer;

void comp(string s);

int main()
{
    int i, j,l = -1;
    cout << "Enter the string : " << endl;
    // getline(cin, str);
    cin >> str;
    cout << endl
         << "The length of the string= " << str.length() << endl;

    // we have to pass the characters in such a such a way that they don't repeat in a way
    for (i = 0; i < str.length() - 1; i++)
    {
        no_Of_Iterations++;
        counter = 0;
        k++;
        for (int j = i + 1; j < str.length(); j++)
        {
            // if (counter > 0 && str[j] == str[i])
            // {
            //     continue;
            // }

            
            if (str[i] == repitition_Storer[k] || str[i] == repitition_Storer[k - 1] || str[i] == repitition_Storer[k - 2] || str[i] == repitition_Storer[k - 3] || str[i] == repitition_Storer[k - 4] || str[i] == repitition_Storer[k - 5] || str[i] == repitition_Storer[k - 6] || str[i] == repitition_Storer[k - 7] || str[i] == repitition_Storer[k - 8] || str[i] == repitition_Storer[k - 9] || str[i] == repitition_Storer[k - 10])
            {
                continue;
            }
            

            if (str[j] == str[i])
            {
                // counter++;
                l++;
                repitition_Storer[l] = str[j];
            }
        }
    }

    // for (int u = 0; u < l; u++)
    // {
    //     comp(repitition_Storer[u]);
    //     // getch();
    // }

    
    comp(repitition_Storer);
    return 0;
}

void comp(string s)
{
    int m = 0;
    int count = 0;
    cout << "Length of the other string = " << s.length() << endl;
    
    for ( m = 0 ; m < s.length() ; m++)
    {
        for (int n = 1 ; n < str.length() ; n++)
        {
            if (str[n] == s[m])
            {
                count++;
            }
        }
        cout << "No of times " << s[m] << " is repeated in the string = " << count << endl;
        count = 0;
    }   
}
