// 예제 12-11.cpp
// 기반 클래스형 포인터 변수로 오버라이딩된 멤버함수 호출하기

#include <iostream>
using namespace std;

class Calc {
protected:
	int a;
	int b;
public:
	Calc(int new_A, int new_B);
	Calc();
	void Prn();		// 파생 클래스에서 오버라이딩 할 함수
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
	CalcPtr = new Add(3, 5);		// 업 캐스팅
	CalcPtr->Prn();
}
