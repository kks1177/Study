// 예제 10-10.cpp
// 함수의 매개변수에 기본값 지정하기		// 예제 10-9를 보완한 예제

#include <iostream>
using namespace std;

void print(int x = 0, int y = 0, int z = 0);

void main()
{
	print(10, 20, 30);
	print(10, 20);
	print(10);
	print();
}

void print(int x, int y, int z) {
	cout << x << " " << y << " " << z << endl;
}

