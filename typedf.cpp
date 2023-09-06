#include<iostream>
using namespace std;

typedef struct Employee
{
    int id;
    float salary;
}worker;

// Defining the Type of the structure

int main()
{
    worker utkarsh;
    utkarsh.id = 225087;
    utkarsh.salary = 10000;

    cout << "Utkarsh's ID = " << utkarsh.id << endl;
    return 0;

}