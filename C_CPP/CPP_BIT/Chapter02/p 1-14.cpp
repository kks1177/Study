// p 1-14.cpp	데이터 타입의 크기
// sizeof연산자를 이용하여 각 데이터 타입의 크기를 알아보는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int* ip;
	long* lp;
	double* dp;
	char* cp;

	cout << endl << "#### Primitive type silze ####\n" << endl;

	cout << "sizeof(bool) = " << sizeof(bool) << endl;
	cout << "sizeof(char) = " << sizeof(char) << endl;

	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(unsigned) = " << sizeof(unsigned) << endl;
	cout << "sizeof(signed) = " << sizeof(signed) << endl;
	cout << "sizeof(short) = " << sizeof(short) << endl;
	cout << "sizeof(unsigned short) = " << sizeof(unsigned short) << endl;
	cout << "sizeof(signed short) = " << sizeof(signed short) << endl;

	cout << "sizeof(long) = " << sizeof(long) << endl;
	cout << "sizeof(unsigned long) = " << sizeof(unsigned long) << endl;
	cout << "sizeof(signed long) = " << sizeof(signed long) << endl;

	cout << "sizeof(float) = " << sizeof(float) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;
	cout << "sizeof(long double) = " << sizeof(long double) << endl;

	cout << endl << "#### Pointer type size ####\n" << endl;

	cout << "int pointer size = " << sizeof(ip) << endl;
	cout << "long pointer size = " << sizeof(lp) << endl;
	cout << "double pointer size = " << sizeof(dp) << endl;
	cout << "char pointer size = " << sizeof(cp) << endl;

	return 0;
}

