// p 1-67.cpp	함수 오버로딩(3)
// 다음 중 오버로딩된 여러개의 pow() 함수 중 각각 어떤 함수가 수행될지 생각해보고 이유를 말해보자. (오류가 발생할 수도 있다.)

#include <iostream>
using namespace std;

int pow(int, int);
double pow(double, double);

complex pow(double, complex);
complex pow(complex, int);
complex pow(complex, double);
complex pow(complex, complex);

int main(void)
{


	return 0;
}

int pow(int, int) {

}
double pow(double, double) {

}

void k(complex z) {
	int i = pow(2, 2);
	double d = pow(2.0, 2.0);
	complex z2 = pow(2, z);
	complex z3 = pow(z, 2);
	complex z4 = pow(z, z);
	double d = pow(2.0, 2);
}