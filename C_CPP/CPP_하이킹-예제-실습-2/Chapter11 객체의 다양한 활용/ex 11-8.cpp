// ex 11-8.cpp
// 클래스 단위 정적 멤버변수와 인스턴스 단위 멤버변수의 차이점 알아보기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
class staticTest {
// private:
public:
	static int a;		// 정적 멤버변수 선언			// 클래스    단위 멤버변수
	int b;														// 인스턴스 단위 멤버변수

	staticTest();		// 멤버함수 (메소드)
};
/* 클래스 멤버함수(메소드) 선언부 */
staticTest::staticTest() {			// 생성자
	b = 20;
}
int staticTest::a = 10;			// 정적 멤버변수 클래스 외부에서 선언


/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	cout << " staticTest::a => " << staticTest::a << "\n\n";
	//cout << " staticTest::b => " << staticTest::b << "\n\n";

	staticTest s1, s2;			// 객체(s1, s2) 생성

	cout << " s1.a -> " << s1.a << "\t s2.a -> " << s2.a << "\n";			// 클래스가 메모리에 올라갈 떄 생성, 클래스명으로 직접 접근 가능
	cout << " s1.b -> " << s1.b << "\t s2.b -> " << s2.b << "\n\n";		// 클래스명으로 접근 불가능, 객체 생성 후에만 사용 가능

	s1.a = 100;
	cout << " s1.a => " << s1.a << "\t";
	cout << " s2.a => " << s2.a << "\n\n";		// s1으로 a의 값을 변경했지만 s2도 변경된 100이 출력
																	// 정적 멤버변수 a가 여러 인스턴스에 의해 공유됨을 증명

	s1.b = 200;
	cout << " s1.b => " << s1.b << "\t";
	cout << " s2.b => " << s2.b << "\n";
}

/* 함수 정의부 */

