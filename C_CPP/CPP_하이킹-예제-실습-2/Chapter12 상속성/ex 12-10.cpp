// ex 12-10.cpp
// 다운 캐스팅의 잘못된 예 알아보기
// 에러 예시 

#include <iostream>
using namespace std;

/* 클래스 선언부 */
// 기반 클래스 (부모)
class Calc {
protected:
	int a, b;
public:
	Calc();			// 생성자
	Calc(int new_A, int new_B);			// 생성자 (파라미터 있음)
	void CalcPrn();
};
/* 클래스 멤버함수(메소드) 선언부 */
Calc::Calc() : a(0), b(0) { }
Calc::Calc(int new_A, int new_B) : a(new_A), b(new_B) { }
void Calc::CalcPrn() {
	cout << "--- Calc::CalcPrn ---" << endl;
	cout << a << "\t" << b << endl;
}

// 파생 클래스 (자식)
class Add : public Calc {			// 파생클래스 Add 정의
protected:
	int c;
public:
	Add();
	Add(int new_A, int new_B);
	void Sum();
	void AddPrn();
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
void Add::AddPrn() {
	cout << "--- Add:AddPrn ---" << endl;
	cout << a << " + " << b << " = " << c << endl;
}

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Calc Obj(3, 5);		// 기반클래스 객체 생성
	Add* AddPtr;		// 파생클래스 포인터 변수 선언

	AddPtr = &Obj;
	//AddPtr = (Add*)&Obj;
	AddPtr->CalcPrn();
	AddPtr->Sum();
}