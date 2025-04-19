// 연습문제1.c

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1번
// 프로젝트 생성, 프로그램 코딩, 빌드, 실행


// 2번
/*
int main()
{
	int n1 = 10, n2 = 5;
	int res;

	res = n1 + n2;
	printf("%d", res);
}
*/


// 3번
/*
int main()
{
	printf(" %d - %d = %d ", 10, 20, 10 + 20);
}
*/


// 4번
// 답 : 4번


// 5번
/*
int main()
{
	int n1, n2;

	printf("첫 번째 값 : ");
	scanf("%d", &n1);
	printf("두 번쨰 값 : ");
	scanf("%d", &n2);

	printf(" %d + %d = %d \n", n1, n2, n1 + n2);
	printf(" %d - %d = %d \n", n1, n2, n1 - n2);
	printf(" %d * %d = %d \n", n1, n2, n1 * n2);
	printf(" %d / %d = %d \n", n1, n2, n1 / n2);
}
*/


// 6번
/*
int main()
{
	int n1, n2, n3;
	int result = 0;
	char ch;

	printf("연산 선택 (+ 또는 *) : ");
	scanf("%c", &ch);

	printf("첫 번째 값 ==> ");
	scanf("%d", &n1);
	printf("두 번째 값 ==> ");
	scanf("%d", &n2);
	printf("세 번쨰 값 ==> ");
	scanf("%d", &n3);

	if (ch == '+') {
		result = n1 + n2 + n3;
		printf("%d + %d + %d = %d ", n1, n2, n3, result);
	}
	if (ch == '*') {
		result = n1 * n2 * n3;
		printf("%d * %d * %d = %d ", n1, n2, n3, result);
	}
}
*/


// 7번
int main()
{
	int n1, n2;
	int result = 0;

	printf("## 두 수를 나누기 ## \n");
	
	printf("첫 번째 값 ==> ");
	scanf("%d", &n1);
	printf("두 번째 값 ==> ");
	scanf("%d", &n2);

	if (n1 == 0 || n2 == 0) {
		printf("다시 입력하세요. 두 번째 값 ==> ");
		scanf("%d", &n2);

		if (n2 == 0) {
			printf("또 다시 입력하세요. 두 번째 값 ==> ");
			scanf("%d", &n2);

			printf("0을 세 번 입력했습니다. 종료합니다. \n");
			return 0;
		}	
	}
	result = n1 / n2;
	printf("%d / %d = %d \n", n1, n2, result);
}

