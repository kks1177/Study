// p 1-10.cpp	정수형
// 정수형 변수를 선언하고 값을 출력하는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int age_10 = 30;
	int age_8 = 030;
	int age_16 = 0x30;

	cout << "I am " << age_10 << " years old." << endl;
	cout << "I am " << age_8 << " years old." << endl;
	cout << "I am " << age_16 << " years old." << endl;

	return 0;
}