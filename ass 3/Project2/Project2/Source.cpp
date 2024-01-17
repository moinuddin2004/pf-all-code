#include<iostream>
using namespace std;
int Largest;
int biggest(int* xptr)
{
	Largest = (xptr[0] > xptr[1]) ? xptr[0] : xptr[1];//This line is like a if else statement...
		Largest = (Largest > xptr[2]) ? Largest : xptr[2];//it will return the largest of 3 numbers...
		return Largest;
}
int main() //In this programm we will get the highest of three                
//numbers..we have a function name biggest...
{
	int x[3];
	for (int i = 0; i < 3; i++)
	{
		int j = 1;
		cout << "Enter no " << j << ": ";
		cin >> x[i];
	}
	cout << "The Largest of the three numbers is: " << biggest(x);//Calling function...
		return 0; }