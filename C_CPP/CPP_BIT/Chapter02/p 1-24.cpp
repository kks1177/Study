// p 1-24.cpp	공용체(Union)
// int, double, char 셋 중 하나의 값만 가질 수 있는 공용체를 사용하는 프로그램

#include <iostream>
using namespace std;

union MyType {
	int num1;
	double num2;
	char ch;
};

int main(void)
{
	union MyType type1 = { 100 };	// 초기화
	union MyType type2 = type1;		// 같은 타입의 공용체 변수로 초기화
	//union MyType type3 = { 100, 1.2 };		// 오류발생 - 한 시점에는 하나의 값만.

	cout << type1.num1 << endl;
	cout << type2.num1 << endl;

	type1.num2 = 11.11;
	type2.ch = 'A';

	// num1과 num2, ch의 값이 어떻게 될까?????
	cout << "[type1]" << endl;
	cout << "num1 = " << type1.num1 << ", num2 = " << type1.num2 << ", ch = " << type1.ch << endl;
	cout << "[type2]" << endl;
	cout << "num1 = " << type2.num1 << ", num2 = " << type2.num2 << ", ch = " << type2.ch << endl;

	return 0;
}