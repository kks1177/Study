// ex4-11.cpp
// 비트 연산에 마스크를 사용한 예

#include <stdio.h>

int main()
{
	char a = 'A', b, c;
	char mask = 0x0F;		// 마스크 값 (0000, 1111(2) 설정

	printf(" %X & %X = %X \n", a, mask, a & mask);
	printf(" %X | %X = %X \n", a, mask, a | mask);

	mask = 'a' - 'A';

	b = a ^ mask;
	printf(" %c ^ %d = %c \n", a, mask, b);

	a = b ^ mask;
	printf(" %c ^ %d = %c \n", b, mask, a);
}
