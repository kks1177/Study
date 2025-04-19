// ex 9-6.cpp
// #ifdef문, #ifndef문 사용하기

#include <iostream>
using namespace std;

// 매크로 함수
#define _MYDEBUG 10			// 주석 처리하면 #ifndef문 실행

// #ifdef : 특정 매크로가 정의되어 있는지 체크
#ifdef _MYDEBUG
void sub() {
	cout << " debug \n";
}
#endif

// #ifndef : if not define
#ifndef _MYDEBUG
void sub() {
	cout << " release \n";
}
#endif

/* 구조체 선언부 */

/* 함수 선언부 */

/* 메인함수 */
int main()
{
	sub();
}

/* 함수 정의부 */
