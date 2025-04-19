// ex 12-3.cpp
// Calc 클래스에 생성자 정의하기

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
Calc::Calc(int new_A, int new_B) : a(new_A), b(new_B), c(0) { }			// 기반 클래스에 생성자 추가
void Calc::Prn() {
	cout << a << "\t" << b << "\t" << c << endl;
}

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Calc x(3, 5);
	x.Prn();
}

/* 함수 정의부 */

