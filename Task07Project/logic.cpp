// Task 07 [The number of odd digits]
// Количество нечётных цифр
//
// Необходимо спроектировать и реализовать программу, 
// которая считает количество нечётных цифр
// в заданном целом числе.


#include "logic.h"

int recursion(int number) {
	if (number == 0) {
		return 0;
	}
	int last_digit = number % 10;

	int current = (last_digit % 2 != 0) ? 1 : 0;

	return current + recursion(number / 10);
}
int count_of_odd_digits(int number) {
	number = abs(number);

	return recursion(number);
}