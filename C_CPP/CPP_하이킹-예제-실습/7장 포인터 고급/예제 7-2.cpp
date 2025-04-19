// 예제 7-2.cpp
// 포인터 변수를 배열로 표현하기

#include <iostream>
using namespace std;

void prn(int a[], int size);

void main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	prn(a, 5);

	cout << " main 함수 sizeof(a) : " << sizeof(a) << endl;
}

// == void prn(int* a, int size)
void prn(int a[], int size) {		// 함수에게 보내지는 것은 배열의 시작 주소 (int a[]), 배열의 개수(int size)
	for (int i = 0; i < size; i++)
		cout << "\t" << a[i];
	cout << endl;
	cout << "  prn 함수 sizeof(a) ; " << sizeof(a) << endl;
}
