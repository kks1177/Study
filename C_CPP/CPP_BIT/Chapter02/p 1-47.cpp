// p 1-47.cpp	비트 논리 연산자
// 각각의 비트 연산 결과를 2진 표현으로 나타내는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int a = 15;		// 15의 2진 표현 : 00000000 00000000 00000000 00001111
	int b = 25;		// 25의 2진 표현 : 00000000 00000000 00000000 00011001
	int c;

	c = a | b;
	cout << "15와 25의 비트단위 논리합(|) : " << c << endl;

	c = a & b;
	cout << "15와 25의 비트단위 논리곱(&) : " << c << endl;

	c = a ^ b;
	cout << "15와 25의 비트단위 배타적 논리합(^) : " << c << endl;

	c = ~a;
	cout << "15와 25의 비트단위 부정(~) : " << c << endl;

	return 0;
}