// 예제 11-10.cpp
// 정적 멤버함수 사용 시 주의점 살펴보기

/*
 < 정적 멤버함수 사용하 때의 주의사항 >
 1. 정적 멤버함수에서는 this 포인터를 사용(참조)할 수 없음
 2. 정적 멤버함수에서는 인스턴스 변수를 사용 x
 3. 오버라이딩이 되지 않음
*/

#include <iostream>
using namespace std;

class StaticTest {
private:
	static int a;
	int b;
public:
	StaticTest();
	static void PrintA();
	void PrintB();
};

int StaticTest::a = 10;

StaticTest::StaticTest() {
	b = 20;
}
void StaticTest::PrintA() {
	cout << " a : " << a << endl;
//	cout << " this->a : " << this->a << endl;
//  cout << " b : " << b << endl;
}
void StaticTest::PrintB() {
	cout << " this->b : " << this->b << endl;
}

void main()
{
	StaticTest s1;

	s1.PrintA();
	s1.PrintB();
}
