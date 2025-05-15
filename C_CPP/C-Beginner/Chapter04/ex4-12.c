// ex4-12.c
// 비트 부정 연산자 사용 예

#include <stdio.h>

int main()
{
	int a = 12345;

	printf(" %d \n", ~a + 1); // 2의 보수(a 값)을 구한다.
}