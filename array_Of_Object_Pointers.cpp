#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Queue
{
    int is_Empty();
    int is_Full();

    public:
        int *arr;
        int f,r,size;
        void get_Data();
        void enqueue();
        void dequeue();
};

void Queue :: get_Data()
{
    f = 0; r= 0;         
    cout << "Enter The size of the array,whcih will also be the size of the array of objects :) : " << endl;
    cin >> size;
}

int Queue :: is_Full()
{
    if ((r + 1)% size == f)
    {
        return 1;
    }

    else{
        return 0;
    }
}

int Queue :: is_Empty()
{
    if (f == r)
    {
        return 1;
    }

    else{
        return 0;
    }
}

void Queue :: enqueue()
{
    if (is_Full())
    {
        cout << endl<< "Queue Overflow" << endl;
    }

    else{
        r = (r + 1) % (size);
        int a;
        cout << "Enter the Numebr to be Enqueued: " << endl;
        cin >> a;
        arr[r] = a;
        cout << a << " Enqueued Into the Queue :)" << endl;
    }
}

void Queue :: dequeue()
{
    if (is_Empty())
    {
        cout << "Queue Underflow"
             << endl
             << "The Queue Is Empty" << endl;
    }

    else{
        f = (f + 1) % size;
        int dequeue_D = arr[f];
        cout << dequeue_D << " is the Dequeued" << endl;
    }
}


int main()
{
    int size,i;
    char ch;
    Queue *q = new Queue;
    Queue *ptr = new Queue [q -> size];         // Array OF Objects
    //                     [(*q).size];         // But ptr toh phle element/object ko hiin point krega intially ;) 
    Queue *temp1_Ptr,*temp2_Ptr = ptr;
    // TO hold the address in case ptr startes storing another location because of the opertions performed on it :)
    // q -> arr = (int *)malloc(q-> size * sizeof(int));

    
    cout << "\t\t THE MENU \t" <<endl;
    cout << endl << "PRESS 1 TO ENQUEUE " <<endl;
    cout << endl << "PRESS 2 TO DEQUEUE " <<endl;
    cout << endl << "PRESS 3 TO USE THE NEXT ELEMENT OF THE ARRAY OF THE OBJECTS " << endl
                 << "MEANING PRESS 3 TO USE NEXT OBJECT OF THE ARRAY PF OBJECTS" <<endl;
    cout << endl << "PRESS 0 TO QUIT " <<endl;

    for (i = 0 ; i < q -> size ; i++)
    {
        ptr -> arr = (int *)malloc(q-> size * sizeof(int));
        ptr ->get_Data();
        while(1)
        {
            cout << "Enter Your Choice: " << endl;
            ch = getch();

            if (ch == '0')
            {
                return -1;
            }

            else if (ch == '1')
            {
                ptr ->enqueue();
                getch();
            }

            else if (ch == '2')
            {
                ptr ->dequeue();
                getch();
            }

            else if (ch == '3')
            {
                ptr++;
                // To access the next object of the array of objects(cuz ptr is addressing the first address of the array initially i.e., first objetc of the array of objects)
                break;
            }

            else{
                cout << endl << " !!!!!! WRONG INPUT !!!!!!!!" << endl;
            }
        }
        int count;
            cout << "Press 5 to Continue Executing the program: " <<endl;
            cin >> count;
            if (count != 5)
            {
                break;
            }
}
        return 0;
}