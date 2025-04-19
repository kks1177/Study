// p 1-38.cpp	Storage Class(2)-전역변수
// 외부연결 정적변수(전역변수)를 선언하고 subfunc이라는 함수에서 참조 사용하는 프로그램

#include <iostream>
using namespace std;

int total;
void subfunc(int count);

int main(void)
{
	int i = 1;
	total = 0;

	while (i <= 10)
		subfunc(i++);

	cout << "total = " << total << endl;

	return 0;
}

void subfunc(int count) {
	extern int total;		// 전역변수 total에 대한 참조 선언 (생략 가능)

	for (int i = 0; i < count; i++)
		total += i;
}