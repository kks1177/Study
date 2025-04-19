// p 1-28.cpp	배열(1)
// int형 배열을 선언하고 초기화한 값을 출력하는 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	int i;
	int arr1[10];	// 초기화하지 않은 상태
	int arr2[10] = { 1,2,3,4,5,6,7,8 };		// 10개 중 8개의 값을 초기화함

	for (i = 0; i < 10; i++) {
		cout << "arr1[" << i << "] = " << arr1[i] << endl;
	}

	cout << "---------------------------------------" << endl;

	for (i = 0; i < 10; i++) {
		cout << "arr2[" << i << "] = " << arr2[i] << endl;
	}
	return 0;
}