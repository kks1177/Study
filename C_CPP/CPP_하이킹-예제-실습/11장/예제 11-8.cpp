// 예제 11-8.cpp
// 클래스 단위 멤버변수와 인스턴스 단위 멤버변수의 차이점 알아보기

/*
 < 정적 멤버변수의 특징 >
 1. 클래스의 모든 인스턴스(객체)에 의해 공유된다.
 2. 자료가 저장되어 값이 유지되는 원리는 전역변수와 동일, But 정적 멤버변수는 해당 클래스명으로 접근해야
   한다는 점에서 전역변수와 차이가 남.

 < 정적 멤버변수를 사용하기 위한 2가지 조건 >
 1. 정적 멤버변수는 특정 클래스 내부에 선언해야 함.
 2. 정적 멤버변수는 클래스 밖에서 별도로 초기화되어야 함.
*/

#include <iostream>
using namespace std;

class StaticTest {
public:
	static int a;		// 정적 멤버변수 선언
	int b;

	StaticTest();		// 메소드
};

StaticTest::StaticTest() {
	b = 20;
}

int StaticTest::a = 10;		// 정적 멤버변수를 클래스 외부에서 초기화

void main()
{
	cout << " StaticTest::a => " << StaticTest::a << "\n\n";
//	cout << " StaticTest::b => " << StaticTest::b << "\n\n";		// error.. 인스턴스 변수는 클래스명으로 접근 불가
																	// 객체 생성 후에만 사용 가능

	StaticTest s1, s2;

	cout << " s1.a -> " << s1.a << "\t s2.a -> " << s2.a << endl;
	cout << " s1.b -> " << s1.b << "\t s2.b -> " << s2.b << "\n\n";

	s1.a = 100;
	cout << " s1.a => " << s1.a << "\t";
	cout << " s2.a => " << s2.a << "\n\n";

	s1.b = 200;
	cout << " s1.b => " << s1.b << "\t";
	cout << " s2.b => " << s2.b << "\n\n";
}
