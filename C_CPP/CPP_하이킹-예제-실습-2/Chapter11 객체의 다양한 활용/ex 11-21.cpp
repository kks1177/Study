// ex 11-21.cpp
// 출력을 위한 << 연산자 오버로딩하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	friend ostream& operator<<(ostream& os, const Complex& comObj);
};
/* 클래스 멤버함수(메소드) 선언부 */
Complex::Complex(int r, int i) : real(r), image(i) { }
ostream& operator<<(ostream& os, const Complex& comObj) {
	os << "( " << comObj.real << " + " << comObj.image << "i )" << endl;

	return os;
}

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Complex x(10, 20);

	cout << x;
}

/* 함수 정의부 */

