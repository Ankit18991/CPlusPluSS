#include<iostream>
#include<string>
using namespace std;

string arr1[5][10]= {"Ankit", "Saurav", "Suraj", "Ujjwal", "Utsav", "Ankita", "Gauriva","Riya","Khushi","Prashant","Pritam","Surbhi","mc","bc"};

/* Agar Sirf 5 rows me ye store krr rha hota Toh ye 14 strings ko leta hiin nhi :). It means that Ki
   Ye seedha 50 strings ko store karega, not 50 character because string it self is a data type here, not a character array. So arr[0][0] pe 'A' na hoke, "Ankit" string khud hai..

            _0____ __1______2____3__________(10 columns)_________________________________________________ 
           0 Ankit|Saurav|Suraj|Ujjwal |___________________________________________________________
           1 Pritam|Surbhi|                                                                        |
           2                                                                         
           3                                                                         
                                                                                    
                                                                                    
                                                                                    
                                                                                    
            _________________________________________________________________________  
            */                                                                      
class A
{
    public:
        string arr2;
        void get_String()
        {
            cout << "Enter the string: " << endl;
            cin>> arr2;

            for (int i = 0 ; i < 10 ; i++)
            {
                if (arr2 == arr1[0][i] || arr2 == arr1[1][i] || arr2 == arr1[2][i] || arr2 == arr1[3][i] || arr2 == arr1[4][i])
                {
                    cout << "It is Present in the 2d string " << endl;
                    /*cout << arr1[0][i] << endl;
                    cout << i << endl;
                    cout <<  "arr1[1][0]= "<< arr1[1][0]<<endl;*/
                }

            
        }
}
};

int main()
{
    A obj;
    obj.get_String();
    return 0;
}