#include<iostream>
using namespace std;

class Suraj
{
    string gf;
    public:
        Suraj()
        {
            string interest;
            cout << "Is suraj Interested In GirlFriends?(yes/no): " << endl;
            cin >> interest;

            if (interest == "yes" || interest == "YES" || interest == "Yes")
            {
                cout << "You don't know him. :(" << endl;
            }

            else if (interest == "NO" || interest == "No" || interest == "no")
            {
                cout << "You really know him :))))" << endl;
            }

            else{
                cout << endl << "Wrong Input..." << endl;
            }
        }

        Suraj(string gf2)
        {
            cout << "Does Suraj has A girlfriend?(yes/no) : " << endl;
            cin >> gf2;

            if (gf2 == "Yes" || gf2 == "YES" || gf2 == "yes")
            {
                cout << "You Have no idea How wring you Are..." << endl;
            }

            else if (gf2 == "NO" || gf2 == "No" || gf2 == "no")
            {
                cout << "YOU are still wrong about him :). He does not have 1 GF , he is a playboy ." << endl;
            }

            else{
                cout << "Wrong inputs" << endl;
            }
        }

        Suraj(int a ,int b)
        {
            cout << "How many GirlFriends suraj have?: " << endl;
            cin >> a;

            if (a == 1 || a == 0 )
            {
                cout << "You are Right" << endl;
            }

            else {
                cout << "Please consult Your Psychiatrist :)" << endl;
            }
        }
};

int main()
{
    Suraj utkarsh("yes");
    Suraj Gaurav(1,3);
    Suraj Ankit;

    return 0;

}