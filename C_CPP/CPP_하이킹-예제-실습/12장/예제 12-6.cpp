// 예제 12-6.cpp
// 상속 관계에서 생성자 문제 해결하기

#include <iostream>
using namespace std;

class Calc {
protected:
	int a;
	int b;
	int c;
public:
	Calc(int new_A, int new_B);
	Calc();
	void Prn();
};

Calc::Calc(int new_A, int new_B) : a(new_A), b(new_B), c(0) { }
Calc::Calc() {
	a = 0;
	b = 0;
	c = 0;
}
void Calc::Prn() {
	cout << a << "\t" << b << "\t" << c << endl;
}

class Add : public Calc {
public:
	Add(int new_A, int new_B);
	Add();
	void Sum();
};

Add::Add(int new_A, int new_B) : Calc(new_A, new_B) { }		// int 없는 이유 : 기반(부모) 클래스에서 가져오는 값이기 때문
Add::Add() : Calc() { }
void Add::Sum() {
	c = a + b;
}

void main()
{
	Calc x(3, 5);		// 기반(부모) 클라스 객체
	x.Prn();

	Add y(3, 5);		// 파생(자식) 클라스 객체
	y.Prn();

	Add z;
	z.Prn();
}
