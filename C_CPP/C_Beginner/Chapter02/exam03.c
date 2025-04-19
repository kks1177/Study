// exam03.c
// 오류 없는 계산기

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int num1, num2;
	float result;
	char op;

	printf("첫 번째 계산할 값 ==> ");
	scanf("%d", &num1);
	printf("+ - * / ==> ");
	scanf(" %c", &op);
	printf("두 번쨰 계산할 값 ==> ");
	scanf("%d", &num2);

	if (op == '+') {
		result = num1 + num2;
		printf(" %d + %d = %.1f \n", num1, num2, result);
	} 
	if (op == '-') {
		result = num1 - num2;
		printf(" %d - %d = %.1f \n", num1, num2, result);
	}
	if (op == '*') {
		result = num1 * num2;
		printf(" %d * %d = %.1f \n", num1, num2, result);
	}
	if (op == '/') {
		if (num2 != 0) {
			result = (float)num1 / num2;
			printf(" %d / %d = %.1f \n", num1, num2, result);
		} 
		else
			printf(" 0으로 나누면 안됩니다. \n");
	}
	if (op == '%') {
		if (num2 != 0) {
			result = num1 % num2;
			printf(" %d %% %d = %.1f \n", num1, num2, result);
		}
		else
			printf(" 0으로 나누면 나머지값이 안됩니다. \n");
	}
}
