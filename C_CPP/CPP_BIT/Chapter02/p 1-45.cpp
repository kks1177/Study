// p 1-45.cpp	비교연산자(관계연산자)
// 사용자가 입력한 숫자가 100이라면 1을, 그렇지 않으면 0을 출력하는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int num1, num2;

	num1 = 100;

	cout << "Enter one number : ";
	cin >> num2;

	cout << (num1 == num2) << endl;

	return 0;
}