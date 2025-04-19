// 예제 11-1.cpp
// 객체 포인터 사용하기

/*
.연산자  : 객체로 멤버에 접근할 때 사용
->연산자 : 객체 포인터로 멤버를 참조할 때 사용
*/

#include <iostream>
using namespace std;

class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);	// 생성자 선언
	void ShowComplex() const;
};

Complex::Complex(int r, int i) : real(r), image(i)		// 생성자 정의
{
}
void Complex::ShowComplex() const {
	cout << "( " << real << " + " << image << "i )" << endl;
}

void main()
{
	Complex x(10, 20);
	Complex y;

	cout << " Object x => ";
	x.ShowComplex();
	cout << " Object y => ";
	y.ShowComplex();

	Complex* pCom;
	pCom = &x;		// 객체변수 x의 주소값을 pCom에 저장
	cout << "\n pCom->ShowComplex() => ";
	pCom->ShowComplex();

	pCom = &y;		// 객체변수 y의 주소값을 pCom에 저장
	cout << " pCom->ShowComplex() => ";
	pCom->ShowComplex();
}
