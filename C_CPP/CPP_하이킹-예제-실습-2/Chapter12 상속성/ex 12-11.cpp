// ex 12-11.cpp
// 기반 클래스형 포인터 변수로 오버라이딩된 멤버함수 호출하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
// 기반클래스
class Calc {
protected:
	int a, b;
public:
	Calc();
	Calc(int new_A, int new_B);
	void Prn();			// 파생클래스에서 오버라이딩 할 멤버함수
};
/* 클래스 멤버함수(메소드) 선언부 */
Calc::Calc() : a(0), b(0) { }
Calc::Calc(int new_A, int new_B) : a(new_A), b(new_B) { }
void Calc::Prn() {			// 파생클래스에서 오버라이딩 할 멤버함수
	cout << " --- Calc::Prn ---" << endl;
	cout << a << "\t" << b << endl;
}

// 파생클래스
class Add : public Calc {
protected:
	int c;
public:
	Add();
	Add(int new_A, int new_B);
	void Sum();
	void Prn();			// 기반클래스의 멤버함수를 오버라이딩
};

Add::Add() : Calc() { c = 0; }
Add::Add(int new_A, int new_B) : Calc(new_A, new_B) {
	a = new_A;
	b = new_B;
	c = 0;
}
void Add::Sum() {
	c = a + b;
}
void Add::Prn() {		// 기반클래스의 멤버함수를 오버라이딩
	cout << " --- Add::Prn ---" << endl;
	cout << a << " + " << b << " = " << c << endl;
}

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Calc* CalcPtr;			// 기반클래스(부모) 포인터 변수 선언
	CalcPtr = new Add(3, 5);		// 업캐스팅 (기반클래스 포인터 = 파생클래스 객체)  == (상위 = 하위)  ==  (상위<--하위)
	CalcPtr->Prn();
}

/* 함수 정의부 */

