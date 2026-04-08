// Task 05 [The number of digits]
// Количество цифр числа
// 
// Необходимо спроектировать и реализовать программу, 
// которая подсчитывает количество цифр 
// в заданном целом числе.

#include "logic.h"
int recursion(int number) {
	if (number < 10) {
		return 1;
	}
	return recursion(number / 10) + 1;
}

int count(int number) {
	number = abs(number);

	return recursion(number / 10) + number % 10 % 2;
}