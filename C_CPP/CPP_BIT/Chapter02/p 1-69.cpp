// p 1-69.cpp	기본 매개변수
// 기본 매개변수를 가지는 print 함수의 출력 테스트 프로그램

#include <iostream>
using namespace std;

void print(int first, const char* second = "NO VALUE", double third = 0) {
	cout << "first = " << first << ", " << "second = " << second << ", " << "third = " << third << endl;
}

int main(void)
{
	print(10);
	print(10, "VALUE");
	//print(10, 99.9);		// error : skip second parameter
	print(10, "VALUE", 99.9);

	return 0;
}