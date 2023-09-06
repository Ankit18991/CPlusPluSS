/* Lets store the value of key in the encrypted file */

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Encryption
{
    protected:
        string message;

    public:
        void get_Message();
        void encryption();
};

class Decryption : public Encryption
{
    string decrypted_Message;

    public:
        void decryption();
};

void Encryption :: get_Message()
{
    cout << endl << "Enter Your Message: ";
    getline(cin,message);
}

void Encryption :: encryption()
{
    cout << endl<< "Our message : " << message;
    int accessor = 0,i,key;
    char key_Encryptor;

    if(message[accessor] == 'H')
    {
        key = 15;
        for (i = 0 ; i < message.length() ; i++)
        {
            if ( i >= 3 && i <= 9)
            {
                message[i] = message[i] + 43;
            }

            else if(i >= 20 && i <= 29)
            {
                message[i] = message[i] + 69;
            }
            else{
                message[i] = message[i] + key;
            }
        }
    }

    else{
        for (int i = 0 ; i < message.length();  i++)
        {
            if ( i > 21 && i < 38)
            {
                message[i] = message[i] + 43;
            }

            else if(i <=11)
            {
                message[i] = message[i] + 69;
            }

            else{
                message[i] = message[i] + 123;
            }
        }
    }
    cout << endl << "Our Enrypted Message : " << message;
    ofstream my_Write_File;
    my_Write_File.open("the_Encrypted_Message.txt");
    my_Write_File << message;

    my_Write_File.close();
}

// void Decryption :: decryption()
// {
//      int j = 0,i,keay;
//     char keay_Encryptor;

//     if(message[j] == 'H')
//     {
//         keay = 15;
//         for (j = 0 ; j < message.length() ; j++)
//         {
//             if ( j >= 3 && j <= 9)
//             {
//                 message[j] = message[j] - 43;
//             }

//             else if(j >= 20 && j <= 29)
//             {
//                 message[j] = message[j] - 69;
//             }

//             else{
//                 message[j] = message[j] + keay;
//             }

//         }
//     }

//     else{
//         for (j = 0 ; j < message.length(); j++)
//         {
//             if ( j > 21 && j < 38)
//             {
//                 message[j] = message[j] - 43;
//             }

//             else if(j <= 11)
//             {
//                 message[j] = message[j] - 69;
//             }

//             else{
//                 message[j] = message[j] - 123;
//             }
//         }
//     }

//     cout << endl << "Our decryted Message: " << message;
// }

void Decryption :: decryption()
{
    ifstream my_Read_File;
    my_Read_File.open("the_Encrypted_Message.txt");
    
}

int main()
{
    Decryption *decrypt = new Decryption;
    char *ch = new char;
    decrypt -> get_Message();
    decrypt -> encryption();
    decrypt -> decryption();
    return 0;
}