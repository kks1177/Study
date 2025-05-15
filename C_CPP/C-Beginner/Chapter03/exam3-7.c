// exam3-7.c
// 입력된 문자열을 반대 순서로 출력

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char strr[10] = " ";
	int i = 0;

	printf("문자열을 입력 (종료시 0 입력) ==> ");
	scanf("%s", strr);

	if (strr == 0)
	{
		return 0;
	}

	for (i = sizeof(strr) - 1; i >= 0; i--)
	{
		printf("%c", strr[i]);
	}
	printf("\n");
}