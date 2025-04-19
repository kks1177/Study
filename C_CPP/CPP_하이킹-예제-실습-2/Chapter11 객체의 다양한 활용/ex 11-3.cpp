// ex 11-3.cpp
// 객체 단위로 값 치환하기

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

/* 메인함수 */
int main()
{
	Complex x(10, 20);
	Complex y;
	
	cout << " x => ";
	x.showComplex();
	cout << " y => ";
	y.showComplex();

	cout << " ----------------------------------------------- \n";
	
	y = x;
	cout << " x => ";
	x.showComplex();
	cout << " y => ";
	y.showComplex();

	cout << " ----------------------------------------------- \n";

	cout << " x => ";
	x.showComplex();

	y.setComplex(30, 40);
	cout << " y => ";
	y.showComplex();
}

/* 함수 정의부 */
