// ex 11-19.cpp
// 자신의 값을 1만큼 증가시키는 프렌드 함수 작성하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void showCopmlex();

	friend Complex& AddOnePrefix(Complex& Operand);
	friend Complex& AddOnePostfix(Complex& Operand);
};
/* 클래스 멤버함수(메소드) 선언부 */
Complex::Complex(int r, int i) : real(r), image(i) { }
void Complex::showCopmlex() {
	cout << "( " << real << " + " << image << "i )" << endl;
}

/* 함수 선언부 */
Complex& AddOnePrefix(Complex& Operand) {
	++Operand.real;
	++Operand.image;

	return Operand;
}
Complex& AddOnePostfix(Complex& Operand) {
	Complex temp;

	temp = Operand;
	++Operand.real;
	++Operand.image;

	return temp;
}

/* 메인함수 */
int main()
{
	Complex x(10, 20), y(20, 40);
	Complex z;

	cout << "--- 선행처리 --- \n"; 
	z = AddOnePrefix(x);
	x.showCopmlex();
	z.showCopmlex();

	cout << "--- 후행처리 --- \n";
	z = AddOnePostfix(y);
	y.showCopmlex();
	z.showCopmlex();
}

/* 함수 정의부 */

