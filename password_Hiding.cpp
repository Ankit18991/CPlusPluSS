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
            for (int j = 0 ; i < strlen(password); j++)
            {
                ch = getch();
                upass[i] = ch;
                cout << 'X';
                i++;
            }

            int match = strcmp(upass, password);
            if (match == 0)
            {
                cout << endl << "The Password Is Correct."<< endl
                             << "login Successful :)" << endl;
            }

            else{
                cout << endl << "Wrong Password" ;
            }
        
}

int main()
{
    cout << "\n\t\t\t\t WELCOME TO THE LOGIN PAGE \n";
    Pass_Name();
    check_Password();
    return 0;

}
