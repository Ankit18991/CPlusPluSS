#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[100];
	printf("ENTER YOUR NAME: ");
	fgets(str,100,stdin);
	
	int len=strlen(str);
	printf("\n THE LENGTH OF THE STRING =%d",len);    
	
	int length=-1;
	for (int i=0; str[i] != '\0';i++)
	{
		length++;                           //Another way to get the length of the string
	}
	
	printf("\n THE LENGTH OF THE STRING EXCLUDING THE NULL CHARACTER =%d",length);
	
	return 0;
}
