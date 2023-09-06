// Construtors in Derived Class :-
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Base1
{
    protected:
        int a;
        string s;
    
    public:
        Base1(){
            cout << "Default Constructor of base1 is executed" << endl;
        }
        Base1(int z, int y);
        Base1(int x);       // To display the string after changing the char(s) to the opposite case :)
};

Base1 :: Base1(int z, int y)
{
    z = 0; y = 0;
    cout << endl << "base1 Constructor1 is Called" << endl;
    cout << "Enter the String: " << endl;
    getline(cin , s);

    for (int i = 0 ; i < s.length() ; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            putchar(tolower(s[i]));
        }

        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            putchar(toupper(s[i]));
        }
    }
}


class string_Concatenation_Base2
{
    protected:
        string s1;
        string s2, s3;

    public:
        string_Concatenation_Base2(){
            cout << endl << "Default constructor Of base2 is executed" << endl;
        }
        string_Concatenation_Base2(int b);
};

string_Concatenation_Base2 :: string_Concatenation_Base2(int b)
{
    cout << "Enter The first string : " << endl;
    getline(cin,s1);

    cout << "Enter the second string: " << endl;
    getline(cin,s2);

    s3 = s1 + s2;
    // Or strcat(s1,s2);

    cout << "Our Concatenated strings = "  << s3 << endl;
}

class str_copy_Derived : public Base1, public string_Concatenation_Base2
{
    protected: 
        string s4,s5;

    public:
        str_copy_Derived()
        {
            cout << endl << "THE DEFAULT CONSTRUCTOR OF THE DERIVED CLASS " << endl;
        }

        str_copy_Derived(int v);

        str_copy_Derived(int c, int d,int e) : Base1(c,d), string_Concatenation_Base2(e)
        // We are passing arguments to the base class contructors and passing the call to th Respective base classes
        // Calling base class constructors at once in the derived class(using a derived class object)
        // For ex:  Suppose we have a one parameter contruct in both the derived class and the base classes, then by this method we will be able to call the one parameterised constructors of the base class by using multiple argument constructor of the derived class (here '(int c, int d, int e)', doing constructor overloading. Then we calll easily call the one parameter constructor by creating an object of the class(the derived class))
        {
            cout << "Derived Class Contructor called" << endl;
        }
};

str_copy_Derived:: str_copy_Derived(int v)
{
    cout << "Enter the string to be copied: " << endl;
    getline(cin, s4);

    s5 = s4;
    cout << "Our new string = " << s5 << endl;

}

int main()
{
    str_copy_Derived Utkarsh(25),Ankit(1,2,3);
    // Base1(3,5);
    return 0;
}