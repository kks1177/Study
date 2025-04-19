// p 1-65.cpp	함수 오버로딩(1)
// 타입별 두개의 숫자를 더하는, 같은 이름의 함수들을 사용하는 프로그램

#include <iostream>
using namespace std;

int add(int n1, int n2);
double add(double d1, double d2);
long add(long l1, long l2);

int main(void)
{
	int a = 10, b = 20;
	double c = 10.1, d = 20.2;
	long e = 10L, f = 20L;

	cout << "a + b = " << add(a, b) << endl;
	cout << "c + d = " << add(c, d) << endl;
	cout << "e + f = " << add(e, f) << endl;

	return 0;
}

int add(int n1, int n2) {
	cout << "addition for integer" << endl;
	return n1 + n2;
}
double add(double d1, double d2) {
	cout << "addition for double" << endl;
	return d1 + d2;
}
long add(long l1, long l2) {
	cout << "addition for long" << endl;
	return l1 + l2;
}