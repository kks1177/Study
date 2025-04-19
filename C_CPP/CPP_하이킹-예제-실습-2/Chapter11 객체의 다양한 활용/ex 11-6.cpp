// ex 11-6.cpp
// 객체의 주소에 의한 전달 방식의 함수 작성하기 (Call by Address)

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void showComplex() const;
	void setComplex(int r = 0, int i = 0);
};
/* 클래스 멤버함수(메소드) 선언부 */
Complex::Complex(int r, int i) : real(r), image(i) { }
void Complex::showComplex() const {
	cout << "( " << real << " + " << image << "i )" << endl;
}
void Complex::setComplex(int r, int i) {
	real = r;
	image = i;
}

/* 구조체 선언부 */

/* 함수 선언부 */
void copyComplex(Complex *pDes, Complex src) {
	*pDes = src;			// y = x		// 복사 목표 = 복사 대상
}

/* 메인함수 */
int main()
{
	Complex x(10, 20);
	Complex y(30, 40);

	cout << " x => ";
	x.showComplex();
	cout << " y => ";
	y.showComplex();

	cout << " ------------------------------- \n";

	cout << " x => ";
	x.showComplex();

	copyComplex(&y, x);
	cout << " y => ";
	y.showComplex();
}

/* 함수 정의부 */
