#pragma once
#include "tasks.h"

#define MIN_NUMBER 1
#define MAX_NUMBER 8

#define RIGHT "completed successfully. Well DONE!!!"
#define WRONG "was not running successfully. Something was WRONG!"

typedef bool(*CHESS_FUNCTION)(int, int, int, int);

bool basic_check(CHESS_FUNCTION function) {
	return !function(0, 2, 2, 2)
		&& !function(2, 0, 2, 2)
		&& !function(2, 2, 0, 2)
		&& !function(2, 2, 2, 0)
		&& !function(-1, 3, 3, 3)
		&& !function(3, -1, 3, 3)
		&& !function(3, 3, -1, 3)
		&& !function(3, 3, 3, -1)
		&& !function(9, 5, 5, 5)
		&& !function(5, 9, 5, 5)
		&& !function(5, 5, 9, 5)
		&& !function(5, 5, 5, 9);
}

void testingTask01() {
	bool result = !task01(0, 2)
		&& !task01(2, 0)
		&& !task01(-1, 3)
		&& !task01(3, -1)
		&& !task01(9, 5)
		&& !task01(5, 9);

	for (int x = MIN_NUMBER; x <= MAX_NUMBER; x += 2)
	{
		for (int y = MIN_NUMBER; y <= MAX_NUMBER; y += 2)
		{			
			if (!task01(x, y)) {
				result = false;
				goto lable;
			}
		}
	}
	
	for (int x = MIN_NUMBER + 1; x <= MAX_NUMBER; x += 2)
	{
		for (int y = MIN_NUMBER + 1; y <= MAX_NUMBER; y += 2)
		{
			if (!task01(x, y)) {
				result = false;
				goto lable;
			}
		}
	}

	for (int x = MIN_NUMBER; x <= MAX_NUMBER; x += 2)
	{
		for (int y = MIN_NUMBER + 1; y <= MAX_NUMBER; y += 2)
		{
			if (task01(x, y)) {
				result = false;
				goto lable;
			}
		}
	}

	for (int x = MIN_NUMBER + 1; x <= MAX_NUMBER; x += 2)
	{
		for (int y = MIN_NUMBER; y <= MAX_NUMBER; y += 2)
		{
			if (task01(x, y)) {
				result = false;
				goto lable;
			}
		}
	}

lable:
	cout << "Task 01 " << (result ? RIGHT : WRONG) << endl;
}


