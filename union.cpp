#include <iostream>
using namespace std;

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout << m1.car;
    // cout << m1.rice; (try removing the comment and see what happens)

    /* We can only use one of the data from the union at a time
       Even if we try to use multiple data items from the union , the programme return a garbage value for the previous data item*/

    return 0;
}