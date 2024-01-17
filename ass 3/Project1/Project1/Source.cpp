#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<conio.h>
#include<string>
using namespace std;
struct Library //THIS IS THE DECLEARATION OF STRUCTURE...
{
	int accession_number = 0;
	string Title;
	string author_name;
	float price = 0;
	string flag;
};
struct Library book[4];
void add(struct Library book[4])//THIS FUNCTION WILL MAKE CHANGES IN BOOK...
{
	for (int i = 0; i < 4; i++)
	{
		char Q;
		cout << "Do you want to make changes in book " << book[i].accession_number << "? ";
		cin >> Q;
		if (Q == 'y')
		{
			cout << "What is the accession number of the book? " << endl;
			cin >> book[i].accession_number;
			cout << "What is the Title of the book? " << endl;
			cin >> book[i].Title;
			cout << "what is the author name? " << endl;
			cin >> book[i].author_name;
			cout << "What is the price of the book? " << endl;
			cin >> book[i].price;
			cout << "Book is issued or not? " << endl;
			cin >> book[i].flag;
		}
	}
}
void display(struct Library book[4])//THIS FUNCTION WILL DISPLAY BOOK 
//INFORMATION..
{
	cin.ignore();
	string B;
	int a = 1;
	cout << "Which BOOK information do you want?";
	getline(cin, B);
	for (int j = 0; j < 4; j++)
	{

		if (B == book[j].Title)
		{
			cout << "The accession number of book " << a << " is: "<<book[j].accession_number<<endl;
				cout << "The Title of book " << a << " is: " << book[j].Title << endl;
			cout << "The author name of book " << a << " is: " << book[j].author_name << endl;
			cout << "The Price of book " << a << " is: " << book[j].price << endl;
			cout << "The book " << a << " is: " << book[j].flag << endl;
		}
		a++;
	} }
void Books_List(struct Library book[4])//THIS FUNCTION WILL DISPLAY BOOK WHEN 
//WE ENTER AUTHOR NAME...
{
	cin.ignore();
	int a = 1; string N;
	cout << "Enter name of the author whose book you want: ";
	getline(cin, N);
	for (int L = 0; L < 4; L++)
	{
		if (N == book[L].author_name)
		{
			cout << "The book " << "''" << book[L].Title << "''" << " is written by given author "<<book[L].author_name<<"."<<endl;
		}
	} }
void Titles(struct Library book[4])//THIS FUNCTION WILL DISPLAY BOOK WHEN WE 
//ENTER ACCESSION NUMBER OF BOOK...
{
	int a = 1; int Na;
	cout << "Enter accession number of the book you want: ";
	cin >> Na;
	for (int h = 0; h < 4; h++)
	{
		if (Na == book[h].accession_number)
		{
			cout << "The book " << "''" << book[h].Title << "''" << " is written by "<<"'"<<book[h].author_name<<"'"<<"."<<endl;
		}
	}
}
void Counts(struct Library book[4])//THIS FUNCTION WILL COUNT TOTAL NUMBER OF 
//BOOKS PRESENT IN LIBRARY....
{
	int no = 0;
	for (int g = 0; g < 4; g++)
	{
		no++;
	}
	cout << "The total number of books in library are: " << no << endl;
}
void Info_with_order_accs_no(struct Library book[4])//THIS FUNCTION WILL 
//DISPLAY ALL BOOKS INFORMATION IN THE ORDER OF THIER ACCESSION NUMBER...
{
	int a = 1;
	for (int j = 0; j < 4; j++)
	{
		cout << "The accession number of book " << a << " is: "<<book[j].accession_number<<endl;
			cout << "The Title of book " << a << " is: " << book[j].Title << endl;
		cout << "The author name of book " << a << " is: " << book[j].author_name << endl;
		cout << "The Price of book " << a << " is: " << book[j].price << endl;
		cout << "The book " << a << " is: " << book[j].flag << endl << endl;
		a++;
	} }
void menu(struct Library book[4])//ALL OTHER FUNCTIONS ARE RECALLED IN THIS 
//FUNCTION...ITSLIKE ALL THE FUNCTIONS ARE THE SUBSET OF THIS FUNCTION...
{
	cout << " press(a) Add book information" << endl;
	cout << "press(b) Display book information" << endl;
	cout << "press(c) List all books of given author" << endl;
	cout << "press(d) List the title ofspecified book" << endl;
	cout << "press(e) List the count of books in the library" << endl;
	cout << "press(f) List the books in the order of accession number" << endl;
	cout << "press(g) Exit" << endl << endl;
	char D;
	cout << "What do you want to do?" << endl;
	cin >> D;
	if (D == 'a')
	{
		add(book);
	}
	else if (D == 'b')
	{ 
		display(book);
	}
	else if (D == 'c')
	{
		Books_List(book);
	}
	else if (D == 'd')
	{
		Titles(book);
	}
	else if (D == 'e')
	{
		Counts(book);
	}
	else if (D == 'f')
	{
		Info_with_order_accs_no(book);
	}
	else if (D == 'g') {
		cout << "\t==Program is closed==";
		exit(0);
	}}
int main()
{
	book[0].accession_number = 01;
	book[0].Title = "The Odyssey";
	book[0].author_name = "Homer";
	book[0].price = 10.99;
	book[0].flag = "issued";
	book[1].accession_number = 02;
	book[1].Title = "Gulliver's Travels";
	book[1].author_name = "Jonathan Swift";
	book[1].price = 13.99;
	book[1].flag = "not-issued";
	book[2].accession_number = 03;
	book[2].Title = "Treasure Island";
	book[2].author_name = "Robert Louis Stevenson";
	book[2].price = 2.6;
	book[2].flag = "issued";
	book[3].accession_number = 04;
	book[3].Title = "The Adventures of Huckleberry Finn";
	book[3].author_name = "Mark Twain";
	book[3].price = 13.19;
	book[3].flag = "issued";
A:
	cout << "\n";
	menu(book);
	goto A;
	return 0;
}