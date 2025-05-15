// exam6-12.cpp
// 중복 if문을 활용한 간단한 계산기

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int num1, num2;
	float result = 0;
	char op;
	
	printf("숫자1 입력 : ");
	scanf("%d", &num1);
	printf("연산자 입력 : ");
	scanf(" %c", &op);
	printf("숫자2 입력 : ");
	scanf("%d", &num2);

	if (op == '+') {
		result = num1 + num2;
		printf("%d + %d = %d 입니다. \n", num1, num2, result);
	}
	else if (op == '-') {
		result = num1 - num2;
		printf("%d - %d = %d 입니다. \n", num1, num2, result);
	}
	else if (op == '*') {
		result = num1 * num2;
		printf("%d * %d = %d 입니다. \n", num1, num2, result);
	}
	else if (op == '/') {
		result = num1 / (float)num2;
		printf("%d / %d = %f 입니다. \n", num1, num2, (float)result);
	}
	else if (op == '%') {
		result = num1 % num2;
		printf("%d %% %d = %d 입니다. \n", num1, num2, result);
	}
	else
		printf("잘못된 연산자 입력!");
}