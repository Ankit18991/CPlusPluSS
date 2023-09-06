#include<iostream>
using namespace std;

class Student
{
    int semester;
    int rollno;
    float marks;
    float percentage;

    public:
        void student_Details()
        {
            cout << "Enter the semester For which the result is being searched: " <<endl;
            cin >> semester;

            cout << "Enter Your RollNo.: " << endl;
            cin >> rollno;

            cout << "\t\t\t\t\t STUDENT DETAILS: \n" << endl;
            cout << "\t\t\t Semester: " << semester << endl;
            cout << "\t\t\t RollNo. : " << rollno << endl;
        }

        void student_Result()
        {
            student_Details();
            cout << "\n\t\t\t Marks Obtained= " <<endl;
            cin >> marks;

            float fraction = (marks/600);
            percentage = fraction * 100;
            cout << "\n\t\t\t Percentage = " << percentage << "%" << endl;
        }
        void marks_Adder(Student o1, Student o2, Student o3, Student o4)
        {
            cout << "Adding the marks of all the students:- " <<endl;
            float total = o1.marks + o2.marks + o3.marks + o4.marks;
            cout << "Marks Of the all the students  = " << total <<endl;
        }
};

int main()
{
    Student name[4];  // Similar to Writing int arr[4], where int is a data type
    for (int i = 0 ; i < 4 ; i++)
    {
        name[i].student_Result();  /* Iss function ko chalane se 
                                      Marks(private) bhi access krr 
                                      liya :)*/
    }
    Student adder;
    adder.marks_Adder(name[0], name[1], name[2], name[3] );
    return 0;
}