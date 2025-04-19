// ex4-14.cpp
// 비트 오른쪽 시프트 연산자 사용 예

#include <stdio.h>

int main()
{
	int a = 10;

	printf(" %d를 오른쪽 1회 시프트하면 %d 이다. \n", a, a >> 1);
	printf(" %d를 오른쪽 2회 시프트하면 %d 이다. \n", a, a >> 2);
	printf(" %d를 오른쪽 3회 시프트하면 %d 이다. \n", a, a >> 3);
	printf(" %d를 오른쪽 4회 시프트하면 %d 이다. \n", a, a >> 4);
}