// ex 12-8.cpp
// 업 캐스팅하기
// 기반클래스 포이터 변수 = 파생클래스 객체
//			(상위, 부모)				(하위, 자식)						상위 <---하위 (업캐스팅)

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
	Add AddObj(3, 5);			// 파생클래스  Add 객체 생성
	Add* AddPtr;				// 파생클래스 포인터변수 선언

	AddPtr = &AddObj;
	AddPtr->Sum();
	AddPtr->AddPrn();

	Calc* CalcPtr;				// 기반클래스 Calc로 포인터 변수 선언
	CalcPtr = &AddObj;		// (암시적) 업캐스팅			// 기반(상위, 부모)클래스 포인터 = 파생(하위, 자식)클래스 포인터 값
//	CalcPtr->Sum();
	CalcPtr->CalcPrn();
}

/* 함수 정의부 */

