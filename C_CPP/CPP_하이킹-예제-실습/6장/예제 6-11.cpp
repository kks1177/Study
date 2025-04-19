// 예제 6-11.cpp
// 포인터 형태로 배열의 원소값 출력하기

#include <iostream>
using namespace std;

void main()
{
	int a[5] = { 10,20,30,40,50 };
	int i;

	for (i = 0; i < 5; i++)
		cout << "   a+i : " << a+i << "\t &a[i] : " << &a[i] << endl;
	cout << "---------------------------------------------" << endl;
	for (i = 0; i < 5; i++)
		cout << " *(a+i) : " << *(a+i) << "\t\t  a[i] : " << a[i] << endl;
}
