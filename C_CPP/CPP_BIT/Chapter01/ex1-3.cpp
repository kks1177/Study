// ex1-3.cpp
// 편의성 제공 - 레퍼런스 변수의 사용 예

#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int& ra = a;
	ra = 3;

	cout << "a : " << a << endl;
	cout << "ra : " << ra << endl;
}
