#include<iostream>
#include<string>
using namespace std;

class Base1{
    public:
        Base1(){
            cout <<endl<< "The Default constructor of the Base1 is invoked :) " << endl;
        }
        // Default constructors of the base classes will run first if we took the object of the derived class(derived one ), because ultimately these contructors of the base class become the member of the The derived class and so when an object is created ,the base class default contructor is called acoording to the rule.

        // Althought the default contructor of the derived class won't be called if we are giving parameter to the object intitalization, because by doing that we are invoking some other constructor in the derived class .
        Base1(int x);
};

Base1 :: Base1(int x)
{
    cout << "The value1 = " << x << endl;
}

class Base2 : public Base1{
    public:
        Base2(){
            cout <<endl<< "The Default constructor of the Base2 is invoked :) " << endl;
        }
        Base2(int y);
};

Base2 :: Base2(int y)
{
    cout << "The value2 = " << y << endl;
}

class Base3 : public Base2{
    public:
        Base3(){
            cout <<endl<< "The Default constructor of the Base3 is invoked :) " << endl;
        }
        Base3(int z);
        // We cant call The contructors of multiple base classes in the mukti level inheritance
};

Base3 :: Base3(int z)
{
    cout << "The value3 = " << z << endl;
}

int main()
{
    Base3 b3(25);
    return 0;
}

