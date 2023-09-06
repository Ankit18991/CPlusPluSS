#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

// mod of a vector
template < class T1, class T2, class T3 > 
int Mod_Vector(T1 i, T2 j , T3 k)
{
    cout << endl << "Vector: " << i << "i + " << j << "j + " << k << "k" << endl;
    int mod = sqrt(pow(i,2) + pow(j ,2) + pow(k , 2));
    return mod;
}

int main()
{
    int i ,j, k;
    cout << "ENTER THE VALUE OF i of Vector: " << endl;
    cin >>i;

    cout << "ENTER THE VALUE OF j of Vector: " << endl;
    cin >> j;

    cout << "ENTER THE VALUE OF k of Vector: " << endl;
    cin >> k;
    cout << endl << "The value of the mod of the vector = " << Mod_Vector(i,j,k) 
                 << endl;
    
    return 0;
}