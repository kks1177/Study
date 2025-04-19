// 예제 12-1.cpp
// 기반 클래스와 파생 클래스 설계하기

#include <iostream>
using namespace std;

class Calc {
protected:
	int a;
	int b;
	int c;
public:
	void Init(int new_A, int new_B);
	void Prn();
};

void Calc::Init(int new_A, int new_B) {
	a = new_A;
	b = new_B;
	c = 0;
}
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

class Mul : public Calc {
public:
	void Gob();
};

void Mul::Gob() {
	c = a * b;
}

void main()
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

