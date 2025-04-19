// 예제 10-14.cpp
// 생성자의 기본 매개변수 값 설정하기			// 예제 10-13 보완한 예제
// 생성자 몸체 부분에서 멤버변수에 초깃값을 설정한 예제

/*
 객체 초기화 == 멤버변수에 초깃값을 설정하는 것
 생성자에서 주로 일어나는 일은 멤버변수에 대입 연산자를 사용해서 값을 설정하는 것
*/

#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);		// 생성자 선언
	void ShowComplex() const;
};

Complex::Complex(int r, int i) {		// 생성자 정의
	real = r;
	image = i;
}
void Complex::ShowComplex() const {
	cout << "( " << real << " + " << image << "i )" << endl;
}

void main()
{
	Complex x(10, 20);
	Complex y(30);
	Complex z;

	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();
}
