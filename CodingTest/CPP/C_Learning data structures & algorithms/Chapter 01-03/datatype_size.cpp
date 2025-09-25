// datatype_size.cpp
// C++언어에서 제공하는 자료형의 크기 예제

#include <iostream>
using namespace std;

int main(void)
{
	cout << "C언어에서 제공하는 자료형의 크기를 알아보자" << endl;
	cout << "char형의 크기 : " << sizeof(char) << endl;
	cout << "int형의 크기 : " << sizeof(int) << endl;
	cout << "short형의 크기 : " << sizeof(short) << endl;
	cout << "long형의 크기 : " << sizeof(long) << endl;
	cout << "float형의 크기 : " << sizeof(float) << endl;
	cout << "double형의 크기 : " << sizeof(double) << endl;
	cout << "long double형의 크기 : " << sizeof(long double) << endl;

	return 0;
}