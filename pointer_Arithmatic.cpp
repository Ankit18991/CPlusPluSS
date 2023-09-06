#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << " Enter the Size of the array : ";
    cin >> size;

    int *arr = (int *)malloc(size * sizeof(int));
    cout << endl << "Enter the Elements In the Array: ";
    for ( int i = 0 ; i < size ; i++)
    {
        cin >> arr[i];
    }

    cout << endl << " Our array is : ";
    for (int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << "\t" ;
    }

    // cout << endl << "The location of the first element of the array = " << arr;
    // cout << endl << "The location of the second element of the array = " << ++arr;
    // cout << endl << "The location of the thirs element of the array = " << ++arr;

    cout << endl << "The location of the 3rd element of the array = " << (arr + 2);
    cout << endl << "The location of the second element of the array = " << (arr + 1);

    
    return 0;
}