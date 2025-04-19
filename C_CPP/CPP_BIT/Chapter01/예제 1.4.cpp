// 예제 1.4.cpp
// 함수 중복 정의 (function overloading)

#include <iostream>
using namespace std;

int GetMax(int a, int b) {
	if (a > b) { return a; };
	return b;
}

char GetMax(char a, char b) {
	if (a > b) { return a; }
	return b;
}

int main()
{
	cout << GetMax(2, 3) << endl;
	cout << GetMax('a', 'b') << endl;

	return 0;
}
