// simple_search.c
// 단순한 검색 프로그램 코드

#include <stdio.h>

int data[100];

int main(void)
{
	int i, input;

	printf("찾을 값을 입력하세요 => ");
	scanf_s("%d", &input);

	for (i = 0; i < 1000; i++) {
		if (input == data[i]) {
			printf("야호! 입력한 값을 찾았습니다..!");
			break;
		}
	}
	return 0;
}