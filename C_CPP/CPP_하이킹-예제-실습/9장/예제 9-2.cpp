// 예제 9-2.cpp
// 제곱 승을 구하는 매크로 함수의 잘못된 예 살펴보기

#include <iostream>
using namespace std;

#define SQUARE1(x) x*x

void main()
{
	int a = 5, res;
	
	res = SQUARE1(a + 2);
	cout << " SQUARE1(a+2) => " << res << endl;		// 17

	res = 100 / SQUARE1(a);
	cout << " 100/SQUARE1(a) => " << res << endl;	// 100
}
