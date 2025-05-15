// exam5-11.cpp
// 단순 if문을 활용한 간단한 계산기

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int num1, num2;
	char op;

	printf("숫자1 입력 : ");
	scanf("%d", &num1);
	printf("연산자 입력 : ");
	scanf(" %c", &op);
	printf("숫자2 입력 : ");
	scanf("%d", &num2);

	if (op == '+')
		printf("%d + %d = %d 입니다. \n", num1, num2, num1+num2);
	if (op == '-')
		printf("%d - %d = %d 입니다. \n", num1, num2, num1-num2);
	if (op == '*')
		printf("%d * %d = %d 입니다. \n", num1, num2, num1*num2);
	if (op == '/')
		printf("%d / %d = %d 입니다. \n", num1, num2, num1/(float)num2);
	if (op == '%')
		printf("%d %% %d = %d 입니다. \n", num1, num2, num1 % num2);
}