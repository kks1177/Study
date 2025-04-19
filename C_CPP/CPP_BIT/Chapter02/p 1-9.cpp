// Chapter 2. C++ 기본 문법

// p 1-9.cpp	bool형
// bool형 변수를 선언하고 초기화된 값을 출력하는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	bool a = false;
	bool b = true;

	bool p = a + b;
	bool q = a * b;
	bool r = a / b;

	bool x = !a;
	bool y = a & b;
	bool z = a | b;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "p = " << p << endl;
	cout << "q = " << q << endl;
	cout << "r = " << r << endl;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;

	return 0;
}