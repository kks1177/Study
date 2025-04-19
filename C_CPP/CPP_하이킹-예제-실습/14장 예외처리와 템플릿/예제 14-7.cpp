// 예제 14-7.cpp
// try문 하나와 catch 블록 여러 개 살펴보기

#include <iostream>
using namespace std;

void func(int a) {
	try {
		if (a == 0)
			throw  "변수의 값이 0이다. ";
		else
			throw a;
	}
	catch (char* str) {
		cout << str << endl;
	}
	catch (int ex) {
		cout << "숫자 " << ex << "로 인한 예외발생" << endl;
	}
}

void main()
{
	func(10);
	func(0);
	func(20);
}
