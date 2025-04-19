// 예제 9-4.cpp
// 매크로 함수, 인라인 함수, 일반 함수의 차이점 살펴보기

// 일반 함수를 사용할 때보다 매크로·인라인 함수를 사용하는 것이 더욱 빠름
// 인라인 함수가 매크로 함수보다 안정적

#include <iostream>
using namespace std;

#define add1(a, b) a+b

inline int add2(int a, int b) {
	return a + b;
}
int add3(int a, int b) {
	return a + b;
}

void main()
{
	int result;

	result = 2 * add1(10, 20);
	cout << "macro 함수 => " << result << endl;

	result = 2 * add2(10, 20);
	cout << "inline 함수 => " << result << endl;

	result = 2 * add3(10, 20);
	cout << "일반 함수 => " << result << endl;
}
