// 예제 6-10.cpp
// 포인터를 사용해서 배열의 각 원소값을 출력하기

#include <iostream>
using namespace std;

void main()
{
	int a[5] = { 10,20,30,40,50 };

//						   bad						   good
	cout << " a[0] : " << a[0] << " \t     *a : " <<     *a << endl;
	cout << " a[1] : " << a[1] << " \t   *a+1 : " <<   *a+1 << endl;
	cout << " a[1] : " << a[1] << " \t *(a+1) : " << *(a+1) << endl;
}
