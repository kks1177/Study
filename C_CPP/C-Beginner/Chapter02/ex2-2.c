// ex2-2.c
// 소스 수정하기 (키보드로 값을 입력받음)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a, b;
	int result;

	scanf("%d", &a);
	scanf("%d", &b);

	result = a + b;
	printf(" %d + %d = %d \n", a, b, result);

	result = a - b;
	printf(" %d - %d = %d \n", a, b, result);

	result = a * b;
	printf(" %d * %d = %d \n", a, b, result);

	result = a / b;
	printf(" %d / %d = %d \n", a, b, result);
}

