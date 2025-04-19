// 예제 10-8.cpp
// 매개변수의 자료형이 다른 함수의 오버로딩을 이용해서 절댓값 구하기

#include <iostream>
using namespace std;

// int형 절댓값
int myabs(int num) {
	if (num < 0)
		num = -num;
	return num;
}
// double형 절댓값
double myabs(double num) {
	if (num < 0)
		num = -num;
	return num;
}
// long int형 절댓값
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
