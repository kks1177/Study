// efficient_search.c
// 그나마 알고리즘스러운 검색 프로그램

#include <stdio.h>

int data[100];

int main(void)
{
	int i, input, min, max;

	printf("찾을 값을 입력하세요 => ");
	scanf_s("%d", &input);

	min = 0;
	max = 1000;
	i = max / 2;

	while (1) {
		if (input == data[i]) {
			printf("야호! 입력한 겂을 찾았습니다..!");
			break;
		}
		else if (input < data[i]) {
			max = max / 2;
		}	
		else
			min = max / 2;

		i = max / 2;
	}
	return 0;
}
