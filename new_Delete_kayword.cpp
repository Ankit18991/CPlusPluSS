#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a;
    string s;
    cout << "Enter the string: " << endl;
    getline(cin,s);

    cout << "Enter the value of a: " << endl;
    cin >> a;

    int* ptr = &a;
    cout << "The value at the address pointed by Ptr = " << *ptr << endl;

    // New keyword is used to dynamically allocate Memory in the heap and returns a pointer to the newly allocated and initialized memory(or the address of the newly intialized memory)
    float *p = new float(98.67);
    string *ptr2 = new string(s);

    cout << "The value at the address stored by p = " << *p << endl;
    cout << "The value at the address stored by ptr2 = " << *ptr2 << endl;


    // Intitliasation of the array using 'new' keyword :-
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int *arr = new int[size];
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0 ; i < size ; i++)
    {
        cin >> arr[i];
    }

   


    cout << "Our array :-" << endl;
    for (int j = 0 ; j < size ; j++)
    {
        cout << "\t" << arr[j] << "\t";
    }
    return 0;
}