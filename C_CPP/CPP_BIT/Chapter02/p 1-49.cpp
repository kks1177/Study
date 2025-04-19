// p 1-49.cpp	변환 연산자(캐스트연산자)
// 형변환 연산자를 이용하여 명시적 형변환이 일어남을 확인하는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int a = 3;

	cout << "a/10 = " << a / 10 << endl;
	cout << "((double)a)/10 = " << ((double)a) / 10 << endl;

	return 0;
}