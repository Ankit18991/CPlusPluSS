#include<iostream>
#include<conio.h>
using namespace std;

class Base_Array
{

    protected:
        Base_Array(){
            cout <<endl << "DC of Base" << endl << endl;
        }
        int size;
        int *arr;
        int capacity;
        int more;
};


class Derived_ADTOperations : public Base_Array
{
    public:
        Derived_ADTOperations(){
             cout <<endl << "DC of Derived" << endl << endl;

        }
        void creation();
        void insertion(int i);           // Insertion
        void deletion();   // Deletion
        void display();         // Display
};

void Derived_ADTOperations :: creation()
{
     cout << "Enter the size of the array : " << endl;
    cin >> size;

    cout << "Enter the Number of elements You wanna Insert in the array : " << endl;
    cin >> more;
    capacity = (size + more);

    arr = new int[capacity];        // Dynamic Memory Allocation
    cout << "Enter the Elements in the array : " << endl;
    for (int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }
}

 void Derived_ADTOperations :: insertion(int i)
{
    int index;
    cout << "Enter the Index at Which You wanna Insert : " << endl;
    cin >> index;

    size++;

    for (int i = size-1; i > index ; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[index] = i;
}

void Derived_ADTOperations :: deletion()
{
    int index2;
    cout << "Enter the index at which You wanna Delete The element: " << endl;
    cin >> index2;

    for (int i = index2 ; i < size-1 ; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
}

void Derived_ADTOperations:: display()
{
    cout << "Our array :- " << endl;
    for (int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << "\t"; 
    }
    cout << endl;
}

int main()
{
   
    Derived_ADTOperations * ptr_obj = new Derived_ADTOperations;
    cout << "Press 5 for creation of array" << endl;
    cout << "Press 1 For insertion" << endl;
    cout << "Press 2 for deletion" << endl;
    cout << "Press 3 for display" << endl;
    cout << "Press 0 to exit the execution" << endl;

    char ch;
    while(1)
    {
        cout << "Enter Your choice: " << endl;
        ch = getch();

        if (ch == '5')
        {
            ptr_obj -> creation();
            getch();
        }

        else if (ch == '1')
        {
            ptr_obj -> insertion(34);
            getch();
        }

        else if(ch == '2' )
        {
            ptr_obj -> deletion();
            getch();
        }

        else if (ch == '3')
        {
            ptr_obj ->display();
            getch();
        }

        else{
            return -1;
        }
    }
    
    return 0; 
}