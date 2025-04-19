// ex 11-1.cpp
// 객체 포인터 사용하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);		// 생성자 선언
	void showComplex() const;
};
/* 클래스 멤버함수(메소드) 선언부 */
Complex::Complex(int r, int i) : real(r), image(i) { }		// 생성자 정의
void Complex::showComplex() const {
	cout << "( " << real << " + " << image << "i )" << endl;
}

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Complex x(10, 20);
	Complex y;

	cout << "Object x => ";
	x.showComplex();
	cout << "Object y => "; 
	y.showComplex();

	Complex* pCom;
	
	pCom = &x;
	cout << "\n pCom->showComplex() => ";		// pCom 객체 포인터로 멤버 참조할 때는 -> 사용
	pCom->showComplex();

	pCom = &y;
	cout << " pCom->showComplex() => ";			// pCom 객체 포인터로 멤버 참조할 때는 -> 사용
	pCom->showComplex();
}

/* 함수 정의부 */
