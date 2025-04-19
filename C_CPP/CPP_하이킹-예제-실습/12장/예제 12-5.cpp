// 예제 12-5.cpp
// Add 클래스에 생성자 정의하기			// 컴파일 에러 예제

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
	Add(int new_A, int new_B);		// 파생 클래스에 생성자 추가
	void Sum();
};

Add::Add(int new_A, int new_B) {	// 파생 클래스에 생성자 추가
	a = new_A;
	b = new_B;
	c = 0;
}
void Add::Sum() {
	c = a + b;
}

void main()
{
	Add y(3, 5);
	y.Prn();
}

