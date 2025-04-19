// ex4-4.cpp
// 증감 연산자 사용 예

#include <stdio.h>

int main()
{
	int a = 10, b;

	b = a++;
	printf(" %d \n", b);

	a += 1;
	b = a;
	printf(" %d \n", b);
}
