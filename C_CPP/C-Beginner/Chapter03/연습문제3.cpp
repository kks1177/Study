// 연습문제3.cpp

#define _CRT_SECURE_NO_WARNINGS

//using namespace std;
//#include <string>
#include <stdio.h>

// 1번
/*
int main()
{
	printf("C 언어\n");
	printf("200+300\n");
	printf("%d\n", 200 + 300);
}
*/


// 2번
/*
int main()
{
	printf("%d %d %d %d \n", 100, 200, 300);
	printf("%d %d \n", 100, 200, 300);
	printf("%d \n", 100, 200, 300);
}
*/


// 3번 
// 3
/*
int main()
{
	printf("%d / %d = %d \n", 10, 20, 10 / 20);
}
*/


// 4번 
// 답 => 1: %f, 2: %o, 3: %s, 4:%x


// 5번
// 4
/*
int main()
{
	printf("%05d", 4321);
	printf("%7.1f", 4321.7890);
	printf("%5s", "Cook");
}
*/


// 6번
// 답 => 1: \a, 2: \r, 3:\t, 4: \'


// 7번
// 4


// 8번
/*
int main()
{
	int a, b, c, res;

	a = b = c = 10;
	res = a * b * c;
	printf("a, b, c의 곱셈 값 ==> %d \n", res);
}
*/


// 9번
// 1


// 10번
// 4


// 11번
// 4


// 12번
// 4


// ???
// 13번
/*
int main()
{
	char str[10] = "VisualC++";
	int i;
	for (i = 0; i < 10; i += 2) {
		printf(str[i]);
	}
}
*/


/*
// 14번
int main()
{
	printf("f111 \n");
	printf("111+222 \n");
	printf("%d \n", 111 + 222);

	float a = 123.45;
	printf("%08.3f \n", a);

	float aa = 123.45, b;
	int c; c = aa;
	b = c;
	printf("%6.2f \n", b);
}
*/


// 15번
int main()
{
	/*
	int a = 111.22;
	float b = 300;

	printf("a의 값 ==> %d \n", a);
	printf("b의 값 ==> %f \n", b);
	*/

	int a = 0x41, b = 0x61;

	int tol;

	tol = b - a;

	printf("%c를 소문자로 표시하면 %c이며 \n", 'K', 'K' + tol);
	printf("%c를 대문자로 표시하면 %c이며 \n", 'z', 'z' - tol);
}