// 예제 10-12.cpp
// 다양한 초깃값의 매개변수를 사용하는 생성자 작성하기

#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int image;
public:
	Complex(int r, int i);		// 생성자 선언
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
	Complex y(30, 40);
//	Complex z;			// error C2512 발생 : 매개변수를 갖는 기본 생성자를 만들어주면 컴파일러는 프로그래머에게 매개변수 없는 생성자를 작성할 것을 떠맡김.
	
	x.ShowComplex();
	y.ShowComplex();
}
