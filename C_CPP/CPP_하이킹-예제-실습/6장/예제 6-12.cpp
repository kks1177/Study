// 예제 6-12.cpp
// 배열과 포인터 변수의 관계 알아보기 

#include <iostream>
using namespace std;

void main()
{
	int a[5] = { 10,20,30,40,50 };
	int* p;
	p = a;		// 포인터 변수 p에 a배열의 시작 주소 대입

	cout << "\n     *p : " << *p;			// 10
	cout << "\t  a[0] : " << a[0];			// 10

	cout << "\n *(p+1) : " << *(p+1);		// 20
	cout << "\t  a[1] : " << a[1];			// 20

	cout << "\n *(p+2) : " << *(p+2);		// 30
	cout << "\t  a[2] : " << a[2] << endl;	// 30
}
