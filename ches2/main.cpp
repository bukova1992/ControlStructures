#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;


//#define HARDCORE_1
#define HARDCORE_2
#define HARDCORE_3 
#define WIDTH  8 

void main()
{
	setlocale(LC_ALL, "");
#ifdef HARDCORE_1
	int i;
	cin >> i;
	int j = i;
	cout << i << endl;
	int n;
	cout << "¬ведите размер доски:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					cout << (i % 2 == k % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}
#endif // HARDCORE_1
#ifdef DEBUG
	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n; j++)
		{
			cout << (i / n & 1 ^ j / n & 1 ? "* " : "  ");
			//cout << ((i/n +j/n)%2? "* ":"  ");
		}
		cout << endl;
	}
#endif // HARDCORE_3 

	int h;
	cout << "¬ведите высоту треугольника:"; cin >> h;
	int nf = 1;

	for (int i = 0; i < h; i++)
	{
		cout.width(WIDTH / 2);
		cout << "";
	}
	cout << left; //задаЄм выравнивание по левому краю.
	cout << 1 << endl;
	for (int n = 1; n <= h; n++)
	{
		nf *= n;
		for (int i = 0; i < h - n; i++)
		{
			cout.width(WIDTH / 2);
			cout << "";
		}
		cout.width(WIDTH);
		cout << 1;
		int mf = 1;
		for (int m = 1; m <= n; m++)
		{
			mf *= m;
			int mnf = 1;
			for (int mn = 1; mn <= n - m; mn++)
			{
				mnf *= mn;
			}
			cout.width(WIDTH);// задаЄм ширину ввывода, а именно сколько знакопозиций будет занимать вводимое значение.
			//воздейтствует cout.width(18) только на одно вводимое значение. дл€ следующего нужно задавать ширину
			cout << nf / mf / mnf;
		}
		cout << endl;
	}
}