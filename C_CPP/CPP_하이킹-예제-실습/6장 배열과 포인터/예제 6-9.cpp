// 예제 6-9.cpp
// 배열명과 +연산자의 관계 알아보기

// a+i == &a[i];

#include <iostream>
using namespace std;

void main()
{
	int a[5] = { 10,20,30,40,50 };

//						good						bad
	cout << "   a : " <<   a << " \t &a[0] : " << &a[0] << endl;
	cout << " a+1 : " << a+1 << " \t &a[1] : " << &a[1] << endl;
	cout << " a+2 : " << a+2 << " \t &a[2] : " << &a[2] << endl;
	cout << " a+3 : " << a+3 << " \t &a[3] : " << &a[3] << endl;
	cout << " a+4 : " << a+4 << " \t &a[4] : " << &a[4] << endl;
}
