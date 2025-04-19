// ex 7-6.cpp
// 포인터 변수에 문자열 대입하기

#include <iostream>
using namespace std;

int main()
{
	char str[256] = "Apple";
	const char* ptr = "Banana";

	cout << " str = " << (int)str << " \t str = " << str << endl;
	cout << " ptr = " << (int)ptr << " \t ptr = " << ptr << endl;

	// str = "Grapes";		// 문자 배열은 다른 문자열 상수를 대입하지 못한다.

	// 포인터 변수가 "Banana"의 시작주소값 대신 "Orange"의 시작주소값을 가리키게 됨.
	ptr = "Orange";
	// 포인터 변수 ptr에 다른 주소가 저장되어 있다.
	cout << " ptr = " << (int)ptr << "\t ptr = " << ptr << endl;
}