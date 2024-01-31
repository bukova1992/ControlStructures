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
		if (key == 'w'||key=='W'||key== UP_ARROW)cout << "Вперёд" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW )cout << "Налево" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)cout << "Назад" << endl;
		else if (key == 'd' || key == 'D' || key == RINGT_ARROW)cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прыжок" << endl;
		else if (key == 13)cout << "Огонь" << endl;
		else if (key != 27)cout << "Error" << endl;
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