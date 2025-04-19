// ex 11-15.cpp
// 프렌드 함수 정의하기

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

	friend void prn(Complex* pCom);
};
/* 클래스 멤버함수(메소드) 선언부 */
Complex::Complex(int r, int i) : real(r), image(i) { }
void Complex::showComplex() const {
	cout << "( " << real << " + " << image << "i )" << endl;
}

/* 구조체 선언부 */

/* 함수 선언부 */
void prn(Complex* pCom) {
	for (int i = 0; i < 4; i++)
		cout << "( " << pCom[i].real << " + " << pCom[i].image << "i )" << endl;
}

/* 메인함수 */
int main()
{
	Complex arr[4] = {
		Complex(2, 4),
		Complex(4, 8),
		Complex(8, 16),
		Complex(16, 32)
	};

	prn(arr);
}

/* 함수 정의부 */

