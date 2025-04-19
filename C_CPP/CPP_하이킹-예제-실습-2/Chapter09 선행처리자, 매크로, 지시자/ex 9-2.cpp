// ex 9-2.cpp
// 제곱 승을 구하는 매크로 함수의 잘못된 예 살펴보기

#include <iostream>
using namespace std;

// 잘못된 매크로 함수 정의 (우선순위를 ()로 확실히 정의하지 않음)
#define SQUARE1(x) x*x

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	int a = 5, res;
	res = SQUARE1(a + 2);
	cout << " SQUARE1(a+2) => " << res << endl;			// 17

	res = 100 / SQUARE1(a);
	cout << " 100 / SQUARE1(a) => " << res << endl;		// 100
}

/* 함수 정의부 */
