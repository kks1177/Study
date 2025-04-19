// 예제 12-4.cpp
// 생성자를 정의한 Calc 클래스의 파생 클래스 설계하기		// 컴파일 에러 예제

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

Calc::Calc(int new_A, int new_B) : a(new_A), b(new_B), c(0) { }		// 기반 클래스에 생성자 추가
void Calc::Prn() {
	cout << a << "\t" << b << "\t" << c << endl;
}

class Add : public Calc {
public:
	void Sum();
};

void Add::Sum() {
	c = a + b;
}

void main()
{
	Add y(3, 5);
	y.Prn();
}
