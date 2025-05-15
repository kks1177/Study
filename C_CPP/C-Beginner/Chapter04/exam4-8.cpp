// exam4-8.cpp
// 입력된 두 실수의 산술 연산

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	float num1, num2;
	float result;

	printf("실수1 입력 : ");
	scanf("%f", &num1);
	printf("실수2 입력 : ");
	scanf("%f", &num2);

	result = num1 + num2;
	printf(" %5.2f + %5.2f = %5.2f \n", num1, num2, result);
	result = num1 - num2;
	printf(" %5.2f - %5.2f = %5.2f \n", num1, num2, result);
	result = num1 * num2;
	printf(" %5.2f * %5.2f = %5.2f \n", num1, num2, result);
	result = num1 / num2;
	printf(" %5.2f / %5.2f = %5.2f \n", num1, num2, result);
	result = (int)num1 % (int)num2;
	printf(" %d %% %d = %d \n", (int)num1, (int)num2, (int)result);
}