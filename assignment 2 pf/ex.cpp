#include<iostream>
#include<conio.h>
using namespace std;

double charges(double hours)
{
	double h=hours;
	double charge= 2.0;
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
    cout<<"moin uddin\n";
    cout<<"roll no.028\n";
	int cust;
	double one, two, three, hours;
	for(cust=1; cust<=3; cust++)
	{
		cout<<"Enter customer "<<cust<<" parking hours: ";
		cin>>hours;
    switch(cust)
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
	cout <<"\t\t"<< " Cars "<<"\t\t"<< "Hours"<<"\t\t"<<"Charges"<<endl;
	cout <<"\t\t"<< " 1 "<<"\t\t"<< one <<"\t\t"<<charges(one)<<endl;
	cout << "\t\t"<<" 2 " << "\t\t"<<two<<"\t\t"<<charges(two)<<endl;
	cout <<"\t\t"<< " 3 " << "\t\t"<<three<<"\t\t"<<charges(three)<<endl;
	cout <<"\t\t"<< "Total" <<"\t\t"<< one+two+three<<"\t\t"<<charges(one)+charges(two)+charges(three)<<endl;
	
    return 0;
}