/* For encryption and decryption , we must have a key */

#include<iostream>
#include<string>
#include<vector>
#include<conio.h>
using namespace std;

void display(vector<int> & v)
{
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout << v.at(i) << "\t";
    }
}

int main()
{
    // vector<int> vec1(4);      ---> Also Possible
    int ind,val,value, size;
    vector<int >vec1;
    vector<int> :: iterator iter = vec1.begin();
    cout << endl << "Enter the size of Your vector(Which can automatically get changed :) ): " << endl;
    cin >> size;

    for (int i = 0 ; i < size ; i++)
    {
        cout << endl << "Enter the element to be pushed: " << endl;
        cin >> value;

        // vec1.push_back(value);    ---> Also Possible
        vec1.insert(vec1.begin(),value);
    }

    vec1.insert(vec1.begin(), 34);
   /* for (int i = 0 ; i < 4 ; i++)
    {
    	cout << endl << "Enter element to be inserted: " << endl;
    	cin >> val;
    	vec1.insert(iter, val);

        NOTE:-
            1. We can't use 'insert()' to insert a value at index 2 in the vector if the size of the vector is less than 3 :)
            2. Even if the size of the vector is equal to or greater than 3, if the indices 0, 1 are not storing any data, they will be initialized with 0
            3. The iterator 'iter' should point to a valid position where we want to insert our value :)
	}
    */
   display(vec1);
    cout << endl << "Enter the index at which You wanna Insert the val: " << endl;
    cin >> ind;

    cout << endl << "Enter the value to be Insert at the index: " << endl;
    cin >> val;

    vec1.insert(vec1.begin() + ind, val);
    // vec1.push_back(val);

    display(vec1);
    return 0;
}