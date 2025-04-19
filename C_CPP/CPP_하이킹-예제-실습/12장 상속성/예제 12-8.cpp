// 예제 12-8.cpp
// 업 캐스팅하기

#include <iostream>
using namespace std;

class Calc {
protected:
	int a;
	int b;
public:
	Calc(int new_A, int new_B);
	Calc();
	void CalcPrn();
};

Calc::Calc(int new_A, int new_B) : a(new_A), b(new_B) { }
Calc::Calc() {
	a = 0;
	b = 0;
}
void Calc::CalcPrn() {
	cout << "--- Calc::CalcPrn ---" << endl;
	cout << a << "\t" << b << endl;
}

class Add : public Calc {		// 파생 클래스 Add 정의
protected:
	int c;
public:
	Add(int new_A, int new_B);
	Add();
	void Sum();
	void AddPrn();
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
void Add::AddPrn() {
	cout << "--- Add::AddPrn ---" << endl;
	cout << a << " + " << b << " = " << c << endl;
}

void main()
{
	Add AddObj(3, 5);		// 파생클래스 AddObj 객체 생성
	Add* AddPtr;			// 파생클래스 AddPtr 포인터 변수 선언
	AddPtr = &AddObj;
	AddPtr->Sum();
	AddPtr->AddPrn();

	Calc* CalcPtr;			// 기반 클래스 Calc 포인터 변수 선언
	CalcPtr = &AddObj;		// 업 캐스팅
//	CalcPtr->Sum();
	CalcPtr->CalcPrn();
}

