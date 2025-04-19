// 예제 7-6.cpp
// 포인터 변수에 문자열 대입하기

#include <iostream>
using namespace std;

void main()
{
	char str[256] = "Apple";
	const char* ptr = "Banana";		// const		<<== error c2440 해결법..

	cout << "  str = " << (int)str << " \t str = " << str << endl;
	cout << "  ptr = " << (int)ptr << "\t ptr = " << ptr << endl;

	//	str = "Grapes";		// 문자 배열은 다른 문자열 상수를 대입 못함

		// 포인터 변수에는 다른 문자열 상수를 대입 가능
	ptr = "Orange";
	// 포인터 변수 ptr에 다른 주소가 저장되어 있음
	cout << "  ptr = " << (int)ptr << "\t ptr = " << ptr << endl;
}
