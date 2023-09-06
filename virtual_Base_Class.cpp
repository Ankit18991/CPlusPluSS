#include<iostream>
#include<string>
using namespace std;

class Youtuber1
{
    protected:
        string no_Of_Subscribers;
        string Lifetime_Views_On_Channel;
        string name;
    
    public:
        void no_Of_Subscriber(string s5);
        void Lifetime_Views(string s);
};

void Youtuber1:: no_Of_Subscriber(string s5)
{
    cout << "Enter the name of the Youtuber: " << endl;
    getline(cin , name);

    no_Of_Subscribers = s5;
    cout << "No of subscriber of   = " <<name << " = " 
                            <<no_Of_Subscribers << endl;
}

void Youtuber1 :: Lifetime_Views(string s)
{
    Lifetime_Views_On_Channel = s;
    cout << "Lifetime views on the channel til this date = " << Lifetime_Views_On_Channel 
                                                             <<endl;
}

class Youtuber2 : virtual public Youtuber1
{
    protected:
        string subscribed;
        string day_Joining;

    public:
        void Subscribe(string s1);
        void day_Of_Joining();
};

void Youtuber2 :: Subscribe(string s1)
{
            subscribed = s1;
            cout << s1 << "You are subscribed to the  :)" << name << endl;
}

void Youtuber2 :: day_Of_Joining()
{
    cout << "Enter the date when " << name << " Joined the Youtube community ;)" << endl;
    getline(cin, day_Joining);

}

class Youtuber3 : virtual public Youtuber1
{
    protected:
        int salary;
        string married;

    public:
        void monthly_Income(int y)
        {
            salary = y;
        }

        void Is_He_married();
};

void Youtuber3 :: Is_He_married()
{
    cout << "Is He married: " << endl;
    getline(cin , married);
}

class Youtuber4 : public Youtuber2, public Youtuber3
{
    public:
        void display()
        {
            cout << endl <<"Name of the YouTuber : " << name << endl;
            cout << endl << "No of Subscribers Of Youtuber : " << no_Of_Subscribers << endl;
            cout << endl << "Total Watchtime of " <<name << " : " << Lifetime_Views_On_Channel << endl;
            cout << endl << "Date Of Joining the community  " << day_Joining << endl;
            cout << endl << "Monthly Income Of the Student : " << salary << endl;
            cout << endl << married << " , He is married" << endl;
        }
};

int main()
{
    // By creating the first class the virtual base class for Youtuber2 And Youtuber3 , we stopped the inheritance of the class memebers of the base class from being inherited more than once
    Youtuber4 CarryMinati;
    CarryMinati.no_Of_Subscriber("40.2M");
    CarryMinati.Lifetime_Views("3.4B");
    CarryMinati.Subscribe("Yes");
    CarryMinati.day_Of_Joining();
    CarryMinati.monthly_Income(2500000);
    CarryMinati.Is_He_married();

    CarryMinati.display();
    return 0;
}