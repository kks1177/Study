// ex2-1.c
// 두 번째로 만드는 C 프로그램

#include <stdio.h>

int main()
{
	int a, b;
	int result;

	a = 100;
	b = 50;

	result = a + b;
	printf(" %d + %d = %d \n", a, b, result);

	result = a - b;
	printf(" %d - %d = %d \n", a, b, result);

	result = a * b;
	printf(" %d * %d = %d \n", a, b, result);
	
	result = a / b;
	printf(" %d / %d = %d \n", a, b, result);
}

