// ex 12-1.cpp
// 기반 클래스와 파생 클래스 설계하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
// 기반 클래스 (부모)
class Calc {
protected:			// 파생 클래스 접근 가능 지정자
	int a, b, c;
public:
	void Init(int new_A, int new_B);		// 초기화
	void Prn();			// 출력
};
/* 클래스 멤버함수(메소드) 선언부 */
// 기반 클래스 멤버함수
void Calc::Init(int new_A, int new_B) : a(new_A), b(new_B), c(0) { }
void Calc::Prn() {
	cout << a << "\t" << b << "\t" << c << endl;
}

// 파생 클래스1 (자식)
class Add : public Calc {
public:
	void Sum();
};
void Add::Sum() {
	c = a + b;
}
// 파생 클래스2 (자식)
class Mul : public Calc {
public:
	void Gob();
};
void Mul::Gob() {
	c = a * b;
}

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Add x;
	x.Init(3, 5);

	Mul y;
	y.Init(2, 7);

	x.Sum();
	x.Prn();
	y.Gob();
	y.Prn();
}

/* 함수 정의부 */

