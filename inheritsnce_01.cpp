// 5:12
#include <iostream>
using namespace std;

// Our Base section
class course
{
    int course_ID;

public:
    int total_no_Of_Students;
    float Fee_per_student;
    int faculty_no;
    int no_Of_sections;
    int total_no_of_Campus_selected_Students;

    course() {}
    // whenever a derived class is created , a defaul constructor from the base class is called :). That is why we created a default constructor

    course(int x, float y)
    {
        // Aap yaha pe sirf local variable me bata rahe ho k total number of students ki value kya hai
        total_no_Of_Students = x;
        Fee_per_student = y;
        cout << "Total No of students in the course = " << x << endl;
        cout << "Total Fee collected By the college From this session = " << (float(x) * float(y)) << endl;
        // Because c++ considers float as double(by default)
    }

    course(course &obj)
    {
        cout << "Enter the course ID: " << endl;
        cin >> obj.course_ID;
        cout << "Course ID = " << obj.course_ID;
    }

};

// Our derived section
class section : public course
{
    // Public visibility mode means that the public memebers of the base class = public members of the derived class
    int no_of_Students_In_Section;
    int no_Of_students_selected_From_Section;
    int no_Of_faculty;

    public:

        section(){}
        section(section &o2, int total_students_in_course)
        {
            no_Of_faculty = faculty_no;
            total_no_Of_Students = total_students_in_course;

            cout << "Enter the Number of sections in the course: " << endl;
            cin>> no_Of_sections;

            no_of_Students_In_Section = (total_no_Of_Students / no_Of_sections);
            cout << "No of faculty = " << 18;
            cout << "No of students in the section = " << no_of_Students_In_Section;
        }

        section(string s)
        {
            cout << "Enter The total no of campus selected students: " << endl;
            cin >> total_no_of_Campus_selected_Students;

            if (s == "A" || s == "a")
            {
                no_Of_students_selected_From_Section = total_no_of_Campus_selected_Students - 5;
                cout << "No of students selcted on campus from this section = " <<  no_Of_students_selected_From_Section;
            }

            else if (s == "B" || s == "b")
            {
                no_Of_students_selected_From_Section = (total_no_of_Campus_selected_Students - 5) - 2;
                cout << "No of students selcted on campus from this section = " <<  no_Of_students_selected_From_Section;
            }

            else{
                cout << endl << "No selected student from this section" << endl;
            }
        }
};

int main()
{
    int total_No_Of_Students_In_The_course;
    float fee_per_student;
    string section_no;

    cout << "Enter the total No of student in the course : " << endl;
    cin >> total_No_Of_Students_In_The_course;

    cout << "Enter the per student fee of the course: " << endl;
    cin >> fee_per_student;

    course BCA(total_No_Of_Students_In_The_course, fee_per_student);
    course BCA_ID(BCA);

    section A;
    section details(A, total_No_Of_Students_In_The_course);

    cout << endl << "Enter the section to get the details: " << endl;
    cin >> section_no;
    section campus_Selection(section_no);

    return 0;
}