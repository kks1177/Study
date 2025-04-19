// p 1-41.cpp	범위 지정 연산자
// 지역 변수와 전역 변수의 이름이 같은 경우 각각을 참조하는 프로그램

#include <iostream>
using namespace std;

int amount = 123;

int main(void)
{
	int amount = 100;

	::amount = 200;

	cout << "amount = " << amount << endl;
	cout << "::amount = " << ::amount << endl;

	return 0;
}