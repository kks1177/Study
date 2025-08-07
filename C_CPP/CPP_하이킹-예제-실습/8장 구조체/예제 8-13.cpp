// 예제 8-13.cpp
// 열거 상수에 수치 정하기

// 열거형은 의미 파악이 어려운 숫자 대신 단어표현으로 프로그램 작성이 용이

#include <iostream>
using namespace std;

enum COLOR {RED=-1, GREEN, BLUE=35, WHITE, BLACK=2};

void main()
{
	enum COLOR test;	// 열거형 변수 test를 선언함

	cout << " RED   = " << RED << endl;
	cout << " GREEN = " << GREEN << endl;
	cout << " BLUE  = " << BLUE << endl;
	cout << " WHITE = " << WHITE << endl;
	cout << " BLACK = " << BLACK << endl;

	// 열거형 변수 test에 {}안의 멤버 중의 하나인 BLUE를 지정
	test = BLUE;
	cout << " test  = " << test << "\n\n";	// test는 정수값 35로 정의되어 있음

	switch (test) {
	case RED:
		cout << " 빨간색 선택" << endl;
		break;
	case GREEN:
		cout << " 초록색 선택" << endl;
		break;
	case BLUE:
		cout << " 파란색 선택" << endl;
		break;
	case WHITE:
		cout << " 하얀색 선택" << endl;
		break;
	case BLACK:
		cout << " 검정색 선택" << endl;
		break;
	}
}
