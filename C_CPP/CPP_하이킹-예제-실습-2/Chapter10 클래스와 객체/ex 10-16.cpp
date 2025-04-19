// ex 10-16.cpp
// 소멸자 정의하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);			// 생성자 선언
	~Complex();									// 소멸자 선언
	void showComplex() const;
};
/* 클래스 멤버함수(메소드) 선언부 */
Complex::Complex(int r, int i) : real(r), image(i) { }			// 생성자 정의
Complex::~Complex() {
	cout << "소멸자 호출 \n";
}
void Complex::showComplex() const {
	cout << "( " << real << " + " << image << "i )" << endl;
}

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Complex x(10, 20);
	Complex y(30);
	Complex z;

	x.showComplex();
	y.showComplex();
	z.showComplex();
}

/* 함수 정의부 */
