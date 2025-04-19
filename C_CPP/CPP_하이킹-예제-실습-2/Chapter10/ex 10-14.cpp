// ex 10-14.cpp
// 생성자의 기본 매개변수 값 설정하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int  i = 0);			// 생성자 선언, 생성자의 기본 매개변수
	void showComplex() const;
};
/* 클래스 멤버함수(메소드) 선언부 */
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
	Complex x(10, 20);
	Complex y(30);
	Complex z;

	x.showComplex();
	y.showComplex();
	z.showComplex();
}

/* 함수 정의부 */
