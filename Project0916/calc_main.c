//calc_main.c
#include <stdio.h>
#include "calc.h"

int main(void) {
	int a = 4, b = 0;
	
	printf("���ϱ� �����: %d\n", Sum(a, b)); // 9
	printf("���� �����: %d\n", Sub(a, b)); // -1
	printf("���ϱ� �����: %d\n", Mul(a, b)); // 20
	printf("������ �����: %d\n", Div(a, b)); // ???

	printf("������ a�� ���� ���̴�: %.3f\n", circ_area(a));
	printf("������ a�� ���� ��������: %.3f\n", circ_circ(a));

	return 0;
}