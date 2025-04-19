// ex 8-12.cpp
// 열거형 사용하기

#include <iostream>
using namespace std;

/* 열거형 선언부 */
enum COLOR { RED, GREEN, BLUE, WHITE, BLACK };

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	enum COLOR test;

	test = BLUE;
	cout << " test = " << test << "\n\n";		// test는 정수값 2로 설정되어 있음

	cout << "RED = " << RED << endl;
	cout << "GREEN = " << GREEN << endl;
	cout << "BLUE = " << BLUE << endl;
	cout << "WHITE = " << WHITE << endl;
	cout << "BLACK = " << BLACK << endl;
}

/* 함수 정의부 */
