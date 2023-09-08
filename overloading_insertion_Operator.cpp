#include<iostream>
#include<string>
using namespace std;

class Overloading;
ostream &operator<<(ostream &os, Overloading aa);

class Overloading
{
    string str;
    friend ostream &operator<<(ostream &os, Overloading aa);
    public:
        void get_String();
};

void Overloading :: get_String()
{
    cout << endl << "Enter Your String: " ;
    getline(cin , str);
    cout << endl << "The entered String = " << str;
}

ostream &operator<<(ostream &os, Overloading aa)
{
    os << aa.str;
    return os;
}

/*
    This works because you have overloaded the << operator for the Overloading class, and you have defined the overloaded operator as a friend function. The friend keyword allows the operator<< function to access the private members of the Overloading class, including the str member.

    So, when you write cout << aa, it calls the operator<< function that you've defined, passing cout as the first argument (the output stream) and aa as the second argument (the Overloading object whose str member you want to output). The overloaded operator<< function then takes care of formatting and outputting the str member to the cout stream.

    In summary, you are not using cout as a reference to call the overloaded function directly. Instead, the << operator is being used to output the Overloading object aa, and the overloaded operator function takes care of the actual output operation
    
*/

int main()
{
    Overloading aa,bb;
    aa.get_String();
    cout << endl << "My string = " << aa << endl;
    // Whenever we are using '<<' operator , the operator is being overloaded.. 
    return 0;
}

/*
    Details About this Code:-

        This C++ code defines a class called "Overloading" and demonstrates operator overloading with the << (stream insertion) operator to work with objects of this class. Let's break down what each part of the code does:

1. Header and Namespace: The code includes necessary headers (iostream and string) and declares the use of the std namespace for convenience.

2. Forward Declaration of Operator Overloading Function: ostream &operator<<(ostream &os, Overloading aa); - This line declares a friend function operator<< that will be used for overloading the << operator to output objects of the "Overloading" class.

3. Definition of the Overloading Class: 
   - The class "Overloading" contains a private member variable str of type string.
   - It has a friend function operator<< declared inside it, which allows the operator<< function outside the class to access its private members.
   - There's a public member function get_String() which is used to input a string from the user and store it in the str member variable.

4. Implementation of get_String(): 
   - This function prompts the user to enter a string and uses getline to read it from the standard input and store it in the str member variable.
   - It also displays the entered string back to the user.

5. Definition of operator<< Outside the Class:
   - This is the actual implementation of the << operator overloading.
   - It takes two parameters: an ostream reference os and an Overloading object aa.
   - It outputs the str member of the aa object to the provided output stream (os) and returns the output stream.

6. main() Function:
   - It creates two instances of the "Overloading" class, aa and bb.
   - It calls the get_String() function for aa, which prompts the user to enter a string and displays it.
   - It then uses the overloaded << operator to print the contents of the aa object using cout.

In simple terms, this code demonstrates how to overload the << operator for a custom class (Overloading) to allow objects of that class to be printed using cout. It creates an object, gets a string input from the user, and then displays that string using the overloaded << operator. The operator overloading makes it possible to use the << operator as if you were printing a built-in data type like a string or integer.

*/