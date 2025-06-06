// 예제 11-4.cpp
// 객체의 @값에 의한 전달 방식@의 함수 작성하기

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

// 값에 의한 전달 방식(Call by Value)
void CopyComplex(Complex des, Complex src) {		// des : 복사 목표, src : 복사
	des = src;		// y = x;
}

void main()
{
	Complex x(10, 20);
	Complex y(30, 40);

	cout << " x => ";
	x.ShowComplex();
	cout << " y => ";
	y.ShowComplex();

	cout << "--------------------------------\n";
	CopyComplex(y, x);

	cout << " x => ";
	x.ShowComplex();
	cout << " y => ";
	y.ShowComplex();
}
