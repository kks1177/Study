// 예제 5-2.cpp
// 포인터 변수의 선언과 주소값 대입하기

#include <iostream>
using namespace std;

void main()
{
	int a = 10;
	int* p;

	p = &a;
	cout << "  a => " << a << "\n";
	cout << " &a => " << &a << "\n";
	cout << "  p => " << p << "\n";
	cout << " *p => " << *p << "\n";
}
