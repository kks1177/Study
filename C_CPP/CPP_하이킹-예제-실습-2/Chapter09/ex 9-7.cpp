// ex 9-7.cpp
// #undef문 사용하기

#include <iostream>
using namespace std;

// 매크로 함수
#define SIZE 10

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	int i, j;
	i = SIZE;

#ifdef SIZE
	#undef SIZE
	#define SIZE 20
#endif

	j = SIZE;

	cout << " i = " << i << ", j = " << j << "\n";
}

/* 함수 정의부 */
