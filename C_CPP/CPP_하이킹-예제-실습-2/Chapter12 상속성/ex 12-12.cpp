// ex 12-12.cpp
// 가상함수로 동적 바인딩하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
// 기반클래스 (부모)
class Calc {
protected:
	int a, b;
public:
	Calc();
	Calc(int new_A, int new_B);
	virtual void Prn();			// 기반 클래스에서 가상함수 선언
}
/* 클래스 멤버함수(메소드) 선언부 */;
Calc::Calc() : a(0), b(0) { }
Calc::Calc(int new_A, int new_B) : a(new_A), b(new_B) { }
void Calc::Prn() {
	cout << " --- Calc::Prn ---" << endl;
	cout << a << "\t" << b << endl;
}

// 파생클래스 (자식)
class Add : public Calc {
protected:
	int c;
public:
	Add();
	Add(int new_A, int new_B);
	void Sum();
	void Prn();
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
void Add::Prn() {
	cout << " --- Add:Prn ---" << endl;
	cout << a << " + " << b << " = " << c << endl;
}

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Calc* CalcPtr;			// 기반클래스 (부모) 객체 포인터 변수 선언
	CalcPtr = new Add(3, 5);		// 업캐스팅 (파생클래스 객체 나옴)
	// CalcPtr->Sum();
	CalcPtr->Prn();
}

/* 함수 정의부 */

