// 예제 11-5.cpp
// 결과값이 객체인 함수 작성하기
// 객체를 return문에 사용한 프로그램

#include <iostream>
using namespace std;

class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void ShowComplex() const;
	void SetComplex(int r = 0, int i = 0);
};

Complex::Complex(int r, int i) {
	real = r;
	image = i;
}
void Complex::ShowComplex() const {
	cout << "( " << real << " + " << image << "i )" << endl;
}
void Complex::SetComplex(int r, int i) {
	real = r;
	image = i;
}

Complex CopyComplex(Complex des, Complex src) {
	des = src;
	return des;		// 값이 잘 들어갔는지 체크해야 하기 때문에 return문 사용
}

void main()
{
	Complex x(10, 20);
	Complex y(30, 40);

	cout << " x => ";
	x.ShowComplex();
	cout << " y => ";
	y.ShowComplex();

	cout << "--------------------------------\n";
	y = CopyComplex(y, x);

	cout << " x => ";
	x.ShowComplex();
	cout << " y => ";
	y.ShowComplex();
}