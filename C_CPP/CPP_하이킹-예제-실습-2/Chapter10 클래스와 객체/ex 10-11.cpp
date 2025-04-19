// ex 10-11.cpp
// 매개변수가 없는 생성자 작성하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class Complex {
private:
	int real;
	int image;
public:
	Complex();		// 생성자 선언
	void showComplex() const;
};
/* 클래스 멤버함수(메소드) 선언부 */
Complex::Complex() {
	real = 5;
	image = 20;
}
void Complex::showComplex() const {
	cout << "( " << real << " + " << image << "i )" << endl;
}

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Complex x;
	x.showComplex();
}

/* 함수 정의부 */
