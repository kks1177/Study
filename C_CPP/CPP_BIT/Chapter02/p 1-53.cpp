// p 1-53.cpp	if문
// if문을 이용한 사칙연산 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int num1, num2;
	char op;

	cout << "첫 번째 숫자 입력 : ";		cin >> num1;
	cout << "두 번째 숫자 입력 : ";		cin >> num2;
	cout << "연산자 입력 [+, -, *,/] : ";		cin >> op;

	if (op == '+')
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	if (op == '-')
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	if (op == '*')
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	if (op == '/')
		cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

	return 0;
}