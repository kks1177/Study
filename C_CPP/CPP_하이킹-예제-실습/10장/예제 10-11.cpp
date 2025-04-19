// 예제 10-11.cpp
// 매개변수가 없는 생성자 작성하기

/*
 < 생성자 특징 >
1. 생성자는 특별한 멤버함수이다.
2. 생성자명이 반드시 클래스명과 동일해야 함.
3. 생성자는 자료형(반환값의 유형)을 지정하지 않는다.
4. 생성자의 호출은 명시적이지 않다.
5. 생성자는 객체를 선언(생성)할 때 컴파일러에 의해 자동으로 호출된다.
6. 객체의 초기화 == 멤버변수의 초기화
*/

#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int image;
public:
	Complex();		// 생성자 선언
	void ShowComplex() const;
};

Complex::Complex() {		// 생성자 정의
	real = 5;
	image = 20;
}
void Complex::ShowComplex() const {
	cout << "( " << real << " + " << image << "i )" << endl;
}

void main()
{
	Complex x;
	
	x.ShowComplex();
}
