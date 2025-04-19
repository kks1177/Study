// 예제 10-4.cpp
// 인라인 함수 사용하기

#include <iostream>
using namespace std;

// 클래스 선언
class Complex
{
private:
	int real;
	int image;
public:
	void SetComplex() {
		real = 2;
		image = 5;
	}
	void ShowComplex();
};

// 멤버함수(=메소드) 정의
void Complex::ShowComplex() {
	cout << "( " << real << " + " << image << "i )" << endl;
}

void main()
{
	Complex x;		// 객체(=인스턴스) 선언

	x.SetComplex();
	x.ShowComplex();
}
