#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

class Node          // Just like ' struct node{}; '
{

    public:
        int data;
        Node *next;
        
        int is_Full();
        int is_Empty();
        virtual void display()
        {
            cout << "I am a Virtual fuction" << endl;
        }
};

Node *top = NULL;

int Node :: is_Empty()
{
    if (top == NULL)
    {
        return 1;
    }

    else{
        return 0;
    }
}

int Node :: is_Full()
{
    Node * ptr = new Node;
    if (ptr == NULL)
    {
        return 1;
    }

    else{
        return 0;
    }
}

class Stack_Push : public Node
{
    public:
        void push();
        void pop();
        void display();
};

void Stack_Push :: push()
{
    if(is_Full())
    {
        cout << endl << "The stack is Full"
                     << endl
                     << "Stack Overflow :( "<< endl;
    }
  
    else{
        Node * ptr = new Node;
        cout << "Enter the Data to be Pushed: " << endl;
        cin >> ptr->data;
        
        if(top == NULL)
        {
            top = ptr;
            top -> next = NULL;
            cout << top -> data << " Pushed Into the stack :)" << endl;
        }

        else
        {
            ptr -> next = top;
            top = ptr;    
            cout << top -> data << " Pushed Into the stack :)" << endl;    
        }
    }
}

// Well You can do better with multiple Inheritance if You wanna Implement any data structure, or single or hierarchical is also good...
void Stack_Push :: pop()
{
    if(is_Empty())
    {
        cout << endl << "Stack Underflow" << endl;
    }

    else{
        Node * ptr = top;
        top = top -> next;
        ptr -> next = NULL;
        cout << ptr ->data << " Popped from the stack " << endl;
        delete ptr;
    }
}

void Stack_Push :: display()
{
    Node *ptr = top;
    cout << "\n Stack Displayed below: " << endl;
    while(ptr != NULL)
    {
        cout << "\t" << ptr -> data;
        ptr = ptr -> next;
    }
    cout << endl;
}

int main()
{
    Node node;
    Stack_Push *accessor = new Stack_Push;
   /* Stack_Push s;
    Node *ptr = &s; */

    /*
        If the push and pop would be the memenber of the base class (with virtual function),
        then we would be able to store the address of the derived class in the base class, like in the above two lines, but since these functions are in the derived class we can really do that in order to implement stack properly.
    */

    cout << endl << "Press 1 to Push The data Into the Stack :)" << endl;
    cout << endl << "Press 2 to Pop The data from the Stack :)" << endl;
    cout << endl << "Press 3 to Display the data In the Stack :)" << endl;
    cout << endl << "Press 0 to Quit Performing any operation :)" << endl;

    char ch;
    while(1)
    {
        cout << endl << "Enter Your choice: " << endl;
        ch = getch();

        if (ch == '1')
        {
            accessor -> push();
            getch();
        }

        else if (ch == '2')
        {
            accessor -> pop();
            getch();
        }

        else if (ch == '3')
        {
            accessor ->display();
            getch();
        }

        else
        {
            return -1;
        }
    }
    return 0;
}