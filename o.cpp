#include<iostream>
#include<fstream>
#include<string>
using namespace std;
// fstream has the library classes for performing operations like redin and writing om the file..

int main()
{
    // Creating a text file named "info", and using conctructor to open it...
    // By creating object named myFile :)
    ofstream myFile("info.txt");
    myFile << "Name: Utkarsh Kumar \n";
    myFile << "Course : BCA \n"
           << "Sem : III \n"
           << "Roll no. : 225087 \n";
    
    myFile.close();

    ifstream myReadFile("info.txt");
    string str;

    while(myReadFile.eof() == 0)
    {
        // Storing the content in the file into the 'str' string:-
        // By using the getline() untill the end of the file is reached :)
         getline(myReadFile, str);
         cout << str;
    }

    myReadFile.close();
    return 0;
}