// ex4-1.cpp
// 산술 연산자 사용 예

#include <stdio.h>

int main()
{
	int a, b = 5, c = 3;

	a = b + c;
	printf(" %d + %d = %d \n", b, c, a);
	a = b - c;
	printf(" %d - %d = %d \n", b, c, a);
	a = b * c;
	printf(" %d * %d = %d \n", b, c, a);
	a = b / c;
	printf(" %d / %d = %d \n", b, c, a);
	a = b % c;
	printf(" %d %% %d = %d \n", b, c, a);
}
