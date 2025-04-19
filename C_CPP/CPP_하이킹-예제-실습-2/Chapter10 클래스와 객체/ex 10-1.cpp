// ex 10-1.cpp
// 복소수를 클래스로 설계하기

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
};
/* 클래스 멤버함수(메소드) 정의부 */
// 클래스 외부에 정의
// 어느 클래스의 멤버함수인지를 식별하기 위해 클래스명 + 스코프연산자(::) 명시
void Complex::setComplex() {
	real = 2;
	image = 5;
}
void Complex::showComplex() {
	cout << "( " << real << " + " << image << "i )" << endl;
}

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Complex x, y;		// 객체(인스턴스) 생성

	x.setComplex();
	x.showComplex();
	y.setComplex();
	y.showComplex();
}

/* 함수 정의부 */
