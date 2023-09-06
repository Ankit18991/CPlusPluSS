#include<iostream>
using namespace std;

class Meta
{
    int no_Of_Users;
    int per_User_charge_on_Metaverse;


    public:
        float average_Screen_Time_Per_day;
        int no_Of_Users_in_Metaverse;

        int no_Of_Total_Users(int x){
            no_Of_Users = x;
            return no_Of_Users;
        }

        int per_User_monthly_subscription_Metaverse()
        {
            cout << "Enter the per user char of the metaverse monthly: " << endl;
            cin>> per_User_charge_on_Metaverse;

            return per_User_charge_on_Metaverse;
        }
};

class instagram : public Meta
{
    float blue_Tick_fee;
    float no_Of_New_Blue_Ticks;

    public:
       
        void average_Time_Spend_by_a_Meta_User_On_IG()
        {
            cout << endl << "The average time spend on Instagram by A meta user = " << 28 << " Minutes" << endl;

        }

        void total_No_Of_Revenue_Generated_From_Blue_Tick()
        {

            cout << "Enter Blue tick fee: " << endl;
            cin >> blue_Tick_fee;

            cout << "Enter the number of new blue ticks(56000000): " << endl;
            cin >> no_Of_New_Blue_Ticks;

            cout << "The total revenue generate by the Instagram/Meta By sellin gblue Tick subscriptions = " <<int(no_Of_New_Blue_Ticks) * int(blue_Tick_fee) << endl;
        }

        void revenue_From_Metaverse()
        {
            cout << "The revenue from Meta verse(monthly) = " << (per_User_monthly_subscription_Metaverse() * int(no_Of_Total_Users(314000000))) << endl;
            cout << "Average Meta screen time per day = " << 51 << " Minutes" << endl;
        }

};

int main()
{
    Meta m1;
    // cout << endl << "Total Number of Meta users = " <<m1.no_Of_Total_Users();
    // cout << endl << "Per user monthly Subscription of the metaverse = " << m1.per_User_monthly_subscription_Metaverse();

    instagram i1;
    cout << endl << "Total Number of Meta users = " <<i1.no_Of_Total_Users(314000000) << endl;
    cout << endl << "Per user monthly Subscription of the metaverse = " << i1.per_User_monthly_subscription_Metaverse();
    i1.average_Time_Spend_by_a_Meta_User_On_IG();
    i1.total_No_Of_Revenue_Generated_From_Blue_Tick();
    i1.revenue_From_Metaverse();

    return 0;

}