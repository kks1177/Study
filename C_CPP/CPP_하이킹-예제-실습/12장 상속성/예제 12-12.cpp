// 예제 12-12.cpp
// 가상함수로 동적 바인딩하기

#include <iostream>
using namespace std;

class Calc {
protected:
	int a;
	int b;
public:
	Calc(int new_A, int new_B);
	Calc();
	virtual void Prn();		// 기반 클래스에서 가상함수 선언
};

Calc::Calc(int new_A, int new_B) : a(new_A), b(new_B) { }
Calc::Calc() {
	a = 0;
	b = 0;
}
void Calc::Prn() {
	cout << "--- Calc::Prn ---" << endl;
	cout << a << "\t" << b << endl;
}

class Add : public Calc {
protected:
	int c;
public:
	Add(int new_A, int new_B);
	Add();
	void Sum();
	void Prn();		// 기반 클래스의 멤버함수를 오버라이딩
};

Add::Add(int new_A, int new_B) : Calc(new_A, new_B) {
	a = new_A;
	b = new_B;
	c = 0;
}
Add::Add() : Calc() { }
void Add::Sum() {
	c = a + b;
}
void Add::Prn() {		// 기반 클래스의 멤버함수를 오버라이딩
	cout << "--- Add::Prn ---" << endl;
	cout << a << " + " << b << " = " << c << endl;
}

void main()
{
	Calc* CalcPtr;		// 부모 객체 포인터 선언
	CalcPtr = new Add(3, 5);		// 업캐스팅 (자식 객체가 나옴)
//	CalcPtr->Sum();
	CalcPtr->Prn();
}
