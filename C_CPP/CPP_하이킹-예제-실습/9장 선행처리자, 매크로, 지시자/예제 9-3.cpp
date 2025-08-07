// 예제 9-3.cpp
// 제곱 승을 구하는 매크로 함수 정의하기

#include <iostream>
using namespace std;

#define SQUARE2(x) ((x)*(x))

void main()
{
	int a = 5, res;

	res = SQUARE2(a + 2);
	cout << " SQUARE2(a+2) => " << res << endl;

	res = 100 / SQUARE2(a);
	cout << " 100/SQUARE2(a) => " << res << endl;
}
