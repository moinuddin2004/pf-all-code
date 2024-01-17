#include<iostream>
#include<string>
using namespace std;
int H = 1;//initializing
string Position(string strptr, string sub_strptr, int yy, int xx)
{
	cout << "Enter Position from which you want to extract 4 chracters:";
	cin >> yy;//In this program we will enter a number as the position from where 
    //we will the sub string($ characters long) of the already given string.


		for (int i = 0; i <= xx; i++)
		{
			if (H < 5)
			{
				sub_strptr += strptr[yy - 1];
			}
			H++; yy++;
		}
	return sub_strptr;
}

int main()
{
	string str, sub_str;
	int x = 0, y = 0;
	cout << "Enter String: ";
     getline(cin, str);
	x = str.size();

	cout << "The New string from the position you enetr is: "<<Position(str,sub_str,y,x);
		cout << endl;
	return 0;
}
