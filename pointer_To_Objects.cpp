#include <iostream>
#include <conio.h>
#include <string>
#include<stdlib.h>
using namespace std;

int top = -1;

class stack
{
    int is_Empty(stack *ptr);
    int is_Full(stack *ptr);

public:
    int *arr;
    int size;

    void stack_Push(stack *ptr);
    void stack_Pop(stack *ptr);
};

int stack ::is_Full(stack *ptr)
{
    if (top == ptr->size - 1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int stack ::is_Empty(stack *ptr)
{
    if (top < 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

void stack ::stack_Push(stack *ptr)
{
    if (is_Full(ptr))
    {
        cout << "\n\n STACK OVERFLOW" << endl;
    }

    else
    {
        top++;
        int a;
        cout << "Enter the data to be Pushed into the stack : " << endl;
        cin >> a;
        arr[top]=a;
        cout << endl
             << a << " Pushed into the Stack :) " << endl;
        
        cout << "The array :-" << endl;
        for (int i = 0; i < top ; i++)
        {
            cout << arr[i] << "\t" << endl;
        }
    }
}

void stack ::stack_Pop(stack *ptr)
{
    if (is_Empty(ptr))
    {
        cout << "\n\n STACK UNDERFLOW \n"
             << endl;
    }

    else
    {
        cout << top <<endl;
        int popped_D = arr[top];
        cout << arr[top] <<endl;
        top--;
        
        cout << popped_D << " Popped out of the stack :)" << endl;
    }
}

int main()
{
    char ch;
    stack *ptr = new stack;
    // Since new will return a pointer of the class type/object type after creating the memot=ry of the object. It returns the address of the initialized object in the heap
    // The ' -> ' operator acts as a dereferencing operator
    cout << "Enter the size of the array : " << endl;
    cin >> ptr->size; // Dereferencing the public member using the arrow operator

    ptr->arr = (int *)malloc(ptr->size * sizeof(int));
    

    cout << endl
         << "PRESS 1 TO PUSH" << endl;
    cout << endl
         << "PRESS 2 TO POP" << endl;
    cout << endl
         << "PRESS 0 TO EXIT" << endl;


    while (1)
    {
        cout << "Enter Your choice: " << endl;
        ch = getch();
        if (ch == '0')
        {
            return -1;
        }

        else if (ch == '1')
        {
            ptr->stack_Push(ptr);
            getch();
        }

        else if (ch == '2')
        {
            ptr->stack_Pop(ptr);
            getch();
        }
    }
    return 0;
}
