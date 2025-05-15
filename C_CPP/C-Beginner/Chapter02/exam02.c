// exam02.c
// if문을 활용한 계산기

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int num1, num2;
	float result;
	int op;

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf(" %d", &num1);
	printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 <5>나머지 ==> ");
	scanf(" %d", &op);
	printf("두 번쨰 계산할 값을 입력하세요 ==> ");
	scanf(" %d", &num2);

	if (op == 1) {
		result = num1 + num2;
		printf(" %d + %d = %.1f \n", num1, num2, result);
	} 
	if (op == 2) {
		result = num1 - num2;
		printf(" %d - %d = %.1f \n", num1, num2, result);
	}
	if (op == 3) {
		result = num1 * num2;
		printf(" %d * %d = %.1f \n", num1, num2, result);
	}
	if (op == 4) {
		result = (float)num1 / num2;
		printf(" %d / %d = %.1f \n", num1, num2, result);
	}
	if (op == 5) {
		result = num1 % num2;
		printf(" %d / %d = %.1f\n", num1, num2, result);
	}
}
