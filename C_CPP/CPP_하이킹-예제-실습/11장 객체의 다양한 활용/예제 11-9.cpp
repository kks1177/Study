// 예제 11-9.cpp
// 정적 멤버함수 정의하기

#include <iostream>
using namespace std;

class StaticTest {
private:
	static int a;
	int b;
public:
	StaticTest();
	static void SetA(int new_a);	// 정적 멤버함수 정의
	static int GetA();				// 정적 멤버함수 정의
};

int StaticTest::a = 10;

StaticTest::StaticTest() {
	b = 20;
}
void StaticTest::SetA(int new_a) {
	a = new_a;
}
int StaticTest::GetA() {
	return a;
}

void main()
{
//  cout << " StaticTest.a => " << StaticTest.a << "\n\n";
	cout << " StaticTest::GetA() => " << StaticTest::GetA() << "\n\n";

	StaticTest s1, s2;

	s1.SetA(10000);

	cout << " s1.GetA() -> " << s1.GetA() << "\t";
	cout << " s2.GetA() -> " << s2.GetA() << endl;
}
