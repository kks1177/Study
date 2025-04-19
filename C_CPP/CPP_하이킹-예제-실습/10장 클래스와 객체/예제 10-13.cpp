// 예제 10-13.cpp
// 생성자 오버로딩하기

#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int image;
public:
	Complex();				// 생성자 선언
	Complex(int r, int i);	// 생성자 오버로딩
	void ShowComplex() const;
};

Complex::Complex() {		// 생성자 정의
	real = 0;
	image = 0;
}
Complex::Complex(int r, int i) {		// 매개변수 생성자 2개 정의
	real = r;
	image = i;
}
void Complex::ShowComplex() const {
	cout << "( " << real << " + " << image << "i )" << endl;
}

void main()
{
	Complex x(10, 20);		// 매개변수o 생성자 호출
	Complex y(30, 40);		// 매개변수o 생성자 호출
	Complex z;				// 매개변수x 생성자 호출
	
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();
}
