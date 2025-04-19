// ex 9-3.cpp
// 제곱 승을 구하는 매크로 함수 정의하기

#include <iostream>
using namespace std;

// 매크로 함수 정의
#define SQUARE2(x) ((x)*(x))

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	int a = 5, res;

	res = SQUARE2(a + 2);
	cout << " SQUARE(a+2) => " << res << "\n";

	res = 100 / SQUARE2(a);
	cout << " 100 / SQUARE2(a) => " << res << "\n";
}

/* 함수 정의부 */
