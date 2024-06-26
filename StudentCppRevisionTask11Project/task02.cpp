#include "tasks.h"

/*	Task 02. All Integer Powers of Two [��� ����� ������� �����]
*
*	�� ��������� ����� ������������ ��� ����� ������� ������,
*	�� ������������� ������� �����, � ������� �����������.
*	� ������ ������������ ������ ����������� ����.
*
*	������ ������� ������ [input]
*	�� ���� ������� ��������� ����� ����� ���� int.
*
*	������ �������� ������ [output]
*	������� ������ ���������� ������, ������� �������� ����� �� �������.
*
*	[ input 1]: 40
*	[output 1]: 1 2 4 8 16 32
*
*	[ input 2]: 1
*	[output 2]: 1
*
*	[ input 3]: 0
*	[output 3]: 0
*
*	[ input 4]: -40
*	[output 4]: 0
*/

string task02(int number) {
	if (number < 1){
		return "0";
	}

	string result;

	for (int i = 0; pow(2, i) <= number; i++) {
		int n = pow(2, i);
		result += to_string(n);
		result += n * 2 > number ? "" : " ";
	}

	return result;
}