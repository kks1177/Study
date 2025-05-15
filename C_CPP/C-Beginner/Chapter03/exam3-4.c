// exam3-4.c
// 정수형을 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int num = 0;

	for (;;)
	{
		printf("정수 입력 (종료 0 입력) : ");
		scanf("%d", &num);

		if (num == 0)
		{
			return 0;
		}
		printf("10진수 ==> %d \n", num);
		printf("16진수 ==> %X \n", num);
		printf("8진수 ==> %o \n\n", num);
	}
}
