// 예제 7-5.cpp
// 배열의 원소값이 변하지 않도록 막기 위한 형식 매개변수 지정하기 

/*
const int* p = &a;			// 주소 변경 가능, 내용 변경 불가능
int* const p = &a;			// 내용 변경 가능, 주소 변경 불가능
const int* const p = &a;	// 주소 변경 불가능, 내용 변경 불가능
*/

#include <iostream>
using namespace std;

void prn(const int* p, int size);

void main()
{
	int a[5] = { 10,20,30,40,50 };
	int size = sizeof(a) / sizeof(a[0]);

	prn(a, size);
}

void prn(const int* p, int size) {
	for (int i = 0; i < 5; i++)
		cout << p[i] << "\t";
	cout << endl;
	//	p[0] = 100;		// 내용 변경 불가능, 주소 변경 가능
}
