#include<iostream>
using namespace std;
int main()
{
	cout << "\n\t\tsimple calculator\n";
	char op;
	int a,b;

	cout << "enter the operators (+,-,*,/)\n";
	cin >> op;

	cout << "enter the first numbers\n";
	cin >> a;
	cout << "enter the second numbers\n";
	cin >> b;
	
	if ( op == '+') {
		cout << "sum is==>" << a + b << endl;}
	
	else if (op == '-'){

		cout << "sub is==>" << a - b << endl;}
	else if (op == '*'){

		cout << "multi is==>" << a * b << endl;}
	else if (op == '/'){

		cout << "div is==>" << a / b << endl;}
    else{
         cout<<"you enter wrong"<<endl; }

	return 0;
}