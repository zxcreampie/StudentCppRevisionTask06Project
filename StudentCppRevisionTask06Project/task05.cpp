﻿#include "tasks.h"

/*	Task 05. Chess & Bishop [шахматный слон]
*
*	Шахматный слон (chess bishop) ходит только по диагоналям.
*	Даны две различные клетки шахматной доски, определите,
*	может ли слон попасть с первой клетки на вторую одним ходом.
*
*	Формат входных данных [input]
*	Функция принимает на вход четыре числа от 1 до 8 каждое (не забудьте про "защиту от дурака"),
*	задающие номер столбца и номер строки сначала для первой клетки (x1, y1),
*	потом для второй клетки (x2, y2).
*
*	Формат выходных данных [output]
*	Функция должна возвратить булевское значение - результат решения.
*
*	[ input 1]: 4 4 5 5
*	[output 1]: true
*
*	[ input 2]: 4 4 4 8
*	[output 2]: false
*/

bool task05(int x1, int y1, int x2, int y2) {
	if (x1 < 1 || x2 < 1 || y1 < 1 || y2 < 1 || x1>8 || x2>8 || y1>8 || y2>8) {
		return false;
	}
	if (x1 == x2 && y1 == y2) {
		return false;
	}
	int xx = abs(x1-x2);
	int yy = abs(y1-y2);
	cout <<"xx = " << xx << "  yy= " << yy << endl;
	/*int xx1 = x2 - x1;
	int yy1 = y2 - y1;*/

	

	return abs(xx) == abs(yy) ? true : false;
}