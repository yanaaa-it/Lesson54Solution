// Task 01 [The sum I]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от 1 до N.

#include "logic.h"
int recursion(int number){
	if (number == 1) {
		return number;
	}
	return number+ recursion(number-1);
}

int sum(int number) {
	if (number <= 0) {
		return -1;
	}
	return recursion(number);
}