void testingTask02() {
	bool result = basic_check(task02);
		
	for (int x = MIN_NUMBER; x <= MAX_NUMBER; x++)
	{
		for (int y = MIN_NUMBER; y < MAX_NUMBER; y++)
		{
			if (!task02(x, y, x, y + 1)) {
				result = false;
				goto lable;
			}
		}
	}

	for (int x = MIN_NUMBER; x <= MAX_NUMBER; x++)
	{
		for (int y = MIN_NUMBER; y < MAX_NUMBER; y++)
		{
			int d1 = rand() % MAX_NUMBER + MIN_NUMBER;
			int d2 = rand() % MAX_NUMBER + MIN_NUMBER;

			if (task02(x, y, x + d1, y + d2)) {
				result = false;
				goto lable;
			}
		}
	}

lable:
	cout << "Task 02 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {
	bool result = basic_check(task03)
		&& !task03(4, 4, 5, 5)
		&& !task03(4, 4, 3, 3)
		&& !task03(4, 4, 3, 5)
		&& !task03(4, 4, 5, 3)
		&& !task03(4, 4, 7, 1)
		&& !task03(4, 4, 1, 7)
		&& !task03(4, 4, 1, 1)
		&& !task03(4, 4, 7, 7)
		&& !task03(4, 4, 4, 4)
		&& task03(4, 4, 4, 1)
		&& task03(4, 4, 4, 2)
		&& task03(4, 4, 4, 3)
		&& task03(4, 4, 4, 5)
		&& task03(4, 4, 4, 6)
		&& task03(4, 4, 4, 7)
		&& task03(4, 4, 4, 8)
		&& task03(4, 4, 1, 4)
		&& task03(4, 4, 2, 4)
		&& task03(4, 4, 3, 4)
		&& task03(4, 4, 5, 4)
		&& task03(4, 4, 6, 4)
		&& task03(4, 4, 7, 4)
		&& task03(4, 4, 8, 4);

	cout << "Task 03 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask04() {
	bool result = basic_check(task04)
		&& !task04(5, 3, 5, 5)
		&& !task04(5, 3, 3, 3)
		&& !task04(5, 3, 5, 3)
		&& !task04(5, 3, 3, 5)
		&& !task04(5, 3, 7, 1)
		&& !task04(5, 3, 1, 7)
		&& !task04(5, 3, 3, 1)
		&& !task04(5, 3, 7, 5)
		&& !task04(5, 3, 7, 3)
		&& task04(5, 3, 5, 4)
		&& task04(5, 3, 5, 2)
		&& task04(5, 3, 6, 3)
		&& task04(5, 3, 4, 3)
		&& task04(5, 3, 4, 2)
		&& task04(5, 3, 4, 4)
		&& task04(5, 3, 6, 2)
		&& task04(5, 3, 6, 4);


	cout << "Task 04 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask05() {
	bool result = basic_check(task05)
		&& !task05(6, 4, 5, 4)
		&& !task05(6, 4, 6, 4)
		&& !task05(6, 4, 7, 4)
		&& !task05(6, 4, 6, 3)
		&& !task05(6, 4, 6, 5)
		&& task05(6, 4, 8, 2)
		&& task05(6, 4, 7, 3)
		&& task05(6, 4, 4, 6)
		&& task05(6, 4, 3, 7)
		&& task05(6, 4, 2, 8)
		&& task05(6, 4, 3, 1)
		&& task05(6, 4, 4, 2)
		&& task05(6, 4, 5, 3)
		&& task05(6, 4, 7, 5)
		&& task05(6, 4, 8, 6)
		&& task05(6, 4, 5, 5);

	cout << "Task 05 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask06() {
	bool result = basic_check(task06)
		&& !task06(6, 4, 5, 2)
		&& !task06(6, 4, 6, 4)
		&& !task06(6, 4, 2, 6)
		&& !task06(6, 4, 1, 1)
		&& !task06(6, 4, 8, 8)
		&& !task06(6, 4, 3, 6)
		&& !task06(6, 4, 4, 5)
		&& !task06(6, 4, 5, 7)
		&& !task06(6, 4, 8, 3)
		&& task06(6, 4, 8, 2)
		&& task06(6, 4, 7, 3)
		&& task06(6, 4, 5, 5)
		&& task06(6, 4, 4, 6)
		&& task06(6, 4, 3, 7)
		&& task06(6, 4, 2, 8)
		&& task06(6, 4, 3, 1)
		&& task06(6, 4, 4, 2)
		&& task06(6, 4, 5, 3)
		&& task06(6, 4, 7, 5)
		&& task06(6, 4, 8, 6)
		&& task06(6, 4, 5, 4)
		&& task06(6, 4, 4, 4)
		&& task06(6, 4, 3, 4)
		&& task06(6, 4, 2, 4)
		&& task06(6, 4, 1, 4)
		&& task06(6, 4, 7, 4)
		&& task06(6, 4, 8, 4)
		&& task06(6, 4, 6, 3)
		&& task06(6, 4, 6, 2)
		&& task06(6, 4, 6, 1)
		&& task06(6, 4, 6, 6)
		&& task06(6, 4, 6, 7)
		&& task06(6, 4, 6, 8)
		&& task06(6, 4, 6, 5);


	cout << "Task 06 " << (result ? RIGHT : WRONG) << endl;
}

void testingTaskX() {

	bool result = basic_check(taskX)
		&& !taskX(3, 6, 5, 3)
		&& !taskX(3, 6, 3, 6)
		&& !taskX(3, 6, 7, 5)
		&& !taskX(3, 6, 8, 6)
		&& !taskX(3, 6, 5, 4)
		&& !taskX(3, 6, 7, 4)
		&& !taskX(3, 6, 6, 3)
		&& !taskX(3, 6, 6, 5)
		&& taskX(3, 6, 1, 5)
		&& taskX(3, 6, 2, 4)
		&& taskX(3, 6, 4, 4)
		&& taskX(3, 6, 5, 5)
		&& taskX(3, 6, 5, 7)
		&& taskX(3, 6, 4, 8)
		&& taskX(3, 6, 2, 8)
		&& taskX(3, 6, 1, 7);

	cout << "Task X  " << (result ? RIGHT : WRONG) << endl;
}