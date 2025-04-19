// exam4-10.cpp
// 윤년 계산 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int leapYear;

	printf("연도 입력 : ");
	scanf("%d", &leapYear);

	if (((leapYear % 4 == 0) && (leapYear % 100 != 0)) || (leapYear % 400 == 0)) {
		printf("%d 년은 윤년 \n", leapYear);
	}
	else
		printf("%d 년은 윤년이 아님 \n", leapYear);
}
