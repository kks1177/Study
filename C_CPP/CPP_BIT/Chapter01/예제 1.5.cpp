//예제 1.5.cpp
// 디폴트 매개 변수

#include <iostream>
using namespace std;

double CalculateArea(double radius, double radian = 3.14) {		// 3.14 <== 디폴트 매개 변수
	return radius * radius * radian;
}

int main()
{
	cout << "반지름이 3인 원의 넓이 : ";
	cout << CalculateArea(3) << endl;
	cout << "반지름이 3인 반원의 넓이 : ";
	cout << CalculateArea(3, 3.14 / 2) << endl;

	return 0;
}
