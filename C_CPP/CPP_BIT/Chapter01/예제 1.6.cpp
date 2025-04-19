// 예제 1.6.cpp
// 매개 변수명이 없는 입력 매개 변수

#include <iostream>
using namespace std;

int CalculateArea(int width, int height) {
	return width * height;
}
int CalculateArea(int width, int height, bool) {
	return width * height / 2;
}

int main()
{
	cout << "사각형의 넓이 : ";
	cout << CalculateArea(3, 4) << endl;
	cout << "삼각형의 넓이 : ";
	cout << CalculateArea(3, 4, false) << endl;
	return 0;
}