// 예제 7-9.cpp
// 함수 포인터를 사용해서 함수 호출하기

#include <iostream>
using namespace std;

// 함수를 가리키는 포인터 변수 선언
void (*pf)(void);

void one();
void two();
void three();

void main()
{
	pf = one;
	pf();

	pf = two;
	pf();

	pf = three;
	pf();
}

void one() {
	cout << " one \n";
}

void two() {
	cout << " two \n";
}

void three() {
	cout << " three \n";
}
