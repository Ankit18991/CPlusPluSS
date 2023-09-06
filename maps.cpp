#include<iostream>
#include<conio.h>
#include<windows.h>
#include<map>
#include<string>
using namespace std;

// Create a Quiz using maps in the next Program:)
void displaY(map<int, string> &m, map<int ,string> :: iterator it)
{
    cout << endl << "Our Map is displayed below:-" << endl;
    for (it = m.begin() ; it != m.end() ; it++)
    {
        cout << (*it).first << " " << (*it).second << "\n";
    }
}

int main()
{
    map<int, string> map_One;
    map<int,string> :: iterator it;

    // Insertion :-
    map_One.insert({{1 , "Ankit"}, {2, "Gaurav"},{3, "Suraj"},{4, "Utkarsh"}});
    displaY(map_One,map_One.begin());

    // Modification :-
    map_One[1] = "Gautam";
    cout << endl << "After Modification " << endl;
    displaY(map_One,map_One.begin());

    // Deletion of Elements
    map_One.erase(2); // ---> Erasing using key :)
    cout << "After deleting number 2 :)" << endl;
    displaY(map_One,map_One.begin());

    cout << "After deleting all the elements using iterator (Through looping) :)" << endl;
    for (it = map_One.begin(); it != map_One.end(); it++)
    {
        map_One.erase(it);
    }
    displaY(map_One,map_One.begin());

    return 0;
}
