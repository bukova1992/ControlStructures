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
		//cout << (int)key << "\t" << key << endl;
		/*if (key == 'w' || key == 'W' || key == UP_ARROW)	cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)	cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)	cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прыжок" << endl;
		else if (key == 13) cout << "Огонь" << endl;
		else if (key != 27 && key != -32)cout << "Error" << endl;*/
		//switch (key)
		switch(key)
		{
		case 'w':
		case 'W':
		case UP_ARROW:cout << "Вперёд" << endl; break;
		case 's':
		case 'S':
		case DOWN_ARROW:cout << "Назад" << endl; break;
		case 'a':
		case 'A':
		case LEFT_ARROW:cout << "Влево" << endl; break;
		case 'd':
		case 'D':
		case RINGT_ARROW:cout << "Вправо" << endl; break;
		case Escape:cout << "Выход" << endl;
		case -32:break;
		default:cout << "Error" << endl;
		} while (key != 27);
	} 

/*
--------------------------
(Loop - Петля) - это управляющая структура, которая позволяет многократно выполнить
(зациклить) определенный код.

while		- цикл с предусловием;
do...while	- цикл с постусловием;
for(...)... - цикл на заданное количество итераций;

Итерация - это однократное выполнение тела цикла.
Тело цикла - это код, который нужно закилить (многократно выполнить).
--------------------------
*/