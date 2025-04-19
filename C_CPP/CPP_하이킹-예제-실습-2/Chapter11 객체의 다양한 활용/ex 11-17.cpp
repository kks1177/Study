// ex 11-17.cpp
// 두 복소수를 더하는 프렌드 함수 작성하기 (일반 함수)

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

	friend Complex Sum(Complex leftHand, Complex rightHand);
};
/* 클래스 멤버함수(메소드) 선언부 */
Complex::Complex(int r, int i) : real(r), image(i) { }
void Complex::showComplex() {
	cout << "( " << real << " + " << image << "i )" << endl;
}

/* 함수 선언부 */
Complex Sum(Complex leftHand, Complex rightHand) {			// 일반 함수
	Complex res;

	res.real = leftHand.real + rightHand.real;
	res.image = leftHand.image + rightHand.image;

	return res;
}

/* 메인함수 */
int main()
{
	Complex x(10, 20), y(20, 40);
	Complex z;

	z = Sum(x, y);

	x.showComplex();
	y.showComplex();
	z.showComplex();
}

/* 함수 정의부 */

