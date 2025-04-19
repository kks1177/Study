// 12장 연습문제.cpp


// 1번
/*
 - 기반 클래스(Base class)	  : seoul
 - 파생 클래스(Derived class) : pusan
*/


// 2번 : 1, 4, 7, 8번
/*
#include <iostream>
using namespace std;

class Base {
private:	int m_Pri;
protected:	int m_Pro;
public:		int m_Pub;
};

class Derived : public Base {
public:
	Derived(int m_Pri = 1, int m_Pro = 2, int m_Pub = 3);
	void func();
};
Derived::Derived(int m_Pri, int m_Pro, int m_Pub) {
	this->m_Pri = m_Pri;
	this->m_Pro = m_Pro;
	this->m_Pub = m_Pub;
}
void Derived::func() {
	cout << m_Pri << endl;
	cout << m_Pro << endl;
	cout << m_Pub << endl;
}

void main()
{
	Derived obj;
	obj.func();

	cout << obj.m_Pri << endl;
	cout << obj.m_Pro << endl;
	cout << obj.m_Pub << endl;
}
*/


// 3번
/*
#include <iostream>
using namespace std;

class Base {
protected:
	int a, b, c;
public:
	Base(int a, int b, int c);
	Base();
	~Base();
};

Base::Base(int a, int b, int c) {
	cout << "Parnet 클래스의 매개변수 3개짜리 생성자 호출" << endl;
	this->a = a;
	this->b = b;
	this->c = c;
}
Base::Base() {
	cout << "Parnet 클래스의 기본 생성자 호출" << endl;
}
Base::~Base() {
	cout << "Parnet 클래스의 소멸자 호출" << endl;
}

class Derived : public Base {
public:
	Derived(int a, int b, int c);
	Derived();
	~Derived();
};

Derived::Derived(int a, int b, int c) : Base(a, b, c) {
	cout << "Derived 클래스의 매개변수 3개짜리 생성자 호출" << endl;
}
Derived::Derived() {
	cout << "Derived 클래스의 기본 생성자 호출" << endl;
}
Derived::~Derived() {
	cout << "Derived 클래스의 소멸자 호출" << endl;
}

void main()
{
	Derived one;

	Derived two(10, 20, 30);
}
*/


// 4번 : Derived Method
/*
#include <iostream>
using namespace std;

class Base {
public:
	void Prn();
};

void Base::Prn() {
	cout << "Base Method" << endl;
}

class Derived : public Base {
public:
	void Prn();
};

void Derived::Prn() {
	cout << "Derived Method" << endl;
}

void main()
{
	Derived cObj;
	cObj.Prn();
}
*/


// 5번
/*
#include <iostream>
using namespace std;

class Parent {
public:
	void Prn();
};

void Parent::Prn() {
	cout << "Parent Method" << endl;
}

class Child : public Parent {
public:
	void Prn();
};

void Child::Prn() {
	cout << "Child Method" << endl;
}

void main()
{
	Parent pObj;
	Child cObj;
	Parent* pPtr = &cObj;
	Child* cPtr = (Child*)pPtr;		// 답 : (Child*) 추가
}
*/


// 6번
/*
#include <iostream>
using namespace std;

class Parent {
public:
	virtual void Prn();		// 답 : virtual 추가
};

void Parent::Prn() {
	cout << "Parent Method" << endl;
}

class Child : public Parent {
public:
	void Prn();
};

void Child::Prn() {
	cout << "Child Method" << endl;
}

void main()
{
	Parent pObj;
	Child cObj;
	Parent* pPtr = &cObj;
	pPtr->Prn();
}
*/


// 7번
/*
#include <iostream>
using namespace std;

class Base {
public:
	virtual void Prn();
};

void Base::Prn() {
	cout << "기반 클래스의 멤버함수 Prn" << endl;
}

class Derived : public Base {
public:
	void Prn();
};

void Derived::Prn() {
	cout << "파생 클래스의 멤버함수 Prn" << endl;
}

void func1(Base& pRef) {
	pRef.Prn();
}
void func2(Base* pPtr) {
	pPtr->Prn();
}

void main()
{
	Base pObj;
	Derived cObj;

	cout << "func1(pObj)--->";		// 기반 클래스의 멤버함수 Prn
	func1(pObj);
	cout << "func1(cObj)--->";		// 파생 클래스의 멤버함수 Prn
	func1(cObj);
	cout << "func2(&pObj)--->";		// 기반 클래스의 멤버함수 Prn
	func2(&pObj);
	cout << "func2(&cObj)--->";		// 파생 클래스의 멤버함수 Prn
	func2(&cObj);
}
*/


// 8번


// 9번 : private < protected < public


