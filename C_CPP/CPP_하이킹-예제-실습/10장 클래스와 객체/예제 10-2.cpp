// 예제 10-2.cpp
// private 멤버 성격 파악하기 (error 예제)

#include <iostream>
using namespace std;

// 클래스 선언
class Complex
{
private:
	int real;
	int image;
public:
	void SetComplex();
	void ShowComplex();
};

// 멤버함수(=메소드) 정의
void Complex::SetComplex() {
	real = 2;
	image = 5;
}
void Complex::ShowComplex() {
	cout << "( " << real << " + " << image << "i )" << endl;
}

void main()
{
	Complex x;		// 객체(=인스턴스) 선언

	x.real = 5;			// error..
	x.image = 10;		// error..
	x.ShowComplex();
}

