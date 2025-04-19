// ex 11-20.cpp
// Complex 클래스의 연산자 오버로딩하기

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

	Complex operator+(Complex rightHand);
	Complex operator-(const Complex& rightHand) const;
	Complex operator-() const;
};
/* 클래스 멤버함수(메소드) 선언부 */
Complex::Complex(int r, int i) : real(r), image(i) { }
void Complex::showComplex() {
	if (image > 0)
		cout << "( " << real << " + " << image << "i )" << endl;
	else if (image < 0)
		cout << "( " << real << image << "i )" << endl;
	else
		cout << real << endl;
}
Complex Complex::operator+(Complex rightHand) {
	Complex res;

	res.real = this->real + rightHand.real;
	res.image = this->image + rightHand.image;

	return res;
}
Complex Complex::operator-(const Complex& rightHand) const {
	Complex res;

	res.real = this->real - rightHand.real;
	res.image = this->image - rightHand.image;

	return res;
}
Complex Complex::operator-() const {
	Complex res;

	res.real = -real;
	res.image = -image;

	return res;
}

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Complex x(10, 20), y(20, 40), z;

	cout << "-- 두 Complex 객체에 대한 덧셈 -- \n";
	z = x + y;
	x.showComplex();
	y.showComplex();
	z.showComplex();

	cout << "\n-- 두 Complex 객체에 대한 뺄셈 -- \n";
	z = x - y;
	x.showComplex();
	y.showComplex();
	z.showComplex();

	cout << "\n-- Complex 객체의 부호 변경 -- \n";
	z = -x;
	x.showComplex();
	z.showComplex();
}

/* 함수 정의부 */

