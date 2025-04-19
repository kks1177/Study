// p 1-64.cpp	재귀함수
// 재귀함수를 이용하여 사용자가 입력한 수의 factorial(n!)을 구하는 프로그램

#include <iostream>
using namespace std;

long factorial(int n);

int main(void)
{
	int n, fact;
	
	cout << "숫자 입력 : ";
	cin >> n;

	fact = factorial(n);
	cout << n << "!의 결과 : " << fact << endl;

	return 0;
}

long factorial(int n) {
	long res;

	if (n > 0)	// 재귀를 멈출 수 있도록 변수(매개변수)의 값의 변화와 종료 조건이 있어야 한다.
		res = n * factorial(n - 1);
	else
		res = 1;

	return res;
}