#include<iostream>
#include<conio.h>
using namespace std;

class big_Brothers_Income; // TO be Defined Later
class Joint_Family_income 
{
    float mother_salary = 42000;
    float father_Salary = 20000;
    /* friend void big_Brothers_Income :: my_Brothers_family_Per_Member_monthly_expanse(Joint_Family_income );
        It won't work because compiler puchega ki (my_Brothers_family_Per_Member_monthly_expanse(Joint_Family_income ) function kaha hai aur uppar se Joint_family_Income class abhi incomplete hai)
        Although ye neeche public APL_BPL function me possible hai kyunki wo pahli baat ki ek fuction hai aur to aur friend function hai big_Brother_Income class ka . WO work krega kyunki Joint_Family_Income class pahle se declare rahegi friend fuction me likhne ko */
        // So to access private parts of big_Brothers_Income class lets make it the friend class of this class
        friend class big_Brothers_income;

    public:
        void Family_Details(big_Brothers_Income );
};

class big_Brothers_Income
{
    int number_Of_Members = 4;
    float big_brother_salary = 54000;
    // A wife and 2 kids and himself

    friend void Joint_Family_income :: Family_Details(big_Brothers_Income ); 
    // This is possible because aapne pahle hiin ek Joint_family_Income name ka ek class banna rakha hai
    public:
        void my_Brothers_family_Per_Member_monthly_expanse(Joint_Family_income );
            
};

void Joint_Family_income :: Family_Details(big_Brothers_Income o1)
{
     float Joint_Family_Quota = (mother_salary + father_Salary + o1.big_brother_salary) ;

     // o1 to only access the big brother salary in the private part of the different class. (We can't really access it directly so used a class)

     cout << endl << "Joing Family Quota = " << Joint_Family_Quota << endl;

            if (Joint_Family_Quota >= 150000)
            {
                cout << endl << "APL Famliy \n " << endl;
            }

            else {
                cout << endl << "BPL Family \n" << endl;
            }
             cout << "My brothers salary = " << o1.big_brother_salary;
                string s;
                cout << "Since my Mother contibutes 1/3rd of her monthly salary to the education of my brother's children / for my brother's family every month." << endl;

                cout << "Did She contributed This Month? (yes/no): " << endl;
                cin >> s;

                if (s == "yes")
                {
                    float total = (o1.big_brother_salary) + ((mother_salary)/3);
                    cout << "Per person Monthly Expanditure of my Brother's Family(The month she contributed) = " << (total/4) << endl;
                }

                else{
                    cout << "Per person Monthly Expanditure of my Brother's Family = " << (o1.big_brother_salary/4) << endl;
}
}

int main()
{
    Joint_Family_income Singh;
    big_Brothers_Income Ojha;

    Singh.Family_Details(Ojha);
    // Ojha.my_Brothers_family_Per_Member_monthly_expanse(Singh);
    return 0;
}