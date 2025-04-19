// ex4-3.cpp
// 대입 연산자와 증감 연산자 사용 예

#include <stdio.h>

int main()
{
	int a = 10;

	//printf(" a++ ==> %d \n", a++);
	a++;
	printf(" a++ ==> %d \n", a);	// 11			// printf(" a++ ==> %d \n", a++);		-> 10

	a--;
	printf(" a-- ==> %d \n", a);	// 10

	a += 5;
	printf("a += 5 ==> %d \n", a);	// 15

	a -= 5;
	printf("a -= 5 ==> %d \n", a);	// 10

	a *= 5;
	printf("a *= 5 ==> %d \n", a);	// 50

	a /= 5;
	printf("a /= 5 ==> %d \n", a);	// 10

	a %= 5;
	printf("a %%= 5 ==> %d \n", a);	// 0
}

