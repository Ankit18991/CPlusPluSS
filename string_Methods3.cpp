#include<iostream>
#include<string.h>
using namespace std;

void concatenate_strings();
class A
{
    char s1[30];
    friend void concatenate_strings();
};

class B
{
    char s2[30];
    friend void concatenate_strings();
};

void concatenate_strings()
{
    A obj1;
    B obj2;

    cout << "Enter string 1: " << endl;
    gets(obj1.s1);

    cout << "Enter string 2 : " << endl;
    gets(obj2.s2);
    

    cout << "String1 = " << obj1.s1 << endl;
    cout << "String2 = " << obj2.s2 << endl;

    // string s3 = obj1.s1.append(obj2.s2);
    // string s4 = obj1.s1 + obj2.s2;           //---> Both will work with '<string>'
    strncat(obj1.s1, obj2.s2,3);
    cout << "The concatenated string  = " << obj1.s1 << endl;
}

int main()
{
    A a;
    B b;
    concatenate_strings();
    return 0;
}
