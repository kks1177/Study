// ex 10-3.cpp
// private 멤버를 다루기 위한 멤버함수 추가하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class Complex {
private:
	int real;		// 멤버변수
	int image;		// 멤버변수
public:
	void setComplex();		// 멤버함수 (메소드)
	void showComplex();		// 멤버함수 (메소드)
	void setReal(int r);		// 멤버함수 (메소드)
	void setImage(int i);		// 멤버함수 (메소드)
};
/* 클래스 멤버함수(메소드) 정의부 */
void Complex::setComplex() {
	real = 2;
	image = 5;
}
void Complex::showComplex() {
	cout << "( " << real << " + " << image << "i )" << endl;
}
void Complex::setReal(int r) {
	real = r;
}
void Complex::setImage(int i) {
	image = i;
}

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Complex x;		// 객체(인스턴스) 생성

	x.setReal(5);
	x.setImage(10);
	x.showComplex();
}

/* 함수 정의부 */

