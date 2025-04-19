// ex 11-10.cpp
// 정적 멤버함수 사용 시 주의점 살펴보기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class staticTest {
private:
	static int a;
	int b;
public:
	staticTest();
	static void printA();
	void printB();
};
/* 클래스 멤버함수(메소드) 선언부 */
int staticTest::a = 10;
staticTest::staticTest() : b(20) { }
void staticTest::printA() {
	cout << " a : " << a << endl;
	// cout << " this->a : " << this->a << endl;			// 정적 멤버함수에서 this 포인터를 사용할 시 error..
	// cout << " b : " << b << endl;								// 
}
void staticTest::printB() {
	cout << " this->b : " << this->b << endl;
}

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	staticTest s1;

	s1.printA();
	s1.printB();
}

/* 함수 정의부 */

