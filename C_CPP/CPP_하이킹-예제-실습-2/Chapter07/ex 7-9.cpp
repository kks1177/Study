// ex 7-9.cpp
// 함수 포인터를 사용해서 함수 호출하기

#include <iostream>
using namespace std;

// 함수 선언부
void oneFunction();
void twoFunction();
void threeFunction();

void (*pf)(void);			// 함수를 가리키는 포인터 변수 선언

int main()
{
	pf = oneFunction;
	pf();

	pf = twoFunction;
	pf();

	pf = threeFunction;
	pf();
}


// 함수 정의부
void oneFunction() {
	cout << "one" << endl;
}
void twoFunction() {
	cout << "two" << endl;
}
void threeFunction() {
	cout << "three" << endl;
}