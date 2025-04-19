// 예제 8-12.cpp
// 열거형 사용하기

#include <iostream>
using namespace std;

enum COLOR {RED, GREEN, BLUE, WHITE, BLACK};
void main()
{
	enum COLOR test;

	test = BLUE;		// 2
	cout << " test  = " << test << "\n\n";	// test는 정수값 2로 정의되어 있다.

	cout << " RED   = " << RED << endl;
	cout << " GREEN = " << GREEN << endl;
	cout << " BLUE  = " << BLUE << endl;
	cout << " WHITE = " << WHITE << endl;
	cout << " BLACK = " << BLACK << endl;
}
