// ex 12-9.cpp
// 다운 캐스팅하기
// 파생클래스 포이터 변수 = (캐스트 연산자)기반클래스 포인터 변수
//			(하위, 자식)							(상위, 부모)						하위 <---상위 (다운캐스팅)

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
	Calc* CalcPtr;		// 부모 객체 포인터 변수 생성
	
	CalcPtr = new Add(3, 5);		// 업 캐스팅
	CalcPtr->CalcPrn();
	// CalcPtr->Sum();

	Add* AddPtr;		// 자식 객체 포인터 변수 생성
	
	AddPtr = (Add*)CalcPtr;		// 다운 캐스팅
	AddPtr->CalcPrn();
	AddPtr->Sum();
	AddPtr->AddPrn();
}

/* 함수 정의부 */



