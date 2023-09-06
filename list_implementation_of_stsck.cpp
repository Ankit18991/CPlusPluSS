#include<iostream>
#include<string>
#include<algorithm>
#include<list>

/*
    Encryption decryptio n using c++ vectors or lists
    Reversing and Sorting all the string elements of the list with string as the data
    Do the same thing as this program does in the IDE using lists
*/

using namespace std;
string expression;
char storer1;

template <typename T1>
void get_User(T1);

template <typename T> 
class stack
{
    private:
        string user;
        friend void get_User();
    public:
        string data;
        int top;
        stack()
        {
            top = -1;
        }

        void push(list<T> &);
        void pop(list<T> &);
};

template<typename T1>
void get_User(T1 any_Random_variable)
{
    cout << endl << "Enter Your name: " << endl;
    stack<T1> stk1;
    // cin.ignore();
    getline(cin, stk1.user);
} // Function Template

// size of l will be = size of expression
template<typename T>
void stack<T> :: push(list<T> &l)
{
    cin.ignore();
    list<T> :: iterator it;
    for (int i = 0 ; i < expression.size() ; i++)
    {
        *it = expression[i];
        it++;
    }
}

template<typename T>
void stack<T> :: pop(list<T> &l)
{
    
}

template <typename T>
void stack<T> :: pop(list<T> &l)
{
    for (int i = 0 ; i < (expression.size() / 2) ; i++)
    {
        

    }    
}


