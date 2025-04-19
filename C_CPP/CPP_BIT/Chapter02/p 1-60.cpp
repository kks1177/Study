// p 1-60.cpp	함수의 선언과 정의
// 두 수를 더하는 함수를 만들어 사용하였다.

#include <iostream>
using namespace std;

int add(int num1, int num2);		// 함수 선언방법1
//int add(int, int);				// 함수 선언방법2

int main(void)
{
	int i = 10, j = 20;
	int sum;

	sum = add(i, j);
	cout << "i와 j의 합 : " << sum << endl;

	return 0;
}

int add(int num1, int num2) {		// 함수 정의
	return num1 + num2;
}