// 예제 5-6.cpp
// 두 변수에 저장된 값 교환하기

#include <iostream>
using namespace std;

void main()
{
	int a = 10, b = 20;

	cout << " a => " << a << " b => " << b << "\n";		// a = 10, b = 20

	int t;

	t = a;
	a = b;
	b = t;

	cout << " a => " << a << " b => " << b << "\n";		// a = 20, b =10
}
