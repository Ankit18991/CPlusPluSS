#include<iostream>
#include<string>
using namespace std;

class binary
{
    public:
        void get_Binary();
        void ones_Compliment();
        void display_Ones_Compliment();

    private:
        string s;
        void check_Binary();
};

void binary :: get_Binary()
{
    cout << "Enter the Binary Number : " << endl;
    cin >> s;
}

void binary :: check_Binary()
{
    for (int i = 0 ; i < s.length() ; i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "The Number is not a Bianry Number" << endl;
            exit(0);
        }
    }
}   

void binary :: ones_Compliment()
{
    // ...Now we don't need to use it in the main function and by the way we could not use it in the main function even if we tried to...

    check_Binary();                     // ......nesting of member function......
    for (int i = 0 ; i < s.length() ; i++)
    {
        if (s.at(i) == '1' )
        {
            s.at(i) = '0';
        }

        else
        {
            s.at(i) = '1';
        }
    }
}

void binary :: display_Ones_Compliment()
{
    for (int i = 0 ; i < s.length() ; i++)
    {
        cout << s.at(i);
    }

    cout << endl;
}

int main()
{
    binary b1;
    b1.get_Binary();
    cout << "Ones Compliment of the binary number is displayed below: "<< endl;
    b1.ones_Compliment();
    b1.display_Ones_Compliment();

    return 0;
}