#include<iostream>
#include<conio.h>

using namespace std;

class course
{
    char section;
    int no_Of_Students;      // For four sections of each course
    float Average_semesterwise_Turnover;
    float average_turnover;
    float average_Attendance_Of_A_student;
    

    public:
        void section_Information()
        {
            cout << "Since the Data for the course are in the same patter \n" << endl;
            cout << "Enter the section for the information: " << endl;
            cin >> section;

            if (section == 'A')
            {
                no_Of_Students = 55;
                average_turnover = (144000/6);
                Average_semesterwise_Turnover = (average_turnover)/float(no_Of_Students);
                average_Attendance_Of_A_student = 78.56;

                cout << "\n\t\t\t\t DETAILS OF SECTION A" << endl;
                cout << "\n\t\t\t Number of Students = " << no_Of_Students << endl;
                cout << "\t\t\t Average Turnover Per semester = " << average_turnover << endl;
                cout << "\t\t\t Average Turnover Per semester per student of the section = " << Average_semesterwise_Turnover << endl;
                cout << "\t\t\t Average attendance of the Section " << section << " = " << average_Attendance_Of_A_student << "%" << endl;
            }

            else if (section == 'B')
            {
                no_Of_Students = 55;
                average_turnover = (144000/6);
                Average_semesterwise_Turnover = (average_turnover)/float(no_Of_Students);
                average_Attendance_Of_A_student = 87.56;

                cout << "\n\t\t\t\t DETAILS OF SECTION A" << endl;
                cout << "\n\t\t\t Number of Students = " << no_Of_Students << endl;
                cout << "\t\t\t Average Turnover Per semester = " << average_turnover << endl;
                cout << "\t\t\t Average Turnover Per semester per student of the section = " << Average_semesterwise_Turnover << endl;
                cout << "\t\t\t Average attendance of the Section " << section << " = " << average_Attendance_Of_A_student << "%" << endl;
            }

            else if (section == 'C')
            {
                no_Of_Students = 55;
                average_turnover = (144000/6);
                Average_semesterwise_Turnover = (average_turnover)/float(no_Of_Students);
                average_Attendance_Of_A_student = 86.98;

                cout << "\n\t\t\t\t DETAILS OF SECTION A" << endl;
                cout << "\n\t\t\t Number of Students = " << no_Of_Students << endl;
                cout << "\t\t\t Average Turnover Per semester = " << average_turnover << endl;
                cout << "\t\t\t Average Turnover Per semester per student of the section = " << Average_semesterwise_Turnover << endl;
                cout << "\t\t\t Average attendance of the Section " << section << " = " << average_Attendance_Of_A_student << "%" << endl;
            }

            else{
                no_Of_Students = 55;
                average_turnover = (144000/6);
                Average_semesterwise_Turnover = (average_turnover)/float(no_Of_Students);
                average_Attendance_Of_A_student = 56.87;

                cout << "\n\t\t\t\t DETAILS OF SECTION A" << endl;
                cout << "\n\t\t\t Number of Students = " << no_Of_Students << endl;
                cout << "\t\t\t Average Turnover Per semester = " << average_turnover << endl;
                cout << "\t\t\t Average Turnover Per semester per student of the section = " << Average_semesterwise_Turnover << endl;
                cout << "\t\t\t Average attendance of the Section " << section << " = " << average_Attendance_Of_A_student << "%" << endl;
            }
        }
        friend void added_details_Of_all_Sections_Of_Any_Sections_Of_two_Course(course o1, course o2);
};

void added_details_Of_all_Sections_Of_Any_Sections_Of_two_Course(course o1, course o2)
{
    o1.section_Information();
    o2.section_Information();
    int total_No = o1.no_Of_Students + o2.no_Of_Students;
    float total_Average_turnover_per_sem = (o1.average_turnover + o2.average_turnover) / 2;
    float total_turnover_from_A_section_Of_These_Course = (o1.Average_semesterwise_Turnover + o2.Average_semesterwise_Turnover);
    float average_attendance_Of_studenets_Of_Both_section = (o1.average_Attendance_Of_A_student + o2.average_Attendance_Of_A_student);

                cout << "\n\t\t\t\t DETAILS OF SECTION " << o1.section << " + " << o2.section <<  endl;
                cout << "\n\t\t\t Number of Students = " << total_No << endl;
                cout << "\t\t\t Average Turnover Per semester = " << total_Average_turnover_per_sem << endl;
                cout << "\t\t\t Average Turnover Per semester per student of the section = " << total_turnover_from_A_section_Of_These_Course << endl;
                cout << "\t\t\t Average attendance of the Section " << o1.section << " and " << o2.section << " = " << average_attendance_Of_studenets_Of_Both_section <<  "%" << endl;

}

int main()
{
    course BCA, BBA, MBA, MCA, total;
    added_details_Of_all_Sections_Of_Any_Sections_Of_two_Course(BCA, BBA);

    return 0;
}