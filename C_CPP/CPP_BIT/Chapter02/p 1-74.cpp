// p 1-74.cpp
// 함수 포인터를 이용한 swap 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

void int_swap(void* x, void* y) { int p = *(int*)x; *(int*)x = *(int*)y = p; }
void int_reset(void* x, void* y) { *(int*)x = *(int*)y = 0; }
void char_swap(void* x, void* y) {
	char* p = new char[strlen((char*)x) + 1];
	strcpy(p, (char*)x);
	strcpy((char*)x, (char*)y);
	strcpy((char*)y, (char*)p);
}

void (*fp) (void*, void*);

int main(void)
{
	int i = 1, j = 2;
	char p[] = "first";
	char q[] = "second";

	fp = int_swap;
	cout << "Before swap : i = " << i << ", j = " << j << endl;
	fp(&i, &j);
	cout << "After  swap : i = " << i << ", j = " << j << endl;

	cout << "-----------------------------------------" << endl;

	fp = &int_reset;		// &는 붙여도 되고 붙이지 않아도 된다.
	cout << "Before Reset : i = " << i << ", j = " << j << endl;
	fp(&i, &j);
	cout << "After  Reset : i = " << i << ", j = " << j << endl;

	cout << "-----------------------------------------" << endl;

	fp = char_swap;
	cout << "Before swap : p = " << p << ", q = " << q << endl;
	fp(p, q);
	cout << "After  swap : p = " << p << ", q = " << q << endl;

	return 0;
}