// 예제 12-10.cpp
// 다운 캐스팅의 잘못된 예 알아보기		// 컴파일 에러 예제

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
	Calc Obj(3, 5);
	Add* AddPtr;
	AddPtr = &Obj;
//	AddPtr = (Add*)&Obj;
	AddPtr->CalcPrn();
	AddPtr->Sum();
}

