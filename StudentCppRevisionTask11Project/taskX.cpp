#include "tasks.h"

/*	Task X. The Count of Min Number Digits [количество наименьших цифр числа]
*
*	Дано целое число (может быть как положительным, так и отрицательным).
*	Определите, используя эффективный алгоритм, какое количество цифр
*	заданного числа равны его наименьшей цифре.
*
*	Примечание
*	Для эффективного алгоритма рекомендуется использовать только один цикл.
*
*	Формат входных данных [input]
*	На вход функция принимает длинное целое число типа long long.
*
*	Формат выходных данных [output]
*	Функция должна возвратить число, которое является решение задачи.
*
*	[ input 1]: 1234
*	[output 1]: 1
*
*	[ input 2]: 4112
*	[output 2]: 2
*
*	[ input 3]: 100
*	[output 3]: 2
*
*	[ input 4]: -2222
*	[output 4]: 4
*/

int taskX(long long number) {
	number = number < 0 ? -number : number;

	int count = number == 0 ? 1 : 0;
	int min_digit = 9;

	long long n = number;

	while (n > 0) {
		int digit = n % 10;
		if (min_digit > digit) {
			min_digit = digit;
		}
		n /= 10;
	}

	while (number > 0) {
		int digit = number % 10;
		if (digit == min_digit) {
			count++;
		}
		number /= 10;
	}

	return count;
}