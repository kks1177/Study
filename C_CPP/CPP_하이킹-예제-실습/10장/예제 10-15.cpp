// 예제 10-15.cpp
// 생성자의 콜론 초기화하기
// 생성자 머리 부분에서 멤버변수에 초깃값을 설정한 예제

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

Complex::Complex(int r, int i) : real(r), image(i)		// 생성자 정의
{
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

