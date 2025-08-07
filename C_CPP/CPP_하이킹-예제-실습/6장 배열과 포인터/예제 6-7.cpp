// 예제 6-7.cpp
// 배열 원소의 주소 알아보기

#include <iostream>
using namespace std;

void main()
{
	int a[5] = { 10,20,30,40,50 };
	int i;

	cout << " 원소의 값을 출력 " << endl;
	for (i = 0; i < 5; i++)
		cout << a[i] << " ";
	cout << endl;

	cout << " 원소의 주소 값을 출력 " << endl;
	for (i = 0; i < 5; i++)
		cout << &a[i] << " ";
	cout << endl;
}
