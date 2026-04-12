// Task 09 [The sum VI]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму цифр заданного числа, кратных 5.

#include "logic.h"

int recursion(int number) {
    if (number == 0) {
        return 0;
    }
    int last_digit = number % 10;
    int current_sum = 0;

    current_sum = last_digit % 5 == 0 ?  last_digit : 0;
  
    return current_sum + recursion(number / 10);
}

int sum(int number) {
    if (number < 0) {
        number = abs(number);
    }
    return recursion(number);
}