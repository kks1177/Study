// ex 9-1.cpp
// 매크로 상수를 이용해서 원의 면적 구하기

#include <iostream>
using namespace std;

#define PI 3.141592

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	int r = 5;
	double  area;

	area = r * r * PI;

	// PI = 2.71;
	cout << "area = " << area << endl;
}

/* 함수 정의부 */

