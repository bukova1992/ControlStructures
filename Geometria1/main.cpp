#include <iostream>
using namespace std;
//#define SQUARE
//#define TRIENDEL_1 
//#define TRIENDEL_3
//#define TRIENDEL_4
//#define ROMBUS_1 
//#define ROMBUS_2

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите количество звЄздочек:"; cin >> n;

#ifdef SQUARE 
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)cout << "*";
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // 

#ifdef TRIENDEL_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIENDEL_1
	
#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3
#ifdef TRIANGLE_4 
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++)cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_4 
#ifdef ROMBUS_1
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " ";
		cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "  "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS_1
#ifdef ROMBUS_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " ";	cout << "/";
		for (int j = 0; j < i * 2; j++)cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS_2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//(i% 2 == j%2)? cout << "+ ": cout << "- ";
			cout<<(i % 2 == j % 2 ?  "+ " : "- ");
		}
		cout << endl;
	}
}
