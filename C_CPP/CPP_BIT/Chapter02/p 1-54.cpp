// p 1-54.cpp	switch문
// switch문을 이용한 사칙연산 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int num1, num2;
	char op;

	cout << "첫 번째 숫자 입력 : ";		cin >> num1;
	cout << "두 번째 숫자 입력 : ";		cin >> num2;
	cout << "연산자 입력 [+, -, *,/] : ";		cin >> op;

	switch (op) {
	case '+': cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		break;
	case '-': cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		break;
	case '*': cout << num1 << " *  " << num2 << " = " << num1 * num2 << endl;
		break;
	case '/': cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		break;
	default: cout << "연산자를 잘못 입력하셨습니다." << endl;
	}
	return 0;
}