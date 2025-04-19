// 예제 5-9.cpp
// 참조 변수 선언하기

#include <iostream>
using namespace std;

void main()
{
	int a = 10;
	int& b = a;		// 참조에 의한 전달 (Call by Reference)

	cout << " a = " << a << " b = " << b << endl;		// a = 10, b = 10
	
	b += 300;
	cout << " b = " << b << endl;	// b = 310
	cout << " a = " << a << endl;	// a = 310
}
