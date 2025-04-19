// ex 11-2.cpp
// this 포인터를 명시적으로 사용하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class Complex {
private:
	int real;
	int image;
public:
	Complex(int real = 0, int image = 0);
	void showComplex() const;
};
/* 클래스 멤버함수(메소드) 선언부 */
/*
// this 포인터 생략
Complex::Complex(int real, int image) {
	real = real;
	image = image;
}
*/
Complex::Complex(int real, int image) {
	this->real = real;				// this->멤버변수 = 매개변수
	this->image = image;		// this->멤버변수 = 매개변수
}
void Complex::showComplex() const {
	cout << "( " << this->real << " + " << this->image << "i )" << endl;
}

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Complex x(10, 20);
	x.showComplex();
}

/* 함수 정의부 */
