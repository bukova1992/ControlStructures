//Loops
#include<iostream>
#include<conio.h>
using namespace std;
#define UP_ARROW    72
#define DOWN_ARROW  80
#define LEFT_ARROW  75
#define RINGT_ARROW 77
#define Enter       13
#define Escape      27 

void main()
{
	setlocale(LC_ALL, "");

	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
		if (key == 'w'||key=='W'||key== UP_ARROW)cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW )cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == RINGT_ARROW)cout << "������" << endl;
		else if (key == ' ')cout << "������" << endl;
		else if (key == 13)cout << "�����" << endl;
		else if (key != 27)cout << "Error" << endl;
	} while (key != 27);
  }



/*
--------------------------
(Loop - �����) - ��� ����������� ���������, ������� ��������� ����������� ���������
(���������) ������������ ���.

while		- ���� � ������������;
do...while	- ���� � ������������;
for(...)... - ���� �� �������� ���������� ��������;

�������� - ��� ����������� ���������� ���� �����.
���� ����� - ��� ���, ������� ����� �������� (����������� ���������).
--------------------------
*/