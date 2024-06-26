#include "tasks.h"

/*	Task 01. The Greatest Natural Divisor [���������� ����������� ��������]
*
*	���� ����������� ����� �����.
*	������� ��� ���������� ����������� ��������, �������� �� ������ ����� �����.
*	���� ������ ������� �����������, �.�. ������ ����, �� ���������� ����.
*
*	������ ������� ������ [input]
*	�� ���� ������� ��������� ����� ����� ���� int.
*
*	������ �������� ������ [output]
*	������� ������ ���������� ����� �����, ������� �������� �������� �������.
*
*	[ input 1]: 15
*	[output 1]: 5
*
*	[ input 2]: 49
*	[output 2]: 7
*
*	[ input 3]: 1
*	[output 3]: 0
*
*	[ input 4]: -15
*	[output 4]: 0
*/

int task01(int number) {

	if (number < 2){
		return 0;
	}

	for (int i = number - 1; i > 0; i--)
	{
		if (number % i == 0) {
			return i;
		}
	}

	return 0;
}