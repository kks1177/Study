// p 1-63.cpp	반환 값
// 다양한 반환 값의 형태를 갖는 함수들에 대한 프로그램을 실행시켜보고 오류가 발생하는 부분을 수정하시오.

#include <iostream>
using namespace std;

int local_val_return() { int i = 1; return i; }
int* local_addr_return() { int i = 2; return &i; }
int& local_ref_return() { int i = 3; return i; }

int* local_constptr_return() { return (int*)4; }		// (int*) 추가
int& local_constref_return() { return 4; }

int main(void)
{
	int retval;
	int* pretval;

	retval = local_val_return();
	cout << "retval = " << retval << endl;

	pretval = local_addr_return();
	cout << "retval = " << pretval << endl;

	retval = local_ref_return();
	cout << "retval = " << retval << endl;

	retval = local_constref_return();
	cout << "retval = " << retval << endl;

	return 0;
}