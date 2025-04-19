// 예제 10-9.cpp
// 매개변수의 개수가 다른 함수의 오버로딩 살펴보기

#include <iostream>
using namespace std;

void print(int x, int y, int z) {
	cout << x << " " << y << " " << z << endl;
}
void print(int x, int y) {
	cout << x << " " << y << endl;
}
void print(int x) {
	cout << x << endl;
}

void main()
{
	print(10, 20, 30);
	print(10, 20);
	print(10);
}

