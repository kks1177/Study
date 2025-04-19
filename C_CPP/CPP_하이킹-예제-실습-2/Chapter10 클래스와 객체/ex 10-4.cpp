// ex 10-4.cpp
// 인라인 함수 사용하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class Complex {
private:
	int real;
	int image;
public:
	void setComplex() {		// 자동으로 인라인 함수
		real = 2;
		image = 5;
	}
	void showComplex();
};
/* 클래스 멤버함수(메소드) 정의부 */
inline void Complex::showComplex() {		// 인라인 함수 정의
	cout << "( " << real << " + " << image << "i )" << endl;
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
