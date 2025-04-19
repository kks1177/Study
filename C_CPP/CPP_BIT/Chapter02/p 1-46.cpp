// p 1-46.cpp	논리연산자
// 논리 연산을 사용하여 둘 이상의 비교조건들이 결합될 수 있음을 보여주는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int num1, num2, num3, num4;

	num1 = 100;

	cout << "Enter 1st number : ";
	cin >> num2;

	cout << "Enter 2st number : ";
	cin >> num3;

	num4 = num1 < num2 && num1 < num3;
	cout << "논리곱 : " << num4 << endl;

	num4 = num1 < num2 || num1 < num3;
	cout << "논리합 : " << num4 << endl;

	return 0;
}