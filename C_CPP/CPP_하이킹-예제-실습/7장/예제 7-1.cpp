// 예제 7-1.cpp
// 배열의 원소를 출력하는 함수 사용하기

#include <iostream>
using namespace std;

void prn(int* pa, int size);

void main()
{
	int a[5] = { 10,20,30,40,50 };
	prn(a, 5);		// 배열의 시작주소(a)가 함수(prn)로 전달
}

void prn(int* pa, int size) {
	for (int i = 0; i < size; i++) {
		cout << "\t" << *(pa + i);		// == pa[i]
	}
	cout << endl;
}
