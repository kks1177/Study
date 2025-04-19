// ex 10-13.cpp
// 생성자 오버로딩하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class Complex {
private:
	int real;
	int image;
public:
	Complex();					// 생성자 선언
	Complex(int r, int i);		// 생성자 오버로딩
	void showComplex() const;
};
/* 클래스 멤버함수(메소드) 선언부 */
Complex::Complex() {
	real = 0;
	image = 0;
}
Complex::Complex(int r, int i) {
	real = r;
	image = i;
}
void Complex::showComplex() const {
	cout << "( " << real << " + " << image << "i )" << endl;
}

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Complex x(10, 20);		// 매개변수 생성자 호출
	Complex y(30, 40);		// 매개변수 생성자 호출
	Complex z;					// 생성자 호출

	x.showComplex();
	y.showComplex();
	z.showComplex();
}

/* 함수 정의부 */

