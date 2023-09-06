#include<iostream>
#include<string>
using namespace std;

class course1
{
    int teacher_No;

    public:
        void no_Of_Teacher(int a);
};

void course1:: no_Of_Teacher(int a)
{
            teacher_No = a;
            cout << "Number of teachers in the course" << " = " << teacher_No << endl;
}

class course2
{
    int no_Of_Teachers;

    public:
        void no_Of_Teacher(int a);
};

void course2 :: no_Of_Teacher(int a)
{
    no_Of_Teachers = a;
    cout << " Number of teachers in the course = "  << no_Of_Teachers << endl;
}

class courses_Combined : protected course1, protected course2{
        public:
            void no_Of_Teacher(int a)
            {
                course2:: no_Of_Teacher(a);
                // Type name was not allowed in the parameter inside....
                // Basically This is a type of a function call by giving the same function name in the derived class....
            }
};

int main()
{
    courses_Combined BCA_MCA;
    int bca_no, mca_no;
    cout << "Enter the Number of teachers in BCA: " << endl;
    cin >> bca_no;

    cout << "Enter the number of teachers in MCA: " << endl;
    cin >> mca_no;

    BCA_MCA.no_Of_Teacher(mca_no);
    return 0;
}