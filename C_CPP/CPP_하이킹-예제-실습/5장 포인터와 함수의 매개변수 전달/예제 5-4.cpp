// 예제 5-4.cpp
// 값에 의한 전달 방식의 함수 익히기

#include <iostream>
using namespace std;

int add(int x, int y);

void main()
{
	int a = 10, b = 20;		// 실 매개변수
	int sum;

	sum = add(a, b);
	cout << " sum = " << sum << "\n";
}

int add(int x, int y) {		// 형식 매개변수
	int z;

	z = x + y;
	return(z);
}
