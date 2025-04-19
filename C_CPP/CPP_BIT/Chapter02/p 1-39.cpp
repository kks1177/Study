// p 1-39.cpp	데이터 타입의 변환(형 변환)
// 정수형과 실수형 사이의 암시적, 명시적 형변환 결과를 출력하는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int a = 1, b = 10;

	int d1 = a / b;		// 암시적 형 변환
	double d2 = (float)a / (float)b;		// 명시적 형 변환(강제 형 변환)

	cout << "value of d1 : " << d1 << endl;
	cout << "value of d2 : " << d2 << endl;

	return 0;
}