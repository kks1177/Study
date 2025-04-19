// p 1-43.cpp	증감연산자
// 증감연산자를 많이 사용하면 결과를 예측하기가 힘들어짐을 확인하는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int a = 10;

	cout << "a++ = " << a++ << endl;	// 10
	cout << "++a = " << ++a << endl;	// 12
	cout << "a-- = " << a-- << endl;	// 12
	cout << "--a = " << --a << endl;	// 10

	int b = a++ + ++a;
	cout << "b = " << b << endl;		// 22

	int c = 10;
	c = c++ + c++ + c++ + c++;
	cout << "c = " << c << endl;		// 44

	return 0;
}