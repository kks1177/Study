// ex 10-7.cpp
// 함수의 오버로딩 없이 절댓값 구하기

#include <iostream>
using namespace std;

/* 클래스 선언부 */
/* 클래스 멤버함수(메소드) 선언부 */

/* 구조체 선언부 */

/* 함수 선언부 */
int myabs(int num);
double fmyabs(double num);
long int lmyabs(long int num);

/* 메인함수 */
int main()
{
	int a  = -10;
	cout << a << "의 절댓값은 ->  " << myabs(a) << endl;

	double b = -3.4;
	cout << b << "의 절댓값은 -> " << fmyabs(b) << endl;
	
	long int c = -20L;
	cout << c << "의 절댓값은 -> " << lmyabs(c) << endl;
}

/* 함수 정의부 */
int myabs(int num) {
	if (num < 0)
		num = -num;
	return num;
}
double fmyabs(double num) {
	if (num < 0)
		num = -num;
	return num;
}
long int lmyabs(long int num) {
	if (num < 0)
		num = -num;
	return num;
}
