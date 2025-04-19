// exam4-9.cpp
// 동전 교환 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int inputMoney, c500, c100, c50, c10, c1;

	printf(" ## 교환할 돈은 ? ");
	scanf("%d", &inputMoney);

	c500 = inputMoney / 500;
	inputMoney %= 500;

	c100 = inputMoney / 100;
	inputMoney %= 100;

	c50 = inputMoney / 50;
	inputMoney %= 50;

	c10 = inputMoney / 10;
	inputMoney %= 10;

	c1 = inputMoney / 1;
	inputMoney %= 1;

	printf("\n 오백원짜리 ==> %d개 \n", c500);
	printf("백원짜리 ==> %d개 \n", c100);
	printf("오십원짜리 ==> %d개 \n", c50);
	printf("십원짜리 ==> %d개 \n", c10);
	printf("1원짜리 ==> %d개 \n", c1);
	printf("바꾸지 못한 잔돈 ==> %d \n", inputMoney);
}