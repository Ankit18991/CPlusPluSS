#include<iostream>
#include<string>
using namespace std;

int count = 0;
int n;  // No of iterations :)
string repitition_Storer;

void check(string s);
int main()
{
    string s1;
    cout << "Enter a string: " << endl;
    cin >> s1;
    check(s1);
    return 0;
}

void check(string s)
{
    int k = 0;
    int l = 0 ;
    char ch;

    for (int i = 0 ; i < s.length() - 1; i++)
    {
        if (s[i] == repitition_Storer[l] || s[i]  == repitition_Storer[l+1] || s[i] == repitition_Storer[l+2] || s[i] == repitition_Storer[l+3] || s[i] == repitition_Storer[l+4])
        {
            continue;
        }
        
        count = 0 ;
        for (int j = i + 1 ; j < s.length() ; j++)
        {
            if(s[j] == s[i])
            {
                ch = s[j];
                count++;
                repitition_Storer[k] = s[j];
                k++;
            }
        }
        if (count > 0)
        {
            cout << ch << " Repeated " << count << " No of times" << endl;
        }
    }
}
