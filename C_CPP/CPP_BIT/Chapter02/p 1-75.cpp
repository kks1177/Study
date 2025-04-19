// p 1-75.cpp	인라인 함수
// 반지름이 주어졌을 때 원의 넓이를 구하는 함수를 인라인으로 구현한 프로그램

#include <iostream>
using namespace std;

inline double circle(double r) { return 3.14 * r * r; }

int main(void)
{
	double radius = 5;
	cout << circle(radius) << endl;

	radius = 10;
	cout << circle(radius) << endl;

	return 0;
} 