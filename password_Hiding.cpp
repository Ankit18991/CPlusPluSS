#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

char password[6],name[6], uname[6],upass[6];
int count = 0;

void Pass_Name()
{
    cout << "Enter Your UserName: " << endl;
    cin >> name;

    cout << "Create Your Password: " << endl;
    cin >> password;
}

void check_Password()
{
    char ch;
    int i = 0;
    cout << "\n\t\t\t\t LOGIN PAGE \n";
    
    cout << " \n\t\t Enter Your Password: " << endl;
            while(ch != '\r')
            {
                ch = getch();
                upass[i] = ch;
                cout << "U";
                i++;
            }
        
        for(int k = 0 ; k < strlen(upass) - 1; i++)
        {
            if (upass[i] = password[i])
            {
                count++;
            }
        }

        if (count == strlen(password))
        {
            cout << "The password is correct ."
                << "Login Succesfull :)"<< endl;
        }

        else{
            cout << endl << "Login Unsuccessful";
        }
}

int main()
{
    cout << "\n\t\t\t\t WELCOME TO THE LOGIN PAGE \n";
    Pass_Name();
    check_Password();
    return 0;

}
