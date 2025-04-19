// p 1-79.cpp	조건부 컴파일(2)
// 헤더 파일을 여러번 포함시켜도 중복 정의 되지 않음을 보여주는 프로그램

#include <iostream>
#include "p 1-79.h"
#include "p 1-79.h"		// 같은 헤더 파일을 두번 포함시켰다.
using namespace std;

int main(void)
{
	struct phone myphone = { "Hong, Gil-Dong", "111-1234", 20 };
	printphone(myphone);

	return 0;
}