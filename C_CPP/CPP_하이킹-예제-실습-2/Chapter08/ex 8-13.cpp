// ex 8-13.cpp
// 열거 상수에 수치 정하기

#include <iostream>
using namespace std;

/* 열거형 선언부 */
enum COLOR { RED = -1, GREEN, BLUE = 35, WHITE, BLACK = 2 };

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	enum COLOR test;		// 열거형 변수 test를 선언함

	cout << " RED = " << RED << endl;
	cout << " GREEN = " << GREEN << endl;
	cout << " BLUE = " << BLUE << endl;
	cout << " WHITE = " << WHITE << endl;
	cout << " BLACK = " << BLACK << endl;

	// 열거형 변수 test에 {} 안의 멤버 중의 하나인 BLUE를 지정
	test = BLUE;
	cout << " test = " << test << "\n\n";		// test는 정수값 35로 정의되어 있음

	switch (test) {
	case RED:
		cout << " 빨강 선택 \n";
		break;
	case GREEN:
		cout << " 초록 선택 \n";
		break;
	case BLUE:
		cout << " 파랑 선택 \n";
		break;
	case WHITE:
		cout << " 하양 선택 \n";
		break;
	case BLACK:
		cout << " 블랙 선택 \n";
		break;
	}
}

/* 함수 정의부 */
