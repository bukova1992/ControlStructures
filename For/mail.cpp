#include <iostream>
using namespace std;
#define MULPLICATION
//#define SIMPLE_NUMBERS
void main()
{
	/*int fib (int place)
	unsigned long Old value = 0;
	unsigned long value = 1;
	unsigned long hold;
	if (i < 1);
	for (int n = 1; n < place; n++)
	{
	hold = value;
	value += old value;
	oldvalue = hold;
		}
	}*/

#ifdef SIMPLE_NUMBERS

#endif // SIMPLE_NUMBERS
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите предел:"; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;
		for (int j = 2; j < i; j++)
		{
			if (i% j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
	cout << endl;
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << "*" << j <<"=" << i * j << endl;
		}
	}
}
