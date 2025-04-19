// ex 11-13.cpp
// 객체 배열을 객체 포인터로 간접 참조하기

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
/* 클래스 멤버함수 선언부 */
Complex::Complex(int r, int i) : real(r), image(i) { }
void Complex::showComplex() const {
	cout << "( " << real << " + " << image << "i )" << endl;
}

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Complex arr[4] = {
		Complex(2, 4),
		Complex(4, 8),
		Complex(8, 16),
		Complex(16, 32)
	};

	Complex* pCom = arr;

	pCom->showComplex();
	(pCom + 1)->showComplex();
}

/* 함수 정의부 */

