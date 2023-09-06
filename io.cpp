#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Opening The file:-
    // Firstly reading the created file:-
    ifstream my_Read1;
    my_Read1.open("info.txt",ios::in);
    string reader1;
    while(my_Read1.eof() == 0)
    {
        getline(my_Read1,reader1);
        cout << reader1 << endl;
    }

    my_Read1.close();

    ofstream My_Write;
    My_Write.open("info.txt", ios::app);
    // Opening the file in ios:: out mode :)
    // So that instead of overwriting the previous data, the data I am about to enter  appends to the text file 'info.txt' 's data :)
    My_Write << "Surya \t\t BBA \t\t C \t\t 224098\n";
    My_Write.close();

    ifstream My_read;
    My_read.open("info.txt" ,ios::in);
    string reader;
    cout << endl << "The file After appending a column" << endl;
    while(My_read.eof() == 0)
    {
        getline(My_read,reader);
         cout << reader << endl;
    }

    My_read.close();
    return 0;
}