#include <stdio.h>
#include<iostream>
#include <conio.h> // for getch()
using namespace std;

int count = 0;

int main() {
    string password; 
    char ch;
    string upass;
    upass = "!loveisblind";
    int i = 0;

    cout <<"Enter Password: "<<endl;

    while (1) {
        ch = getch(); 
        if (ch == '\r') 
            break;
         else {
            if (i < upass.length()) {
                password[i] = ch;
                i++;
                cout<<"X";
            }
        }
    }

    password[i] = '\0'; // add null terminator to mark end of string

    cout<< "\nPassword entered: %s\n" << password;

    for (int j = 0 ; j < upass.length() ; j++)
    {
        if (password[j] == upass[j])
        {
            count++;
        } 
    }
    cout << "upass.length() = " << upass.length() << endl;
    if ( count == upass.length())
    {
        cout << "Access Granted :)" ;
    }

    else{
        cout << "Access Denied :( ";
    }

    return 0;
}