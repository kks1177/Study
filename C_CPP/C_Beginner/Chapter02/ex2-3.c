// ex2-3.c
// 소스 수정하기 (도움말 출력)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a, b;
	int result;

	printf("첫 번쨰 계산할 값을 입력하세요 ==> ");
	scanf("%d", &a);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
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