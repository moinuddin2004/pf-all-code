#include<iostream>
#include<string> //convert that para into Uppercase or Lowercase.
#include<conio.h>
using namespace std;
int main()
{
	char Q;
	char s[100];
	cout << "Enter any line of less than 100 aplhabets: ";
	cin.getline(s, 100);//for input string
	cout << "If you want to change given paragraph in uppercase than press 'U/u' or if in lowercase than press 'L/l' !!"<<endl;
			cin >> Q;
		//using switch case for choice of upper and lower case:
		switch (Q)
		{
		case 'U':
		case 'u':
		{ for (int i = 0; i < 100; i++)
		{
			s[i] = toupper(s[i]);//in this line toupper is used to make paragraph in Uppercase...
		}break; }
		case 'L':
		case 'l':
		{ for (int i = 0; i < 100; i++)
		{
			s[i] = tolower(s[i]);//in this line tolower is used to make paragraph in Lowercase...
		}break; }
		}
	cout << endl;
	cout << s;
	return 0;
}