// ex 11-9.cpp
// 정적 멤버함수 정의하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class staticTest {
private:
	static int a;
	int b;
public:
	staticTest();
	static void setA(int new_a);		// 정적 멤버함수(메소드) 정의
	static int getA();
};
/* 클래스 멤버함수(메소드) 선언부 */
int staticTest::a = 10;
staticTest::staticTest() : b(20) { }
void staticTest::setA(int new_a) {
	a = new_a;
}
int staticTest::getA() {
	return a;
}

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	// cout << " staticTest.a => " << staticTest.a << "\n\n";
	cout << " staticTest::getA() => " << staticTest::getA() << "\n\n";

	staticTest s1, s2;

	s1.setA(10000);

	cout << " s1.getA() -> " << s1.getA() << "\t";
	cout << " s2.getA() -> " << s2.getA() << "\n";
}

/* 함수 정의부 */

