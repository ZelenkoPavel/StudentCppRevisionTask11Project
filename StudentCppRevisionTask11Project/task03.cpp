#include "tasks.h"

/*	Task 03. Sum of Number Digits [������� ����� ���� �����]
*
*	���� ����� ����� (����� ���� ��� �������������, ��� � �������������).
*	����������� ����� ��� ����.
*
*	������ ������� ������ [input]
*	�� ���� ������� ��������� ������� ����� ����� ���� long long.
*
*	������ �������� ������ [output]
*	������� ������ ���������� ����� �����, ������� �������� �������� �������.
*
*	[ input 1]: 123456
*	[output 1]: 21
*
*	[ input 2]: 9
*	[output 2]: 9
*
*	[ input 3]: 0
*	[output 3]: 0
*
*	[ input 4]: -15
*	[output 4]: 6
*/

int task03(long long number) {
	number = number < 0 ? -number : number;

	if (number < 10) {
		return number;
	}

	int result = 0;

	while (number > 0) {
		result += number % 10;
		number /= 10;
	}

	return result;
}