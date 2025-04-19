// 예제 11-7.cpp
// 객체의 @참조에 의한 전달 방식@의 함수 작성하기

/*
함수에 주소를 붙이는 이유 : 메모리 절약 분산된 메모리 통합
*/


#include <iostream>
using namespace std;

class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void ShowComplex() const;
	void SetComplex(int r = 0, int i = 0);
};

Complex::Complex(int r, int i) {
	real = r;
	image = i;
}
void Complex::ShowComplex() const {
	cout << "( " << real << " + " << image << "i )" << endl;
}
void Complex::SetComplex(int r, int i) {
	real = r;
	image = i;
}

Complex& CopyComplex(Complex& des, const Complex& src) {
	des = src;
	return des;
}

void main()
{
	Complex x(10, 20);
	Complex y(30, 40);
	Complex z;

	z = CopyComplex(y, x);

	cout << " x => ";
	x.ShowComplex();
	cout << " y => ";
	y.ShowComplex();
	cout << " z => ";
	z.ShowComplex();
}