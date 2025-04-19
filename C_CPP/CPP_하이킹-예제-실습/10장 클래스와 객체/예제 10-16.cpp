// 예제 10-16.cpp
// 소멸자 정의하기

/*
 < 생성자와 소멸자 비교 >
 1. 생성자는 객체가 생성될 때 자동 호출, but 소멸자는 객체가 소멸될 때 자동 호출
 2. 생성자는 객체를 초기화하기 위한 멤버함수, but 소멸자는 객체를 정리해주는(리소스를 해체한다든지 하는 작업) 멤버함수
*/

/*
 < 생성자의 특징 >
1. 소멸자 함수 == 멤버함수
2. 소멸자 함수명도 생성자처럼 클래스명 사용
3. 소멸자 함수는 생성자 함수와 구분하려고 함수명 앞에 ~기호를 붙임
4. 소멸자는 자료형을 지정하지 x (반환값의 유형 지정 x)
5. 소멸자의 호출은 명시적 x
6. 소멸자는 객체 소멸 시 자동 호출
7. 소멸자는 전달 매개변수 지정 불가
8. 소멸자는 전달 매개변수를 지정할 수 없기 때문에 오버로딩 또한 불가
*/

#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);		// 생성자 선언
	~Complex();							// 소멸자 선언
	void ShowComplex() const;
};

Complex::Complex(int r, int i) : real(r), image(i)		// 생성자 정의
{
}
Complex::~Complex() {		// 소멸자 정의
	cout << "소멸자가 호출됨." << endl;
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

