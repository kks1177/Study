// ex 10-5.cpp
// const 멤버함수 사용하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class Complex {
private: 
	int real;
	int image;
public:
	void setComplex();
	void showComplex() const;
};
/* 클래스 멤버함수(메소드) 선언부 */
void Complex::setComplex() {
	real = 2;
	image = 5;
}
void Complex::showComplex() const {
	cout << "( " << real << " + " << image << "i ) " << endl;
}

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Complex x;

	x.setComplex();
	x.showComplex();
}

/* 함수 정의부 */
