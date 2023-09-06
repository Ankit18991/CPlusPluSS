#include<iostream>
using namespace std;

class Shopkeeper
{
    float indian_Ruppee;
    float USD;
    int profit;

    public:
        // Shopkeeper(){};        ----> Line x
        Shopkeeper(float ruppee1, int gain1);
        Shopkeeper(float USD1, float gain2);
        void Details_Of_His_Profit();
};

Shopkeeper :: Shopkeeper(float ruppee1, int gain1)
{
    indian_Ruppee = ruppee1;

    float indian_Value;
    cout << "The money Shopkeeper received in Indian Currency = " << indian_Ruppee << endl;
    cout << "How many Indian Ruppess is Equal To a USD ? : " << endl;
    cin >> indian_Value;

    cout << "The Money The shopkeeper Received In USD = $" << (indian_Ruppee / indian_Value);
    profit = gain1;
}

Shopkeeper :: Shopkeeper(float USD1, float gain2)
{
    USD = USD1;
    cout << endl << " The money Shopkeeper Received in dollar = $" << USD << endl;
    int indian_Market_Value;

    cout << "What is the value of a USD in Indian Ruppess?: " <<endl;
    cin >> indian_Market_Value;

    cout << endl << " IT will be equal to Rs." << (indian_Market_Value * USD) << endl;
}

void Shopkeeper :: Details_Of_His_Profit()
{
    float myPrice;
    cout << "USD($) = How much Indian ruppess ?: " << endl;
    cin >> myPrice;

    cout << endl << "The profit Earned by shopkeeper in Indian Currency = "  << profit << endl;
    cout << endl << "The profit Earned By the shopkeeper in USD = $" << (profit / myPrice) << endl;
}

int main()
{
    // Shopkeeper s1, s2 ,s3; Throws an error Without A default constructor . These can't even initialize the parameterized constructors beacause there are no parameters in s1, s2 and s3 to begin with. So, this will confuse the compiler about which constructor to invoke. We are Unable to give the parameter because we want to take user input in the runtime a.k.a Dynamic intitialization and we have not yet taken user input.

    // But to make the above line work , we can just declare a default constructor (which we din in line x) and just make it do nothing with no lines in it.

    float indian_rup;
    float US_Dollars;
    float profit;

    cout << endl << "Enter the money Received By the shopkeeper In Indian Currency : " << endl;
    cin >> indian_rup;

    cout << endl << "Enter the money Received By the shopkeeper In USD($) : " << endl;
    cin >> US_Dollars;    

    cout << "Enter the profit Earned By the Shopkeeper In Indian cureency(Rs.): " << endl;
    cin >> profit;

    Shopkeeper s1(indian_rup, int(profit));
    // Also Correct ---> Shopkeeper s1 = Shopkeeper(indian_rup, profit)
    s1.Details_Of_His_Profit();

    Shopkeeper s2(US_Dollars, profit);
    s2.Details_Of_His_Profit();

    return 0;
}