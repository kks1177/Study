// 예제 5-10.cpp
// 참조에 의한 전달 방식으로 두 변숫값을 교환하는 함수 작성하기

#include <iostream>
using namespace std;

void swap(int& x, int& y);

void main()
{
	int a = 10, b = 20;

	cout << " a => " << a << " b => " << b << endl;
	
	swap(a, b);
	cout << " a => " << a << " b => " << b << endl;
}

void swap(int& x, int& y) {
	int t;
	
	t = x;
	x = y;
	y = t;
}