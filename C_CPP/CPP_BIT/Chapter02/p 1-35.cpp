// p 1-35.cpp
// 문자열 상수 테스트 프로그램

//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	char p[] = "TIGERS";		// p는 내용은 바꿀 수 있지만, 주소를 바꿀 수 없는 상수 포인터!
//	p[0] = 'L';		// OK!!
//	cout << "p = " << p << endl;
//
//	char* q = "TIGERS";		// q는 내용은 바꿀 수 없고, 주소는 바꿀 수 없는 포인터!
//	q[0] = 'L';		// error
//
//	cout << "q = " << q << endl;
//	q = p;		// OK!!
//	cout << "q = " << q << endl;
//
//	const char* x = "Animals";
//	const char* y = "Animals";
//
//	if (x == y)
//		cout << "x = y " << endl;
//	else
//		cout << "x != y" << endl;
//
//	return 0;
//}





// 인자를 상수로 받는 함수의 예제 프로그램

#include <iostream>
using namespace std;

void cf(const char p[]) {
	//p[0] = 'L';		// error!
}
void f(char p[]) {
	p[0] = 'L';
}

int main(void)
{
	char str[] = "ITGERS";
	cf(str);
	f(str);
	cout << "string = " << str << endl;

	return 0;
}