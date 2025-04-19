// ex 12-2.cpp
// 상속 관계에서의 생성자와 소멸자 알아보기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
// 기반 클래스 (부모)
class Base {
public:
	Base();
	~Base();
};
/* 클래스 멤버함수(메소드) 선언부 */
Base::Base() {
	cout << " 기반 클래스의 생성자 " << endl;
}
Base::~Base() {
	cout << " 기반 클래스의 소멸자 " << endl;
}

// 파생 클래스 (자식)
class Derived : public Base {
public:
	Derived();
	~Derived();
};
Derived::Derived() {
	cout << " 파생 클래스의 생성자 " << endl;
}
Derived::~Derived() {
	cout << " 파생 클래스의 소멸자 " << endl;
}

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	Derived obj;			// 파생클래스의 객체
}

/* 함수 정의부 */

