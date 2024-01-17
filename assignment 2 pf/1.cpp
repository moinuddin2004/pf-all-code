#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

float charges(float hours)
{
	float h=hours;
	float charge= 2.0;
	if(h > 0)
	{
		if(h <= 3)
		{
			return charge;
		}
		else if(h <= 24)
			while (h >3)
			{
				charge += 0.5;
				h--;
				if(charge >=10)
					charge=10;
			}
			return charge;
	}
	else
	{
		cout<<"No car parks for longer than 24 hours at a time.";
	}
}
int main()
{
	int cst;
	float one, two, three, hours;
	for(cst=1; cst<=3; cst++)
	{
		cout<<"Enter customer "<<cst<<" parking hours: ";
		cin>>hours;
    switch(cst)
   {
    case 1:
    one= hours;break;
    case 2:
    two= hours;break;
    case 3:
    three= hours;break;
    }

	}
	cout<<endl;
	cout << setw(10)<< left<< "Cars "<< left<< setw(10) << "Hours"<<left<< setw(10)<<"Charges"<<endl;
	cout << setw(10)<< left<< " 1"<< left<< setw(10) << one<<left<< setw(10)<<charges(one)<<endl;
	cout << setw(10)<< left<< " 2"<< left<< setw(10) << two<<left<< setw(10)<<charges(two)<<endl;
	cout << setw(10)<< left<< " 3"<< left<< setw(10) << three<<left<< setw(10)<<charges(three)<<endl;
	cout << setw(10)<< left<< "Total"<< left<< setw(10) << one+two+three<<left<< setw(10)<<charges(one)+charges(two)+charges(three)<<endl;
	
    return 0;
}