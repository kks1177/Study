// 예제 5-3.cpp
// 포인터 변수의 초기화와 포인터로 간접 참조해서 값 설정하기

#include <iostream>
using namespace std;

void main()
{
	int a = 10, b = 20;
	int* p;
	
	p = &a;
	cout << " a => " << a << " b => " << b << "\n";		// a = 10, b = 20
	cout << " *p => " << *p << "\n";		// p = 10

	b = *p;
	cout << " a => " << a << " b => " << b << "\n";		// a = 10, b = 10
	cout << " *p => " << *p << "\n";		// p = 10

	*p = 30;
	cout << " a => " << a << " b => " << b << "\n";		// a = 10, b = 10
	cout << " *p => " << *p << "\n";		// p = 30
}
