// p 1-34.cpp	 Constant(2)-상수
// 다음의 프로그램에서 오류가 나는 곳을 찾아보고 극 이유를 말해보자.

#include <iostream>
using namespace std;

int main(void)
{
	char s[] = "tiger";
	char p[] = "lion";
	const char* pc = s;
	pc[3] = 'g';		// error
	pc = p;

	char* const cp = s;
	cp[3] = 'a';
	cp = p;			// error

	const char* const cpc = s;
	cpc[3] = 'a';		// error
	cpc = p;		// error

	return 0;
}
