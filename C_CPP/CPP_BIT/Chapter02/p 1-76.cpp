// p 1-76.cpp	매크로 함수
// 반지름이 주어졌을 때 원의 넓이를 구하는 함수를 매크로로 구현한 프로그램

#include <iostream>
using namespace std;

#define CIRCLE1(r) (3.14*r*r)
#define CIRCLE2(r) (3.14*(r)*(r))
//#define CIRCLE2(r, m) (3.14*(r)*(m))	// error - 오버로딩 불가능

int main(void)
{
	double radius = 5.0;

	cout << CIRCLE1(radius) << endl;
	cout << CIRCLE2(radius) << endl;

	cout << CIRCLE1(radius + 5) << endl;
	cout << CIRCLE2(radius + 5) << endl;		// CIRCLE1과 CIRCLE2의 값이 다르다. 왜??

	return 0;
}