// p 1-50.cpp	조건연산자
// if 제어문 대신 조건연산자를 이용하여 a, b에 값을 대입하는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int a, b;

	cout << "Please,Enter one number : ";
	cin >> a;

	b = (a > 0) ? 1 : 0;
	a = (b == 1) ? 1 : 0;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}