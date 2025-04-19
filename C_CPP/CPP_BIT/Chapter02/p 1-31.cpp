// p 1-31.cpp
// 변수를 선언한 후 레퍼런스로 변수의 값을 바꾸는 프로그램 2

#include <iostream>
using namespace std;

int main(void)
{
	int i = 1;
	int& r1 = i;
	//int& r2;	// error	레퍼런스는 항상 초기화되어야만 사용 가능

	cout << "i = " << i << "  " << "r1 = " << r1 << endl;
	
	r1++;
	cout << "i = " << i << "  " << "r1 = " << r1 << endl;

	int* p = &r1;
	*p = 100;
	cout << "i = " << i << "  " << "r1 = " << r1 << "  " << "*p = " << *p << endl;
	
	return 0;
}