#include<iostream>
using namespace std;

struct Car
{
    float version;
    double price;
    int year;
};

int main()
{
    struct Car mercedes;
    mercedes.version = 2.31;
    mercedes.price = 1000000;
    mercedes.year = 2098;

    cout << "The Price of the mercedes Version " << mercedes.version << " = " << mercedes.price;
    return 0;
}