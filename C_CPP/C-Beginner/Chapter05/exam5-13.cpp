// exam5-13.cpp
// switch~case 문을 활용한 간단한 계산기

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int num1, num2;
	char op;

	printf("수식을 한 줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d", &num1, &op, &num2);

	switch (op) {
	case '+':
		printf("%d + %d = %d 입니다. \n", num1, num2, num1 + num2);
		break;
	case '-':
		printf("%d - %d = %d 입니다. \n", num1, num2, num1 - num2);
		break;
	case '*':
		printf("%d * %d = %d 입니다. \n", num1, num2, num1 * num2);
		break;
	case '/':
		printf("%d / %d = %d 입니다. \n", num1, num2, num1 / num2);
		break;
	case '%':
		printf("%d % %d = %d 입니다. \n", num1, num2, num1 % num2);
		break;
	default:
		printf("잘못된 연산자 입력! \n");
	}
}