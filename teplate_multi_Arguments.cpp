/* Calculate the distance between points using a template of the class . Take points as int , float, double To implement the template*/

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int count = 1;

template <class T1, class T2 ,class T3>
class Coordinate_Distance
{
    T1 x;
    T2 y;
    T3 z;

    public:
        Coordinate_Distance(){
            cout << endl << "Enter X coordinates of" << count <<" point: " << endl;
            cin >> x;

            cout << endl << "Enter Y coordinate of" << count << " Point: " << endl;
            cin >> y;

            cout << endl << "Enter Z coordinate of" << count << " Point: " << endl;
            cin >> z;
            count++;
        } 

        void distance_Between(Coordinate_Distance obj) // To calculate distance
        {
            T1 sub1 = obj.x - this->x;
            T2 sub2 = obj.y - this->y;
            T3 sub3 = obj.z - this->z;

            T1 distance = sqrt(pow(sub1,2) + pow(sub2, 2) + pow(sub3, 2));

            /* We can also do either of these two too :-
            T2 distance = sqrt(pow(sub1,2) + pow(sub2, 2) + pow(sub3, 2));
            T3 distance = sqrt(pow(sub1,2) + pow(sub2, 2) + pow(sub3, 2));
            */

            cout << endl << "The distance between both points = " << distance << endl;
        }
};

int main()
{
    Coordinate_Distance <float, float, float> x,y;
    x.distance_Between(y);

    // Coordinate_Distance <int, float , int> a,b;
    // a.distance_Between(b);

    return 0;
}