// ex 7-5.cpp
// 배열의 원소값이 변하지 않도록 막기 위한 형식 매개변수 지정하기 

#include <iostream>
using namespace std;

void prn(const int* p, int size);

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int size = sizeof(a) / sizeof(a[0]);

	prn(a, size);
}

void prn(const int* p, int size) {		// 함수 호출 후에 배열의 원소값이 변하지 않도록 막기 위한 형식 매개변수
	for (int i = 0; i < 5; i++) {
		cout << p[i] << "\t";
	}
	cout << endl;
	// p[0] = 100;			// const int* p  :  포인터가 가리키는 대상의 값 변경 x, 주소 변경 o 
}