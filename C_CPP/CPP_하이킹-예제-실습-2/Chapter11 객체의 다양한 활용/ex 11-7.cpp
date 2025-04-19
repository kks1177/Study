// ex 11-7.cpp
// 객체의 참조에 의한 전달 방식의 함수 작성하기 (Call by Reference)

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
// &des : 실 매개변수 값 변경을 위해 참조 변수 선언
// &src  : 메모리 효율성을 높이기 위해 참조 변수 선언
Complex &copyComplex(Complex &des, Complex &src) {			
	des = src;			// y = x		// 복사 목표 = 복사 대상

	return des;		// 주소를 돌려줌
}

/* 메인함수 */
int main()
{
	Complex x(10, 20);
	Complex y(30, 40);
	Complex z;


	z = copyComplex(y, x);
	cout << " x => ";
	x.showComplex();
	cout << " y => ";
	y.showComplex();
	cout << " z => ";
	z.showComplex();
}

/* 함수 정의부 */
