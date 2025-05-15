// ex4-6.cpp
// 논리 연산자 사용 예 1

#include <stdio.h>

int main()
{
	int a = 99;

	printf(" AND 연산 : %d \n", (a >= 100) && (a <= 200));
	printf(" OR 연산 : %d \n", (a >= 100) || (a <= 200));
	printf(" NOT 연산 : %d \n", !(a == 100));
}
