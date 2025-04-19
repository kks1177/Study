// 扁富绊荤.cpp

/*
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
	cout << "磊促." << endl;
}
void Animal::eat() {
	cout << "冈促." << endl;
}
void Animal::speak() {

}
void Animal::print() {
	cout << " 唱捞 : " << age << endl;
	cout << " 个公霸 : " << weight << endl;
	sleep();
}

class Dog : public Animal {
protected:
	char breed[20];		// 前辆
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
	cout << "港港" << endl;
}
void Dog::print() {
	cout << " 唱捞   : " << age << endl;
	cout << " 个公霸 : " << weight << endl;
	cout << " 前辆   : " << breed << endl;
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
	cout << "卤卤" << endl;
}

void main()
{
	Dog dog(3, 7, "富萍令");
	dog.print();
	dog.sleep();
	dog.speak();

	cout << "---------------------\n";

	Bird bird(1, 3);
	bird.print();
	bird.sleep();
	bird.speak();
}
*/



/*
#include <iostream>
using namespace std;

class A {
public:
	int w;
};

class B : public A {
public:
	int x;
};

class C : private A {
public:
	int y;
};

class D : protected B {
public:
	int z;
};

int main()
{
	A a;
	B b;
	C c;
	D d;

	A* ap = &a;
	B* bp = &b;
	C* cp = &c;
	D* dp = &d;
}
*/

/*
#include <iostream>
using namespace std;

class A {
public:
	A() { cout << "积己磊A" << endl; }
	A(int x) { cout << "积己磊A" << x << endl; }
	void prn();
};

void A::prn() {
	cout << 
}

class B : public A {
public:
	B() { cout << "积己磊B" << endl; }
	B(int x) { cout << "积己磊B" << x << endl; }
	B(int x, int y) : A(x + y + 2) { cout << "积己磊B" << x * y * 2 << endl; }
	void prn();
};

void B::prn() {
	cout << 
}

void main()
{
	B b;
	B b(10);
	B b(10, 20);

	cout << b << endl;
	cout << 
}

*/

#include <iostream>
using namespace std;

void main()