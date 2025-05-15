// ex4-15.cpp
// 비트 왼쪽 시프트, 비트 오른쪽 시프트 연산자 사용 예

#include <stdio.h>

int main()
{
	int a = 100, result;
	int i;

	for (i = 1; i <= 5; i++) {
		result = a << i;
		printf("%d << %d = %d \n", a, i, result);
	}

	for (i = 1; i <= 5; i++) {
		result = a >> i;
		printf("%d >> %d = %d \n", a, i, result);
	}
}