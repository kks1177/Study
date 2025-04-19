// p 1-37.cpp	Storage Class(2)-static 함수
// 블록 범위를 갖는 정적 변수를 선언하여 그 값을 출력해보는 프로그램

#include <iostream>
using namespace std;

void subfunc(int count);

int main(void)
{
	int i = 1;

	while (i <= 10)
		subfunc(i++);

	return 0;
}

void subfunc(int count) {
	int autovar = 1;
	static int staticvar = 1;

	cout << count << " : autovar = " << autovar++ << ", staticvar = " << staticvar++ << endl;
	// 함수가 10번 불리므로 10번의 출력이 이루어질 것이다. 이 때 staticvar의 값은???
}