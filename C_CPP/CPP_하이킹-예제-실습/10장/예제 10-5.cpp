// 예제 10-5.cpp
// const 멤버함수 사용하기

#include <iostream>
using namespace std;

// 클래스 선언
class Complex
{
private:
	int real;
	int image;
public:
	void SetComplex();		// const 붙이면 안됨
	void ShowComplex() const;
};

// 멤버함수(=메소드) 정의
void Complex::SetComplex() {
	real = 2;
	image = 5;
}
void Complex::ShowComplex() const {
	cout << "( " << real << " + " << image << "i )" << endl;
}

void main()
{
	Complex x;		// 객체(=인스턴스) 선언

	x.SetComplex();
	x.ShowComplex();
}

