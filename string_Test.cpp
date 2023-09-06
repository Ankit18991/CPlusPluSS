#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
   /* int a, b;
    string s;
    int n;
    cout << endl << "Enter the Nnumber of strings: " << endl;
    cin >> n;

    cout << "Enter a and b: ";
    cin >> a>> b;
    cout << a + b;

    ----> In this code there are two character in the input stream before the new line. So, instead of reading(or entering the string value in the variable 's') s,
    this will read the last entered character...

    ----> The getline(cin, s) will read a string from the input stream and store it in the variable named 's'.


    ---->getline() function will read characters from the input stream until it reaches the newLine charcater :) If there are any characters in the input stream before the newLine character ,the getline() function will not read the string ...

    ----> So, To clear the input buffer before using the getline() function , we use the ignore() function of 'cin' class....

    for (int i = 0 ; i < n ; i++)
    {
        cout << endl << "Enter Your string : " << endl;
        getline(cin,s);
        cout << endl << "String = " <<s <<  endl;
    }  */

    string s;
    int n;
    cout << endl << "Enter the Nnumber of strings: " << endl;
    cin >> n;
    cin.ignore();

    for (int i = 0 ; i < n ; i++)
    {
        cout << endl << "Enter Your string : " << endl;
        getline(cin,s);
        cout << endl << "String = " <<s <<  endl;
    }
    return 0;
}