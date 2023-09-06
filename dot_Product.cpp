#include<iostream>
#include<conio.h>
using namespace std;

template < class T > 
class Dot_Product
{
    T i,j,k;

    public:
        void get_Vector()
        {
            cout << "i : " << endl;
            cin >> i;
            cout << "j : " << endl;
            cin >> j;
            cout << "K: " << endl;
            cin >> k;

            cout << "Our vector: " << i << "i + " << j << "j + " << k 
                                                       << "k" << endl;
        }

        void dot_Product(Dot_Product obj){
            T is = obj.i * (this -> i);
            T js = obj.j * (this -> j);
            T ks = obj.k * (this->k);
            T ans = is + js + ks;
            cout << endl << "Dot Product = " << ans;
        }
};

int main()
{
    Dot_Product <int> v1,v2;
    v1.get_Vector();
    v2.get_Vector();
    v1.dot_Product(v2);
    return 0;
}