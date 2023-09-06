#include<iostream>
using namespace std;

class Products
{
    int item_ID[100];
    float item_Price[100];         // By default private
    float item_Ratings[100];
    int counter;
    
    public:
        void Counter()
        {
            counter = 0;
        }

        void product_Info()
        {
            cout << "Enter the ID of the product: " << endl;
            cin >> item_ID[counter];

            cout << "Enter the Price of the item: " << endl;
            cin >> item_Price[counter];

            cout << "Enter the Public Ratings of the product: " << endl;
            cin >> item_Ratings[counter];

            counter++;

        }
        void product_Info_Display();
};


void Products :: product_Info_Display()
{
    for (int i = 0 ; i < counter ; i++)
    {
        cout << "The ID of the Item no. " << counter + 1 << " = " << item_ID[i] << endl;

        cout << " The price of the item is  = " << item_Price[i] << endl;

        cout << "The public Rating of the product = " << item_Ratings[i] << endl;
    }
}

int main()
{
    Products Lux_Soap;
    Lux_Soap.Counter();
    Lux_Soap.product_Info();
    cout << "The info of the product is given below: " << endl;
    Lux_Soap.product_Info_Display();

    Products life_boy;
    life_boy.Counter();
    life_boy.product_Info();
    cout << "The info of the product is below: " <<endl;
    life_boy.product_Info_Display();

    return 0;
}