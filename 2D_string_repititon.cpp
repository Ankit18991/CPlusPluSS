#include<string>
#include<iostream>
using namespace std;

int count = 0;

class A
{
    public:
        string str1,str2;
        void matching();
        void matching(string str3[3][5]);
};

void A :: matching()
{
    cout << "Enter string1: " << endl;
    getline(cin,str1);

    cout << "Enter string2: " << endl;
    getline(cin,str2);

    int val = str1.compare(str2);
    if (val == 0)
    {
        cout << "The strings match :)" << endl;
    }

    else{
        cout << "The strings do not match :(" << endl;
    }
}

void A :: matching(string str3[3][5])
{
    string search;
    cout << "Enter the string to be searched in the 2D Array of strings: " << endl;
    getline(cin, search);

    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0 ; j < 5 ; j++)
        {
            if (str3[i][j] == search)
            {
                count++;
            }
        }
    }

    if (count > 0)
    {
        cout << "The String is present in the 2D Array in strings " << count << " times :)" << endl;
    }

    else{
        cout << "The entered string is not present in the array of strings :(" << endl;
    }
}

int main()
{
    A a;
    a.matching();
    string str4[3][5] = {"suraj","utkarsh","ankit","utkarsh","gaurav"};
    a.matching(str4);
    return 0;
}