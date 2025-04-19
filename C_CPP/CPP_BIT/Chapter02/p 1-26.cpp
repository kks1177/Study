// p 1-26.cpp	포인터(2)
// 포인터를 사용하여 배열을 다루는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int* parr = arr;
	int i = 0;

	cout << "arr의 값 = " << arr << endl;
	cout << "parr의 값 = " << parr << endl;
	cout << "&arr[0]의 값 = " << &arr[0] << endl;

	for (i = 0; i < 6; i++) {
		cout << "arr[" << i << "] = " << arr[i] << "\t";
		cout << "*(arr+" << i << ") = " << *(arr + i) << "\t";
		cout << "*(parr+" << i << ") = " << *(parr + i) << "\t";
		cout << "parr[" << i << "] = " << parr[i] << endl;
	}

	return 0;
}