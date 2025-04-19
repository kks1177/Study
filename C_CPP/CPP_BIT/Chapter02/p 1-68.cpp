// p 1-68.cpp
// 함수 오버로딩 테스트 프로그램

#include <iostream>
using namespace std;

void print(char* cp) { cout << "CHAR* = " << cp << endl; }
void print(int i) { cout << "INT = " << i << endl; }
void print(float f) { cout << "FLOAT = " << f << endl; }

int pow(int x, int y) {
	int res = x;
	for (int i = 0; i < y; i++)
		res *= x;
	cout << "int pow(intx, int y) 실행 : " << endl;
	return res;
}
int pow(int x, double y) {
	double res = x;
	for (int i = 0; i < (int)y; i++)
		res *= x;
	cout << "int pow(int x, double y) 실행 : " << endl;
	return res;
}
double pow(double x, double y) {
	double res = x;
	for (int i = 0; i < (int)y; i++)
		res *= x;
	cout << "double pow(double x, double y) 실행 : " << endl;
	return res;
}

int main(void)
{
	short i = -1;
	double d = 123.344;

	cout << "Overloading Test";
	print(1);
	print(i);
	print(124.123f);
	//print(d);		// error : multiple candidates

	cout << "\t pow(2, 3) = " << pow(2, 3) << endl;
	cout << "\t pow(2.0, 3.0) = " << pow(2.0, 3.0) << endl;
	cout << "\t pow(2, 3.0) = " << pow(2, 3.0) << endl;
	//cout << "\t pow(2.0, 3) = " << pow(2.0, 3) << endl;		// error : multiple candidates

	return 0;
}

