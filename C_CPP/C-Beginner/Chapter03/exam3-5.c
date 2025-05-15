// exam3-5.c
// 입력하는 정수의 진수 결정

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int dataType = 0;
	int data = 0;

	for (;;)
	{
		printf("입력진수 결정 <1>10진수, <2>16진수, <3>8진수, <종료>0 :");
		scanf_s("%d", &dataType);

		if (dataType == 0)
		{
			return 0;
		}

		printf("값 입력 : ");

		if (dataType == 1)
		{
			scanf_s("%d", &data);
		}
		else if (dataType == 2)
		{
			scanf_s("%x", &data);
		}
		else if (dataType == 3)
		{
			scanf_s("%o", &data);
		}

		printf("10진수 ==> %d \n", data);
		printf("16진수 ==> %X \n", data);
		printf("8진수 ==> %o \n\n", data);
	}
}
