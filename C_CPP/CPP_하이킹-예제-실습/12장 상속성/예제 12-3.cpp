// 예제 12-3.cpp
// Calc 클래스에 생성자 정의하기

#include <iostream>
using namespace std;

class Calc {
protected:
	int a;
	int b;
	int c;
public:
	Calc(int new_A, int new_B);		// 기반 클래스에 생성자 추가
	void Prn();
};

Calc::Calc(int new_A, int new_B) : a(new_A), b(new_B), c(0) { }
void Calc::Prn() {
	cout << a << "\t" << b << "\t" << c << endl;
}

void main()
{
	Calc x(3, 5);	// 객체 x 생성

	x.Prn();
}
