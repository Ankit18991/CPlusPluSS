/* This will calculate the date within a month after a particular date*/

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int jan,feb1,feb2,march,april,may,june,july,aug,sept,october,nov,december;
string days[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"} ;

void month_Days()
{
    jan = 31;
    feb1 = 28;
    march = 29;
    april = 30;
    may = 31;
    june = 30;
    july = 31;
    aug = 31;
    sept = 30;
    october = 31;
    nov = 30;
    december = 31;
}

void day_Finder(int dd, int mm, int yy)
{
	month_Days();
    int dateNow,i;
    string now;
    cout << "Enter the current day" << endl
         << "Instruction:-" << endl
         << "1. Enter the day in the format 'Xxxxxxx'(only first letter capital)"<<endl;

    cin >> now;

    int date_Later,mmn,yyn,m;
    int loved;

    string desired;
    for (i = 0 ; i < 7 ; i++)
    {
        if (now == days[i])
        {
            cout << endl << "Enter the date You want to Find the day at: " << endl
                         << "1. If the date is 25-08-2023, Enter 25" << endl;
            cin >> date_Later;

            cout << endl << "Enter the month You want to Find the day at: " << endl
                         << "Instruction:- " << endl
                         << "1. If the date is 25-01-2023, Enter 01" << endl;
            cin >> mmn;
            m = mmn;

            if (mmn == 1)
            {
                mmn = jan;
            }

            else if (mmn == 2)
            {
                mmn = feb1;
            }

            else if (mmn == 3)
            {
                mmn = march;
            }

            else if (mmn == 4)
            {
                mmn = april;
            }

            else if(mmn == 5)
            {
                mmn = may;
            }

            else if (mmn == 6)
            {
                mmn = june;
            }

            else if (mmn == 7)
            {
                mmn = july;
            }

            else if (mmn == 8)
            {
                mmn = aug;
            }

            else if (mmn == 9)
            {
                mmn = sept;
            }

            else if (mmn == 10)
            {
                mmn = october;
            }

            else if (mmn == 11)
            {
                mmn = nov;
            }

            else if (mmn == 12){
                mmn = december;
            }

            else{
                cout << endl << "The month Does not Exist" << endl;
                exit(0);
            }

            cout << endl << "Enter the Year You want to Find the day at: " << endl
                         << "1. If the date is 25-08-2023, Enter 2023" << endl;
            cin >> yyn;

            if (yyn == yy)
            {
                if (mmn == mm)
                {
                    if (dd <= date_Later)
                    {
                        loved= date_Later - dd;
                        desired = days[i+loved];
                        cout << endl << "The day = " << desired << endl;
                    }

                    else if (dd > date_Later)
                    {
                        loved = dd - date_Later;
                        int magnus = (loved % 7);
                        if((i - magnus) < 0)
                        {
                            int adder = (i - magnus) + 7;
                            desired = days[adder];
                            cout << endl << "The day = " << desired << endl;
                        }

                        else{
                            desired = days[i - magnus];
                            cout << endl << "The day = " << desired << endl;
                        }
                    }
                }
            }
        }
    }

}

int main()
{
    int mm,yy,dd;
    month_Days();

    cout << endl << "Enter date part of the present Date: " << endl
                 << "Instruction :-" << endl
                 << "1. If the date is 25-08-2023, enter 25" << endl;
    cin >> dd;

    cout << endl << "Enter month part of the present Date: " << endl
                 << "Instruction :-" << endl
                 << "1. If the date is 25-08-2023, enter 8" << endl;
    cin >> mm;
    int m = mm;

    if (mm == 1)
            {
                mm = jan;
            }

            else if (mm == 2)
            {
                mm = feb1;
            }

            else if (mm == 3)
            {
                mm = march;
            }

            else if (mm == 4)
            {
                mm = april;
            }

            else if(mm == 5)
            {
                mm = may;
            }

            else if (mm == 6)
            {
                mm = june;
            }

            else if (mm == 7)
            {
                mm = july;
            }

            else if (mm == 8)
            {
                mm = aug;
            }

            else if (mm == 9)
            {
                mm = sept;
            }

            else if (mm == 10)
            {
                mm = october;
            }

            else if (mm == 11)
            {
                mm = nov;
            }

            else if (mm == 12){
                mm = december;
            }

            else{
                cout << endl << "The Month does not exist" << endl;
                exit(0);
            }

    cout << endl << "Enter year part of the present Date: " << endl
                 << "Instruction :-" << endl
                 << "1. If the date is 25-08-2023, enter 2023" << endl;
    cin >> yy;

    cout << "Our Present date: " << dd << "/"<< m << "/" << yy << endl;
    day_Finder(dd,mm,yy);
    
    return 0;
}