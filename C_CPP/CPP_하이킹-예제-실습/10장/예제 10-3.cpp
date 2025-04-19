// 예제 10-3.cpp
// private 멤버를 다루기 위한 멤버함수 추가하기

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
	void SetReal(int r);
	void SetImage(int i);
};

// 멤버함수(=메소드) 정의
void Complex::SetComplex() {
	real = 2;
	image = 5;
}
void Complex::ShowComplex() {
	cout << "( " << real << " + " << image << "i )" << endl;
}
void Complex::SetReal(int r) {
	real = r;
}
void Complex::SetImage(int i) {
	image = i;
}

void main()
{
	Complex x;		// 객체(=인스턴스) 선언

	x.SetReal(5);
	x.SetImage(10);
	x.ShowComplex();
}
