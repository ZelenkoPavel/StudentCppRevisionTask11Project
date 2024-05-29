#include "tasks.h"

/*	Task 04. Max Number Digit [������������ ����� �����]
*
*	���� ����� ����� (����� ���� ��� �������������, ��� � �������������).
*	������� ������������ ����� ��������� �����, ��������� ����������� ��������.
*
*	������ ������� ������ [input]
*	�� ���� ������� ��������� ������� ����� ����� ���� long long.
*
*	������ �������� ������ [output]
*	������� ������ ���������� ����� �����, ������� �������� �������� �������.
*
*	[ input 1]: 12345
*	[output 1]: 5
*
*	[ input 2]: 54321
*	[output 2]: 5
*
*	[ input 3]: 11111
*	[output 3]: 1
*
*	[ input 4]: 0
*	[output 4]: 0
*
*	[ input 5]: -12345
*	[output 5]: 5
*/

int task04(long long number) {
	number = number < 0 ? -number : number;

	int max_digit = 0;

	while (number > 0) {
		int n = number % 10;

		if (n > max_digit) {
			max_digit = n;
		}

		number /= 10;
	}

	return max_digit;
}