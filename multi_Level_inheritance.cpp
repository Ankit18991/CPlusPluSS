#include<iostream>
#include<string>
using namespace std;


class Grandfather
{
    protected:
        float monthly_income;
        int land_In_Acres;
        string use_Of_Bicycle;
        int no_Of_Children;
        int age;

    public:
        float income_Details();
        void health_Details();
        int land_Owned(int x);
        int no_of_child(int y);
};

float Grandfather :: income_Details()
 {
            cout << endl << " Monthly Income : " << endl;
            cin >> monthly_income;

            return monthly_income;
        }

void Grandfather :: health_Details()
{
            cout << "Did You used Bicycle regularly?(yes/no): " << endl;
            cin >> use_Of_Bicycle;

            if(use_Of_Bicycle == "yes" || use_Of_Bicycle == "YES" || use_Of_Bicycle == "Yes")
            {
                cout << endl << "Your generation was physically fit :) " << endl;
            }

            else
            {
                cout << "You would not have been that physically Capable. May be :(" << endl;
            }
        }

int Grandfather :: land_Owned(int x)
{
            land_In_Acres = x;
            return land_In_Acres;
}


int Grandfather :: no_of_child(int y)
{
    no_Of_Children = y;
    return no_Of_Children;
}

// Base class for the Father Class
class Father : public Grandfather
{
    protected:
        int age_Of_Death;
        string is_He_Dead;

    public:
        int age_Of_death();

};

int Father :: age_Of_death()
    {
            cout << "Is Your Grandpa Alive or Dead(dead/alive): " << endl;
            getline(cin,is_He_Dead);

            if (is_He_Dead == "dead" || is_He_Dead == "Dead" || is_He_Dead == "DEAD")
            {
                cout << "Enter Your Age when Your father died: " << endl;
                cin >> age_Of_Death;

                if (age_Of_Death <= 19)
                {
                    cout << "I am So Sorry. That would Have been Tragic for Him" << endl;
                }

                return age_Of_Death;
            }

            else{
                cout << endl << "You are A Lucky Man !! :)" << endl;
            }
        }


// Now the father class is the base class for the the Child (You) Class:-

class Child : public Father{
    int Your_age;
    int no_Of_Cars;

    public: 
        int return_Age()
        {
            cout << "Enter Your Age : " << endl;
            cin >> Your_age;

            return Your_age;
        }

        void No_Of_car();
};

void Child :: No_Of_car()
{
    if (Your_age >= 18)
    {
        cout << endl << "Enter the Number of Cars Yo Personally own : " << endl;
        cin >> no_Of_Cars;

        cout << "No of Car owned By You = " << no_Of_Cars << endl ;
    }

    else{
        cout << endl << "You are Underage To Own a car :( " << endl;

    }
}

int main()
{
    int x,y;
    cout << "Enter the Land Owned By Your Grandpa In Acres: " << endl;
    cin >> x;

    cout << "Enter The nUmber of children Your Grandpa Has / Had: " << endl;
    cin >> y;

    Child Utkarsh;
    int income = Utkarsh.income_Details();
    cout << "My income = " << income << endl;

    int land = Utkarsh.land_Owned(x);
    cout << "Land Owned By me = " << " acres" << endl;

    int child = Utkarsh.no_of_child(y);
    cout << "No of children I have = " << child << endl;

    Utkarsh.health_Details();
    int age_Of_Death = Utkarsh.age_Of_death();
    cout << "My age if that traumatic Even Happened = " << age_Of_Death << endl;

    int age = Utkarsh.return_Age();
    cout << "My age   = " << age << endl;
    Utkarsh.No_Of_car();
    return 0;
    
}