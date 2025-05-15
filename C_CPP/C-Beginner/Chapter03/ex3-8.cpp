// ex3-8.cpp
// 변수에 변수 대입 예 1

#include <stdio.h>

int main()
{
	int a, b = 0;
	float c, d = 0;

	a = 100;
	b = a;

	c = 111.1f;
	d = c;

	printf("a, b의 값 ==> %d, %d \n", a, b);
	printf("c, d의 값 ==> %5.1f, %5.1f \n", c, d);
}
