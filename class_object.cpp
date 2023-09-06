#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Student
{
    public:
     string name;
    int id,rollNo;
    char course;
        void create_Student();
};

// void Student:: create_Student()
// {
//     cout << "Enter the name of the student: " << endl;
//     getline(cin ,name);

//     cout << endl <<"Roll no: " ;
//     cin >> rollNo;

//     cout << endl << "Id: " ;
//     cin >> id;

//     cout << endl << "Course: ";
//     cin >> course;
// }
/*
void Object_Data_Into_A_Created_File(Student &std1)
{
    // Opening the File :-
    ofstream my_Write_File;
    my_Write_File.open("classObjects.txt",ios:: app);

    // Opens the file in the append mode . Because we wan t to iunsert the data of the class object in to the file named 'Class_Objects.txt' :)

    my_Write_File.write((char*) &std1, sizeof(std1));
    // Here the data present in class object std1 is written to the text file 'Class_objects.txt' by calling write() function. (char *) &std1 is used to point at the start of an object and the sizeof(std1) calculates the number of bytes copied in the file.

    my_Write_File.close();

    ifstream my_Read_File;
    my_Read_File.open("classObjects.txt", ios :: in);
    string storer;
    while(my_Read_File.eof() == 0)
    {
        getline(my_Read_File, storer);
        cout << endl<<storer << endl;
    }

    my_Read_File.close();
} */

int main()
{
    // Creating a class object :-
    Student std1;
    // std1.create_Student();
    std1.name = "Utkarsh Kumar";
    std1.course = 'B';
    std1.id = 390;
    std1.rollNo = 225;

   // Object_Data_Into_A_Created_File(std1);
   // Opening the File :-
    ofstream my_Write_File;
    my_Write_File.open("classObjects.txt",ios:: out);

    // Opens the file in the append mode . Because we wan t to iunsert the data of the class object in to the file named 'Class_Objects.txt' :)

    my_Write_File.write((char*)&std1, sizeof(std1));
    // Here the data present in class object std1 is written to the text file 'Class_objects.txt' by calling write() function. (char *) &std1 is used to point at the start of an object and the sizeof(std1) calculates the number of bytes copied in the file.

    my_Write_File.close();

    ifstream my_Read_File;
    my_Read_File.open("classObjects.txt", ios :: in);
    string storer;
    while(my_Read_File.eof() == 0)
    {
        getline(my_Read_File, storer);
        cout << endl<<storer << endl;
    }
    my_Read_File.read((char *)&std1, sizeof(std1));
    my_Read_File.clear();

    my_Read_File.close();
    return 0;
}