// exam3-6.cpp
// 데이터형의 크기 확인

#include <stdio.h>

void main()
{
	printf("int 형의 크기 \t\t\t ==> %d\n", sizeof(int));
	printf("unsigned int 형의 크기\t\t ==> %d\n", sizeof(unsigned int));
	printf("short 형의 크기 \t\t ==> %d\n", sizeof(short));
	printf("unsigned short 형의 크기\t ==> %d\n", sizeof(unsigned short));
	printf("long int 형의 크기\t\t ==> %d\n", sizeof(long int));
	printf("unsigned long int 형의 크기\t ==> %d\n", sizeof(unsigned long int));
	printf("float 형의 크기\t\t\t ==> %d\n", sizeof(float));
	printf("double 형의 크기\t\t ==> %d\n", sizeof(double));
	printf("long double 형의 크기\t\t ==> %d\n", sizeof(long double));
	printf("char 형의 크기\t\t\t ==> %d\n", sizeof(char));
	printf("unsigned char 형의 크기\t\t ==> %d\n", sizeof(unsigned char));
}
