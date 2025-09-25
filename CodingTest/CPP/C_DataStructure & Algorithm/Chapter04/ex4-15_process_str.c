// ex4-15_process_str.c
// p.75 배열과 포인터를 사용한 문자열 처리

#include <stdio.h>
#include <string.h>

int main()
{
	char array[5] = { 'a', 'b', 'c', 'd', 'e' };
	char buf[10] = "abcde";
	char* ptr = "abcde";

	printf("array : %d, array : %s \n", strlen(array), array);
	printf("buf : %d, buf : %s \n", strlen(buf), buf);
	printf("ptr : %d, ptr : %s \n", strlen(ptr), ptr);

	return 0;
}
