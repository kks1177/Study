// ex 10-2.cpp
// private 멤버 성격 파악하기
// 컴파일 에러 발생 예시 예제

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
/* Complex 클래스 멤버함수(메소드) 정의부 */
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
	Complex x;		// 객체(인스턴스) 선언

	// private 멤버변수의 값을 변경하려면 값을 변경할 수 있도록 하는 멤버함수를 추가하여 사용해야 함
	x.real = 5;					// error..
	x.image = 10;			// error..
	x.showComplex();
}

/* 함수 정의부 */
