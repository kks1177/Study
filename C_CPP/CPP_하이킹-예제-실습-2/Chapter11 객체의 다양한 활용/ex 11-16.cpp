// ex 11-16.cpp
// 두 복소수를 더하는 멤버함수 작성하기

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
	Complex Sum(Complex rightHand);
};
/* 클래스 멤버함수(메소드) 선언부 */
Complex::Complex(int r, int i) : real(r), image(i) { }
void Complex::showComplex() {
	cout << "( " << real << " + " << image << "i )" << endl;
}
Complex Complex::Sum(Complex rightHand) {
	Complex res;

	res.real = this->real + rightHand.real;
	res.image = this->image + rightHand.image;

	return res;
}

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Complex x(10, 20), y(20, 40);
	Complex z;

	z = x.Sum(y);
	x.showComplex();
	y.showComplex();
	z.showComplex();
}

/* 함수 정의부 */

