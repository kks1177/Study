// p 1-27.cpp	포인터(3)-void*
// void 포인터 테스트 프로그램

#include <iostream>
using namespace std;

int main(void)
{
	char str[] = "Pointer to void test";
	void* ps = str;

	cout << "ps = " << ps << endl;
	cout << "(char*)ps = " << (char*)ps << endl;

	//int* pi1 = ps;	// error
	int* pi2 = (int*)ps;

	//cout << "pi2 = " << static_cast<char*>(pi2) << endl;		// error
	cout << "pi2 = " << static_cast<int*>(pi2) << endl;
}