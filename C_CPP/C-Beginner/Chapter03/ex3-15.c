// ex3-15.c
// 문자열 형식 사용 예 2

#include <stdio.h>

int main()
{
	char str[10] = "012345678"; // 0123456789  <-- 책에는 9까지

	printf("str ==> %s \n", str);

	str[0] = 'I';
	str[1] = 'T';
	str[2] = 'C';
	str[3] = 'o';
	str[4] = 'o';
	str[5] = 'k';
	str[6] = '\0';

	printf("str ==> %s \n", str);
	printf("str[7] ==> %c \n", str[7]);
	// printf("str[50] ==> %c \n", str[50]);
}
