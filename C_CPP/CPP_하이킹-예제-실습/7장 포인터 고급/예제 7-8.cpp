// 예제 7-8.cpp
// 포인터 배열을 매개변수로 사용하는 함수

#include <iostream>
using namespace std;

void print_string(char** pptr, int n);

void main()
{
	char* ptr[3] = { (char*)"rabbit", (char*)"tiger", (char*)"cow" };		// (char*)		<<== error c2440 해결법..
	print_string(ptr, 3);
}

void print_string(char** pptr, int n) {
	for (int i = 0; i < n; i++)
		cout << pptr[i] << endl;	// *(pptr+i)
}
