// ex 11-18.cpp
// 자신의 값을 1만큼 증가시키는 멤버함수 작성하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void showComplex();

	Complex AddOnePrefix();
	Complex AddOnePostfix();
};
/* 클래스 멤버함수(메소드) 선언부 */
Complex::Complex(int r, int i) : real(r), image(i) { }
void Complex::showComplex() {
	cout << "( " << real << " + " << image << "i )" << endl;
}
Complex Complex::AddOnePrefix() {
	++this->real;
	++this->image;

	return *this;
}
Complex Complex::AddOnePostfix() {
	Complex temp;

	temp = *this;
	++this->real;
	++this->image;

	return temp;
}

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Complex x(10, 20), y(20, 40);
	Complex z;

	cout << "--- 선행처리 --- \n";
	z = x.AddOnePrefix();
	x.showComplex();
	z.showComplex();

	cout << "--- 후행처리 --- \n";
	z = y.AddOnePostfix();
	y.showComplex();
	z.showComplex();
}

/* 함수 정의부 */

