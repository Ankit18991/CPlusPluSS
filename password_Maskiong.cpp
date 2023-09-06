#include<iostream>
#include<conio.h>
#include<string>
#include<vector>
using namespace std;

string upass, uname, password, name;
int i = 0, count = 0;

template <typename T> 
class Vecs{
    public:
        void password_Encryptionn()
        {
            cout << endl << "Create a Username: " << endl;
            getline(cin , uname);

            cout << endl << "Create a Password: " << endl;
            getline(cin ,upass);
        }

        void password_Matching(vector<T> & , typename vector<T> :: iterator iter);
};

template < typename T >
void Vecs<T> :: password_Matching(vector<T> & v, typename vector<T> :: iterator iter)
{
            char ch;
            cout << endl
                 << "For Login, Enter Your password: " << endl;

            while(ch != '\r')   // Until the user Presses 'Enter'
            {
                ch = getch();
                cout << "X";
                name[i] = ch;
                v.push_back(ch);
                i++;
            }

            for (int k = 0 ; k < v.size() ; k++)
            {
                if(v[k] == upass[k])
                {
                    count++;
                }
            }

            if (count == upass.length())
            {
                cout << endl << "The passwords match" 
                        << endl << "User Login Successful"
                        << endl;
            }

            else{
                cout << endl 
                     << "PassWord error !" << endl;
            }
}

int main()
{
     vector<char> vec1;
     // Lets make iterator for vec1 vector container :)
     vector<char> :: iterator iter = vec1.begin();
     Vecs<char> v1;
     v1.password_Encryptionn();
     v1.password_Matching(vec1,iter);
     return 0;
}