// ex 9-5.cpp
// 조건부 컴파일을 위한 선행처리자 살펴보기

#include <iostream>
using namespace std;

// 매크로 함수
#define MAX 20

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	int size;

#if MAX > 100
	size = 100;
#elif MAX > 10
	size = 10;
#else
	size = 0;
#endif
	
	cout << " size = " << size << "\n";
}

/* 함수 정의부 */
