// ex 10-15.cpp
// 생성자 콜론 초기화하기

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
};
/* 클래스 멤버함수(메소드) 선언부 */
Complex::Complex(int r, int i) : real(r), image(i) { }			// 생성자 선언, 생성자 1콜론 초기화
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
