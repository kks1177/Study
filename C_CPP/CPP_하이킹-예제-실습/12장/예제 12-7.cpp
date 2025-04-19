// 예제 12-7.cpp
// 함수 오버라이딩하기

#include <iostream>
using namespace std;

class Calc {
protected:
	int a;
	int b;
public:
	Calc(int new_A, int new_B);
	Calc();
	void Prn();
};

Calc::Calc(int new_A, int new_B) : a(new_A), b(new_B) { }
Calc::Calc() {
	a = 0;
	b = 0;
}
void Calc::Prn() {
	cout << a << "\t" << b << endl;
}

class Add : public Calc {
protected:
	int c;
public:
	Add(int new_A, int new_B);
	Add();
	void Sum();
	void Prn();		// 오버라이딩
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
void Add::Prn() {		// 오버라이딩
	cout << a << " + " << b << " = " << c << endl;
}

class Mul : public Calc {
protected:
	int c;
public:
	Mul(int new_A, int new_B);
	Mul();
	void Gob();
	void Prn();		// 오버라이딩
};

Mul::Mul(int new_A, int new_B) : Calc(new_A, new_B) {
	a = new_A;
	b = new_B;
	c = 0;
}
Mul::Mul() : Calc() { }
void Mul::Gob() {
	c = a * b;
}
void Mul::Prn() {		// 오버라이딩
	cout << a << " * " << b << " = " << c << endl;
}

void main()
{
	Calc x(3, 5);		// 기반(부모) 클라스 객체
	x.Prn();

	Add y(3, 5);		// 파생(자식) 클라스 객체
	y.Sum();
	y.Prn();

	Mul z(3, 5);
	z.Gob();
	z.Prn();
}