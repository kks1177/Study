// 예제 9-5.cpp
// 조건부 컴파일을 위한 선행처리자 살펴보기

#include <iostream>
using namespace std;

#define MAX 20

void main()
{
	int size;

#if MAX > 100
	size = 100;

#elif MAX > 10
	size = 10;

#else
	size = 0;

#endif

	cout << " size = " << size << endl;
}
