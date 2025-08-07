// 예제 6-1.cpp
// 배열 선언 후 값을 대입하고 원소 출력하기

#include <iostream>
using namespace std;

void main()
{
	int a[5];
	int i;

	// 배열 초기화
	a[0] = 50;
	a[1] = 100;
	a[2] = 150;
	a[3] = 200;
	a[4] = 250;

	for (i = 0; i < 5; i++)
		cout << a[i] << "\t ";
	cout << endl;
}
