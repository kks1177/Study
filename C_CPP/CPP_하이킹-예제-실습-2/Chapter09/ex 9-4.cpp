// ex 9-4.cpp
// 매크로 함수, 인라인 함수, 일반 함수의 차이점 살펴보기

#include <iostream>
using namespace std;

// 매크로 함수 선언
#define add1(a, b) a+b

// 인라인 함수 선언
inline int add2(int a, int b);

/* 구조체 선언부 */

/* 함수 선언부 */
int add3(int a, int b);

/* 메인함수 */
int main()
{
	int result;

	result = 2 * add1(10, 20);
	cout << "macro 함수 => " << result << "\n";

	result = 2 * add2(10, 20);
	cout << "inline 함수 => " << result << "\n";

	result = 2 * add3(10, 20);
	cout << "일반 함수 => " << result << "\n";
}

/* 함수 정의부 */
inline int add2(int a, int b) {
	return a + b;
}
int add3(int a, int b) {
	return a + b;
}
