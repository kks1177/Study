// p 1-31.cpp	Reference(2)
// 레퍼런스와 포인터를 이용한 Call-by-Reference 프로그램

#include <iostream>
using namespace std;

void increment(int& aa) { aa++; }
void incr(int* p) { (*p)++; }

int main(void)
{
	int x = 1;

	increment(x);
	cout << "x = " << x << endl;

	incr(&x);
	cout << "x = " << x << endl;

	return 0;
}