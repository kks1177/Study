// ex 12-5.cpp
// Add 클래스에 생성자 정의하기
// 에러 예시 예제

#include <iostream>
using namespace std;

/* 클래스 선언부 */
// 기반 클래스 (부모)
class Calc {
protected:
	int a, b, c;
public:
	Calc(int new_A, int new_B);			// 기반 클래스에 생성자 추가
	void Prn();
};
/* 클래스 멤버함수(메소드) 선언부 */
Calc::Calc(int new_A, int new_B) : a(new_A), b(new_B), c(0) { }
void Calc::Prn() {
	cout << a << "\t" << b << "\t" << c << endl;
}

// 파생 클래스 (자식)
class Add : public Calc {
public:
	Add(int new_A, int new_B);			// 파생 클래스에 생성자 추가
	void Sum();
};
Add::Add(int new_A, int new_B) : a(new_A), b(new_B), c(0) { }
void Add::Sum() {
	c = a + b;
}

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Add y(3, 5);

	y.Prn();
}

/* 함수 정의부 */

