// 예제 12-9.cpp
// 다운 캐스팅하기

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
	Calc* CalcPtr;		// 부모 객체 포인터 선언
	CalcPtr = new Add(3, 5);		// 업 캐스팅
	CalcPtr->CalcPrn();
//	CalcPtr->Sum();

	Add* AddPtr;		// 자식 객체 포인터 선언
	AddPtr = (Add*)CalcPtr;			// 다운 캐스팅
	AddPtr->CalcPrn();
	AddPtr->Sum();
	AddPtr->AddPrn();
}
