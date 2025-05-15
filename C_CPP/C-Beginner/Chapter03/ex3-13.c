// ex3-13.c
// 문자형 변수 사용 예 2

#include <stdio.h>

int main()
{
	int a, b;
	char c, d;

	a = 0x41;
	b = 0x50;

	printf(" %c \n", b);

	c = a;
	printf(" %c \n", c);

	d = '#';
	printf("%c의 ASCII 값은 %d 입니다. \n", d, d);
}
