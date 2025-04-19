// 예제 12-2.cpp
// 상속 관계에서의 생성자와 소멸자 알아보기

#include <iostream>
using namespace std;

class Base {
public:
	Base();
	~Base();
};

Base::Base() {
	cout << "기반 클래스의 생성자" << endl;
}
Base::~Base() {
	cout << "기반 클래스의 소멸자" << endl;
}

class Derived : public Base {
public:
	Derived();
	~Derived();
};

Derived::Derived() {
	cout << "파생 클래스의 생성자" << endl;
}
Derived::~Derived() {
	cout << "파생 클래스의 소멸자" << endl;
}

void main()
{
	Derived obj;
}
