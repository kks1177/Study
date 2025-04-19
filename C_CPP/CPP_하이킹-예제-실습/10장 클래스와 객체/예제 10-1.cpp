// 예제 10-1.cpp
// 복소수를 클래스로 설계하기

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
	Complex x, y;		// 객체(=인스턴스) 선언

	x.SetComplex();
	x.ShowComplex();
	y.SetComplex();
	y.ShowComplex();
}

