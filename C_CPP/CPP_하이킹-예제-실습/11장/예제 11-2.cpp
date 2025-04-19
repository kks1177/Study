// 예제 11-2.cpp
// this 포인터를 명시적으로 사용하기

/*
 - 멤버함수 내의 멤버변수들이 this에 의해 누구의 멤버인지 명시
 - this 는 멤버함수 내에서만 사용 가능
 - 객체 포인터 this를 반드시 사용해야 하는 경우 : 함수의 매개변수와 멤버변수명이 동일해서 이를 구분해야 할 때
  ==> 매개변수가 멤버변수와 이름이 같을 경우, 대입 연산자 왼쪽에 ->를 붙여서 멤버변수임을 알려주어야 함.

 < this 포인터 > 
 1. 멤버함수 내에서 호출 객체의 주소를 저장하는 포인터
 2. 컴파일러에 의해서 제공되므로 프로그래머가 별도로 선언하지 않아도 멤버함수 내에 항상 존재
 3. 객체에 의해 멤버함수가 호출되면 컴파일러는 호출한 객체의 주소를 멤버함수 내의 this 포인터에 저장
 4. 멤버함수 내에서 멤버변수를 참조하거나 다른 멤버함수를 호출할 때 묵시적으로 this 포인터로 접근
 5. 컴파일러가 멤버변수 앞에서 자동적으로 포인터를 붙여주므로 this 포인터를 생략하는 경우가 많지만,
   프로그래머가 this 포인터를 멤버변수나 멤버함수에 직접 붙여주어도 상관 x
*/

#include <iostream>
using namespace std;

class Complex {
private:
	int real;
	int image;
public:
	Complex(int real = 0, int image = 0);
	void ShowComplex() const;
};

/*
Complex::Complex(int real, int image) {		// this 포인터 생략
	real = real;
	image = image;
}
*/
Complex::Complex(int real, int image) {
	this->real = real;
	this->image = image;
}
void Complex::ShowComplex() const {
	cout << "( " << this->real << " + " << this->image << "i )" << endl;
}

void main()
{
	Complex x(10, 20);
	
	x.ShowComplex();
}

