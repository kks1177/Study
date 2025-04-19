// ex 12-6.cpp
// 상속 관계에서 생성자 문제 해결하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
// 기반 클래스 (부모)
class Calc {
protected:
	int a, b, c;
public:
	Calc();
	Calc(int new_A, int new_B);
	void Prn();
};
/* 클래스 멤버함수(메소드) 선언부 */
Calc::Calc() : a(0), b(0), c(0) { }			// 기본 생성자를 명식적으로 정의하는 습관
Calc::Calc(int new_A, int new_B) : a(new_A), b(new_B), c(0) { }
void Calc::Prn() {
	cout << a << "\t" << b << "\t" << c << endl;
}

// 파생 클래스 (자식)
class Add : public Calc {
public:
	Add();
	Add(int new_A, int new_B);
	void Sum();
};
Add::Add() : Calc() { }
Add::Add(int new_A, int new_B) : Calc(new_A, new_B) { }		//  : 다음에 기술된 기반 클래스의 생성자는 함수의 호출, 자료형 x
void Add::Sum() {
	c = a + b;
}


/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Calc x(3, 5);			// 기반 클래스 객체 (부모)
	x.Prn();
	Add y(3, 5);			// 파생 클래스 객체 (자식)
	y.Prn();
	Add z;
	z.Prn();
}

/* 함수 정의부 */

