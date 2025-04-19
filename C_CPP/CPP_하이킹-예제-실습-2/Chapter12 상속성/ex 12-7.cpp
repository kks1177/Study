// ex 12-7.cpp
// 함수 오버라이딩하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
// 기반 클래스 (부모)
class Calc {
protected:
	int a, b;
public:
	Calc();
	Calc(int new_A, int new_B);
	void Prn();
};
/* 클래스 멤버함수(메소드) 선언부 */
Calc::Calc() : a(0), b(0) { }
Calc::Calc(int new_A, int new_B) : a(new_A), b(new_B) { }
void Calc::Prn() {
	cout << a << "\t" << b << endl;
}

// 파생클래스1 (자식)
class Add : public Calc {
protected:
	int c;
public:
	Add();
	Add(int new_A, int new_B);
	void Sum();
	void Prn();		// 오버라이딩
};
Add::Add() : Calc() { c = 0; }
Add::Add(int new_A, int new_B) : Calc(new_A, new_B) {
	a = new_A;
	b = new_B;
	c = 0;					// 생략 안하는 이유 : 앞에 나온 Calc::Calc()와 다름.		c = 0; 이 추가되었기 때문
}
void Add::Sum() {
	c = a + b;
}
void Add::Prn() {		// 오버라이딩
	cout << a << " + " << b << " = " << c << endl;
}
// 파생 클래스2 (자식)
class Mul : public Calc {
protected:
	int c;
public:
	Mul();
	Mul(int new_A, int new_B);
	void Gob();
	void Prn();		// 오버라이딩
};

Mul::Mul() : Calc() { c = 0; }
Mul::Mul(int new_A, int new_B) : Calc(new_A, new_B) {
	a = new_A;
	b = new_B;
	c = 0;
}
void Mul::Gob() {
	c = a * b;
}
void Mul::Prn() {		// 오버라이딩
	cout << a << " * " << b << " = " << c << endl;
}

/* 함수 선언부 */

/* 메인함수 */
void main()
{
	Calc x(3, 5);
	x.Prn();
	
	Add y(3, 5);
	y.Sum();
	y.Prn();

	Mul z(3, 5);
	z.Gob();
	z.Prn();
}

/* 함수 정의부 */

