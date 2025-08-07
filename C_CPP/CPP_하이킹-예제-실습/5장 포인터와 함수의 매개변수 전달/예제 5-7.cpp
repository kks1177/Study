// 예제 5-7.cpp
// 값에 의한 전달 방식으로 두 변숫값을 교환하는 함수 작성하기

#include <iostream>
using namespace std;

void swap(int a, int b);		// 값에 의한 전달 (Call by Value)

void main()
{
	int a = 10, b = 20;

	cout << " a => " << a << " b => " << b << "\n";		// a = 10, b = 20

	swap(a, b);
	cout << " a => " << a << " b => " << b << "\n";		// a = 10, b = 20
}

void swap(int a, int b) {
	int t;
	
	t = a;
	a = b;
	b = t;
}
