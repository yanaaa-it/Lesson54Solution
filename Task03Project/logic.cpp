// Task 03 [The sum II]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от N до M.

#include "logic.h"
int recursion(int n,int m) {
	if (m ==n) {
		return n;
	}
	return m + recursion(n,m - 1);
}
int sum(int n, int m) {
	if (n> m) {
		return recursion(m, n);
	}
	
	return recursion(n,m);
}