// ex 7-8.cpp
// 포인터 배열을 매개변수로 사용하는 함수

#include <iostream>
using namespace std;

void print_string(const char** pptr, int n);

int main()
{
	const char* ptr[3] = { "rabbit", "tiger", "cow" };

	print_string(ptr, 3);
}

void print_string(const char** pptr, int n) {
	for (int i = 0; i < n; i++) {
		cout << pptr[i] << endl;			// == *(pptr+i)
	}
}