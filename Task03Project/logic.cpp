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
	return m + sum(m,n - 1);
}
int sum(int n, int m) {
	if (n> m) {
		return recursion(n, m);
	}
	
	return recursion(n,m);
}