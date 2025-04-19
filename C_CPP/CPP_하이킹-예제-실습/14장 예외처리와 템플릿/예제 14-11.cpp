// 예제 14-11.cpp
// 절댓값을 구하는 함수의 오버로딩 살펴보기

#include <iostream>
using namespace std;

int myabs(int num) {
	if (num < 0)
		num = -num;
	return num;
}
double myabs(double num) {
	if (num < 0)
		num = -num;
	return num;
}
long int myabs(long int num) {
	if (num < 0)
		num = -num;
	return num;
}

void main()
{
	int a = -10;
	cout << a << "의 절댓값은 -> " << myabs(a) << endl;

	double b = -3.4;
	cout << b << "의 절댓값은 -> " << myabs(b) << endl;

	long int c = -20L;
	cout << c << "의 절댓값은 -> " << myabs(c) << endl;
}