// 10번
/*
 - 오버로딩(Overloading) - 함수 중복 정의
  오버로딩은 같은 이름의 함수에 매개변수를 다르게 사용하여 매개 변수에 따라 다른 함수가 실행되는 것.

 - 오버라이딩(Overriding) - 함수 재정의
  오버라이딩은 상속받았을때 부모클래스의 함수를 사용하지 않고 다른 기능을 실행할때 함수를 자식클래스에 같은 이름, 매개변수로 재정의 해서 사용하는 것.

 ================================================================
  * 오버로딩(Overloading)

 특징 :
1. 메소드 이름이 같아야 한다.
2. 리턴형이 같아도 되고 달라도 된다.
3. 파라미터 개수가 달라야한다.
4. 파라미터 개수가 같을 경우, 자료형이 달라야 한다.
================================================================

================================================================
* 오버라이딩(Overriding)

특징 :
1. 오버라이드 하고자 하는 메소드가 상위 클래스에 존재해야한다.
2. 메소드 이름이 같아야 한다.
3. 메소드 파라미터 개수, 파라미터의 자료형이 같아야 한다.
4. 메소드 리턴형이 같아야 한다.
5. 상위 메소드와 동일하거나 내용이 추가되어야 한다.
================================================================
*/


// 11번 : error, Parent::Parent 사용할 수 있는 적절한 기본 생성자가 없습니다.
/*
#include <iostream>
using namespace std;

class Parent {
public:
	Parent(int data);
	Parent();		// 답 : Parent(); 기본생성자 추가
};

Parent::Parent(int data) {
	cout << "클래스 Parent의 생성자" << endl;
}
Parent::Parent() { }		// 기본 생성자 정의

class Child : public Parent {
public:
	Child();
};

Child::Child() : Parent() {
	cout << "클래스 Child의 생성자" << endl;
}

void main()
{
	Child c;
}
*/


// 12번 : 1번


//???
// 13번
/*
#include <iostream>
using namespace std;

class Person {
protected:
	char name[20];
	char address[30];
	char phone[20];
public:
	Person(const char* n, const char* a, const char* p);
	Person();
	void print();
};

Person::Person(const char* n, const char* a, const char* p) {
	strcpy_s(name, n);
	strcpy_s(address, a);
	strcpy_s(phone, p);
}
Person::Person() { }
void Person::print() {
	cout << " 이름 : " << name << endl;
	cout << " 주소 : " << address << endl;
	cout << " 휴대폰 번호 : " << phone << endl;
}

class Customer {
protected:
	char id[20];
	int point;
public:
	Customer(const char* n, const char* a, const char* p, const char* i, int po = 0);
	Customer();
	void print();
};

Customer::Customer(const char* n, const char* a, const char* p, const char* i, int po) : Person(n, a, p) {
	strcpy_s(id, i);
	point = po;
}
Customer::Customer() : Person() {
}

void main()
{
	Customer customer("손동복", "잠실", "01078459685", "kiko02", 0);
	Customer.print();
}
*/


// 14번
#include <iostream>
using namespace std;

class Animal {
protected:
	int age;
	int weight;
public:
	Animal(int a = 0, int w = 0);
	void sleep();
	void eat();
	void speak();
	void print();
};

Animal::Animal(int a, int w) {
	age = a;
	weight = w;
}
void Animal::sleep() {
	cout << "자다." << endl;
}
void Animal::eat() {
	cout << "먹다." << endl;
}
void Animal::speak() {

}
void Animal::print() {
	cout << " 나이 : " << age << endl;
	cout << " 몸무게 : " << weight << endl;
	sleep();
}

class Dog : public Animal {
protected:
	char breed[20];		// 품종
public:
	Dog(int a, int w, const char* b);
	void speak();
	void print();
};

Dog::Dog(int a, int w, const char* b) {
	a = age;
	w = weight;
	strcpy_s(breed, b);
}
void Dog::speak() {
	cout << "멍멍" << endl;
}
void Dog::print() {
	cout << " 나이   : " << age << endl;
	cout << " 몸무게 : " << weight << endl;
	cout << " 품종   : " << breed << endl;
	sleep();
	eat();
}

class Bird :public Animal {
protected:
public:
	Bird(int a, int w);
	void speak();
};

Bird::Bird(int a, int w) {
	a = age;
	w = weight;
}
void Bird::speak() {
	cout << "짹짹" << endl;
}

void main()
{
	Dog dog(3, 7, "말티즈");
	dog.print();
	dog.sleep();
	dog.speak();
	
	cout << "---------------------\n";

	Bird bird(1, 3);
	bird.print();
	bird.sleep();
	bird.speak();
}


// 15번


// 16번


// 17번


// 18번


// 19번


// 20번

