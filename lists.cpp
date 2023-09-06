#include <iostream>
#include <list>
#include <string>
#include <algorithm>
/* TO sort() the list with string as the data , use this header file :)*/
using namespace std;

/*
    NOTE:-
        1. We can't pass string as a data type in the template argument. We can pass it be giving <std::string> :) 
*/

void display(list <int> &l)
{
    list <int> :: iterator iter;
    cout << endl 
         << "Our list is displayed below:- " << endl;
    for (iter = l.begin() ; iter != l.end(); iter++)
    {
        cout << *iter << "  ";
    }
}

template< typename T > 
void insert_sec_List(list <T> &l2, typename list <T> ::  iterator itr)
{
    char user_Choice;
    itr = l2.begin();
    
    int count =0,num1,num2;
    cout << endl << "How many strings You want to Insert: " ;
    cin >> num1;
    cin.ignore();
    // Adding this line to clear the newline character :), So that getline() can actully work
    string s;
    

    for (int i = 0; i < num1 ; i++)
    {
        count++;
        cout << endl << "Enter string no. " << count << " : " ;
        cin >> *itr;
        itr++;
    }
    // cin >> *itr; --> Also Possible
    cin.ignore();
    getline(cin, s);
    *itr = s;
    itr++;

    // Sorting
    l2.sort();
    l2.reverse();

    cout << endl 
         << "Our list is displayed below:- " << endl;
    for (itr = l2.begin() ; itr != l2.end(); itr++)
    {
        cout << *itr << "  ";
    }

    
}

int main()
{
    int list_element;
    char users_choice;
    list <int> lst;
    for (int i = 0 ; i < 5 ; i++)
    {
        cout << endl << "Enter the element: ";
        cin >> list_element;
        lst.push_back(list_element);

        if ( i >= 4)
        {
            cout << endl << "Do You want to Insert more elements in the list(y / n): ";
            cin >> users_choice;

            if (users_choice == 'y')
            {
                i = 3;
            }

            else{
                break;
            }
        }
    }
    display(lst);

    // For list 2;
    list <std:: string> l(4);

    // Mention the size of the list while filling it using iterator Pointer :)x
    list <std:: string> :: iterator i;
    char *str;
    insert_sec_List(l, l.begin());
    lst.sort();
    display(lst);
    l.sort();
    

    return 0;
}