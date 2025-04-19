// ex 7-1.cpp
// 배열의 원소를 출력하는 함수 사용하기

#include <iostream>
using namespace std;

void prn(int* pa, int size);  

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };

	prn(a, 5);		// 여기서 a 는 배열의 시작 주소
}

void prn(int* pa, int size) {
	for (int i = 0; i < size; i++) {
		cout << "\t" << *(pa + i);		// pa[i]; 와 같이 표현할 수 있음
	}
	cout << endl;
}