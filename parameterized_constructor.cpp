#include<iostream>
#include<math.h>
using namespace std;

class Point
{
    float x, y, z;
    friend float distance_Between_Coordinates(Point , Point );
    public:
        Point(float a, float b, float c);

        void display_Coordinates();
};

Point :: Point(float a , float b , float c)
{
    x = a;
    y = b;
    z = c;
}

void Point :: display_Coordinates()
{
     {
            cout << "The coordinates are - (" << x << ", " << y << ", " << z << ")" << endl;
     }
}

float distance_Between_Coordinates(Point o1, Point o2)
{
    float diff1  = (o2.x - o1.x);
    float diff2 =  (o2.y - o1.x);
    float diff3 = (o2.z - o1.z);

    float x1 = pow(diff1,2);
    float x2 = pow(diff2, 2);
    float x3 = pow(diff3 , 2);

    float sum = x1 + x2 + x3;
    float distance = sqrt(sum);
    return distance;
}

int main()
{
    Point missile_coordinates(3.0, 4.0, 5.0);
    missile_coordinates.display_Coordinates();

    Point missile_coordinates2(3.0, 7, 6.0);
    missile_coordinates2.display_Coordinates();

    cout << "Distance between Both the coordinates = " << distance_Between_Coordinates(missile_coordinates2, missile_coordinates) << endl;
    return 0;
}