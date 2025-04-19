// 예제 9-1.cpp
// 매크로 상수를 이용해서 원의 면적 구하기

#include <iostream>
using namespace std;

#define PI 3.141592

void main()
{
	int r = 5;
	double area;
	
	area = r * r * PI;

	cout << "area = " << area << endl;
}
