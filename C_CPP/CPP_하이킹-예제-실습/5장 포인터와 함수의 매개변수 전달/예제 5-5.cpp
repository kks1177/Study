// 예제 5-5.cpp
// 절대값을 구하는 함수를 통해 값에 의한 전달 방식 익히기

#include <iostream>
using namespace std;

void absolute(int a);

void main()
{
	int a = -10;
	cout << " main 에서 함수 호출 전 a 값 = " << a << "\n";		// a = -10
	
	absolute(a);
	cout << " main 에서 함수 호출 후 a 값 = " << a << "\n";		// a = -10
}

void absolute(int a) {
	if (a < 0)
		a = -a;
	cout << " absolute 함수에서의 a 값 = " << a << "\n";		// a = 10
}
