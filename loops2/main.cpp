#include<iostream>
#include <conio.h>
#include <math.h> 
using namespace std;
#define FACTORIAL 
#define STEPEN
void main()
//{
//setlocale(LC_ALL, "");
//int N, i;
///int factorial;
///factorial = 1; i = 1;

//cout << "������� ����� ��� ���������� ����������:" << endl; cin >> N;

//while (i <= N)
//{
	//factorial = factorial * i;
	//i++;
//}
//cout << factorial << endl;
//}
{
	setlocale(LC_ALL, "");
	double a, n, stepen;

	cout << "������� ����� ��� ���������� �������:" << endl; cin >> a;
	cout << "������� �����" << endl; cin >> n;
	stepen = pow(a, n);
	cout << stepen << endl;
}
	
