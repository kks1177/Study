// datatype_size.c
// C언어에서 제공하는 자료형의 크기 예제

#include <stdio.h>

int main(void)
{
	printf("C언어에서 제공하는 자료형의 크기를 알아보자\n");
	printf("char형의 크기 : %d\n", sizeof(char));
	printf("int형의 크기 : %d\n", sizeof(int));
	printf("short형의 크기 : %d\n", sizeof(short));
	printf("long형의 크기 : %d\n", sizeof(long));
	printf("float형의 크기 : %d\n", sizeof(float));
	printf("double형의 크기 : %d\n", sizeof(double));
	printf("long double형의 크기 : %d\n", sizeof(long double));

	return 0;
}
