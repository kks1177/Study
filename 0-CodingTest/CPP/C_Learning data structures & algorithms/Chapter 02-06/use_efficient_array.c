// use_efficient_array.c
// 사용할 만큼의 배열만 확보하는 예제

#include <stdio.h>

int main(void)
{
	int i;
	int data[1000];

	for (i = 0; i < 10; i++) {
		data[i] = i;
	}
	return 0;
}
