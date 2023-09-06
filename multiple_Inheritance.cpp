#include<iostream>
#include<string>
using namespace std;

class Superhero1
{
    protected:
        float durability;
        int speed;
        float agility;
        float strength;
        string flight;     // Yes / No
        string laser_Beams;
        float vunrability;
        float impact_On_Storilines;
        float bad_Guy_Complex;                  // All Out of 10 :)

    public:
        void superpower_Details();
};

void Superhero1 :: superpower_Details()
{
            cout << endl << "Answer Every One of these in the value between 1 to 10. Give the exact value of the speed and give the answer of the flight and laser beams in yes and no" << endl;

            cout << "Durability: " << endl;
            cin >> durability;

            cout << "Speed: " << endl;
            cin >> speed;

            cout << "Agility: " << endl;
            cin >> agility;

            cout << "Strnegth: " << endl;
            cin >> strength;

            cout << "Flight: " << endl;
            cin >> flight;

            cout << "Laser Beams(Yes/ No) : " << endl;
            cin >> laser_Beams;

            cout << "Vulnerabilty: " << endl;
            cin >> vunrability;

            cout << " Impact on comic storylines: " << endl;
            cin >> impact_On_Storilines;

            cout << "Bad guy complex: " << endl;
            cin >> bad_Guy_Complex;
        }

class Superhero2
{
    protected:
        float good_Guy_Complex;
        float x_Ray_Vision;
        float rechargability;
        float intelligence;

    public:
        void power_Details();
};

void Superhero2 :: power_Details()
{
    cout << "Answer all in floating value on the scale of 0 to 10" << endl;
    cout << endl << "good Guy complex: " << endl;
    cin >> good_Guy_Complex;

    cout << "X - Ray vision : "  << endl;
    cin >> x_Ray_Vision;

    cout << "Rechargability: " << endl;
    cin >> rechargability;

    cout << " Interlligence : " << endl;
    cin >> intelligence;
}

// Both of these classes will act as the base class for the "Supehero" Class
class Superhero : public Superhero1, public Superhero2
{
    public:
        void type_Of_Hero();
        void goated();
};

void Superhero :: type_Of_Hero()
{
    float anti_Heroism = (good_Guy_Complex + bad_Guy_Complex) / 2;
    if ( anti_Heroism > 5 && anti_Heroism < 7 && bad_Guy_Complex >= 7)
    {
        cout << endl << "The character is an Anti Hero. More often A villian than a Hero" << endl;
    }

    else if(anti_Heroism > 7 && bad_Guy_Complex > 9)
    {
        cout << endl << "The character is Most Likely a villian" << endl;
    }

    else if (anti_Heroism > 9 && good_Guy_Complex > 7){
        cout << "The character is most likely a hero" << endl;
    }
}

void Superhero :: goated()
{
    if (durability > 7 && strength > 7 && impact_On_Storilines >= 8 )
    {
        cout << endl << "Most Likely The character is G.O.A.T.E.D " << endl;
    }

    else{
        cout << endl << "May be the Character is famout, but it is less likely to be Goated :) " << endl;
    }
}

int main()
{
    Superhero Superman;
    Superman.superpower_Details();
    Superman.power_Details();
    Superman.type_Of_Hero();
    Superman.goated();

    return 0;
}
