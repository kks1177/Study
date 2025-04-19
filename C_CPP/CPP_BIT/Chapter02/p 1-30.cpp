// p 1-30.cpp	Reference(1)
// 변수를 선언한 후 레퍼런스로 변수의 값을 바꾸는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 10;
	int& ref = num1;

	int num2 = ref;
	ref = 20;

	cout << "num1 = " << num1 << endl;
	cout << "ref  = " << ref << endl;
	cout << "num2 = " << num2 << endl;

	return 0;
}
