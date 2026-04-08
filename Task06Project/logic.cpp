// Task 06 [The sum III]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чётных чисел от 1 до N.

#include "logic.h"
int recursion(int number) {
	if (number == 2) {
		return 2;
	}
	return number + sum(number - 2);
}

int sum(int number) {
	if (number <=0) {
		return number;
	}

	if (number % 2 == 1) {
		number -= 1;
	}
	if (number == 0) {
		return 0;
	}
	return recursion(number);
}