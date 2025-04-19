// 예제 14-8.cpp
// 함수에서 발생하는 예외 자료형 명시하기

#include <iostream>
using namespace std;

void func(int a) throw(char*, int) {
	if (a == 0)
		throw "변수의 값이 0 이다. ";
	else
		throw a;
}

void main()
{
	try {
		func(10);
	}
	catch (char* str) {
		cout << str << endl;
	}
	catch (int ex) {
		cout << "숫자 " << ex << "로 인한 예외발생" << endl;
	}
}
